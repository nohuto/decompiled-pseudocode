/*
 * XREFs of PopUmpoProcessMessages @ 0x140AA766C
 * Callers:
 *     PopUmpoMessageCallback @ 0x1404C5F00 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1404277C0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140427800 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x1407D87CC (PopDiagTraceUmpoAlpcProcessingError.c)
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  _PORT_MESSAGE *ReceiveMessage; // rdi
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  NTSTATUS v2; // ebx
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+58h] [rbp-B0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer; // [rsp+68h] [rbp-A0h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(0x100uLL);
  if ( !ReceiveMessage )
    goto LABEL_6;
  memset_0(&Buffer, 0, 0xA0uLL);
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000u, &Buffer, 0xA0uLL, RequiredBufferSize);
    BufferLength = 4096LL;
    v2 = ZwAlpcSendWaitReceivePort(
           PopPdcDeviceListLock.TrapFrame,
           0,
           0LL,
           0LL,
           ReceiveMessage,
           &BufferLength,
           &Buffer,
           &Timeout);
    if ( v2 )
      break;
    MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(&Buffer, 0x20000000u);
    PopUmpoProcessMessage(ReceiveMessage, MessageAttribute);
  }
  ExFreePoolWithTag(ReceiveMessage, 0);
  if ( v2 < 0 )
LABEL_6:
    PopDiagTraceUmpoAlpcProcessingError();
}
