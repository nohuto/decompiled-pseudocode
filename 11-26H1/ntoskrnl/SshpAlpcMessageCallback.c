/*
 * XREFs of SshpAlpcMessageCallback @ 0x1407EA2C0
 * Callers:
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1404277C0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140427800 (AlpcInitializeMessageAttribute.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407EA404 (SshpAlpcProcessAlpcMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall SshpAlpcMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _ALPC_MESSAGE_ATTRIBUTES *ReceiveMessageAttributes; // rbx
  _PORT_MESSAGE *ReceiveMessage; // rdi
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG_PTR BufferLength; // [rsp+78h] [rbp+20h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessageAttributes = (_ALPC_MESSAGE_ATTRIBUTES *)ExAllocatePool2(0x100uLL);
  if ( ReceiveMessageAttributes )
  {
    ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(0x100uLL);
    if ( ReceiveMessage )
    {
      memset_0(ReceiveMessageAttributes, 0, 0xA0uLL);
      memset_0(ReceiveMessage, 0, 0x40uLL);
      AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
      while ( 1 )
      {
        BufferLength = 64LL;
        if ( ZwAlpcSendWaitReceivePort(
               (HANDLE)PsAltSystemCallRegistrationLock.Padding[3],
               0,
               0LL,
               0LL,
               ReceiveMessage,
               &BufferLength,
               ReceiveMessageAttributes,
               &Timeout) )
        {
          break;
        }
        MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(ReceiveMessageAttributes, 0x20000000u);
        SshpAlpcProcessAlpcMessage(ReceiveMessage, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
        Timeout.QuadPart = 0LL;
      }
      CmpFreeTransientPoolWithTag(ReceiveMessage, 0x70687373u);
    }
    CmpFreeTransientPoolWithTag(ReceiveMessageAttributes, 0x70687373u);
  }
}
