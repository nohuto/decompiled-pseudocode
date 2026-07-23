/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1408AE624
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140724660 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
