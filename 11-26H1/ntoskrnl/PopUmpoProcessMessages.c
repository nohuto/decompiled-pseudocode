/*
 * XREFs of PopUmpoProcessMessages @ 0x140AAA08C
 * Callers:
 *     PopUmpoMessageCallback @ 0x1404CC760 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140CD5374 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140438B60 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140438BA0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x1407D5614 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  void *Pool2; // rdi
  char *MessageAttribute; // rax
  int v2; // ebx
  __int64 v3; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v4[40]; // [rsp+68h] [rbp-A0h] BYREF

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_6;
  memset_0(v4, 0, sizeof(v4));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000LL, v4, 0xA0uLL, &v3);
    v2 = ZwAlpcSendWaitReceivePort(*(__int64 *)&PopModernStandbyStateNotify.ThreadTimerDelay, 0LL);
    if ( v2 )
      break;
    MessageAttribute = AlpcGetMessageAttribute(v4, 0x20000000);
    PopUmpoProcessMessage(Pool2, MessageAttribute, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v2 < 0 )
LABEL_6:
    PopDiagTraceUmpoAlpcProcessingError();
}
