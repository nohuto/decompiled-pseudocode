/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x1800D4EC0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcGetHeaderSize @ 0x1800D4F70 (AlpcGetHeaderSize.c)
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
