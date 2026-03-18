/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1408A81B4
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14071FA40 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
