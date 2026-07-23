/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x140427800
 * Callers:
 *     SshpAlpcMessageCallback @ 0x1407EA2C0 (SshpAlpcMessageCallback.c)
 *     PopUmpoProcessMessages @ 0x140AA766C (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140427870 (AlpcGetHeaderSize.c)
 */

NTSTATUS __cdecl AlpcInitializeMessageAttribute(
        ULONG AttributeFlags,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        SIZE_T BufferSize,
        PSIZE_T RequiredBufferSize)
{
  ULONG HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(AttributeFlags);
  *RequiredBufferSize = HeaderSize;
  if ( HeaderSize > BufferSize )
    return -1073741789;
  if ( Buffer )
  {
    Buffer->AllocatedAttributes = AttributeFlags;
    Buffer->ValidAttributes = 0;
  }
  return 0;
}
