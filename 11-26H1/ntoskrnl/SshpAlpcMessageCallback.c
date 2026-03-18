/*
 * XREFs of SshpAlpcMessageCallback @ 0x1407E4760
 * Callers:
 *     SshpAlpcInitialize @ 0x140CD768C (SshpAlpcInitialize.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140438B60 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140438BA0 (AlpcInitializeMessageAttribute.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407E48A4 (SshpAlpcProcessAlpcMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall SshpAlpcMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _DWORD *Pool2; // rbx
  void *v4; // rdi
  char *MessageAttribute; // rax
  _QWORD v6[2]; // [rsp+48h] [rbp-10h] BYREF

  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v4 = (void *)ExAllocatePool2(0x100uLL);
    if ( v4 )
    {
      memset_0(Pool2, 0, 0xA0uLL);
      memset_0(v4, 0, 0x40uLL);
      AlpcInitializeMessageAttribute(0x20000000LL, Pool2, 0xA0uLL, v6);
      while ( !(unsigned int)ZwAlpcSendWaitReceivePort((__int64)PsAltSystemCallRegistrationLock.KernelShadowStack, 0LL) )
      {
        MessageAttribute = AlpcGetMessageAttribute(Pool2, 0x20000000);
        SshpAlpcProcessAlpcMessage(v4, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000LL, Pool2, 0xA0uLL, v6);
      }
      CmpFreeTransientPoolWithTag(v4, 0x70687373u);
    }
    CmpFreeTransientPoolWithTag(Pool2, 0x70687373u);
  }
}
