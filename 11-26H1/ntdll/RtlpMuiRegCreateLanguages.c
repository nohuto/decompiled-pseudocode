/*
 * XREFs of RtlpMuiRegCreateLanguages @ 0x18014D290
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180122270 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800D6560 (_SafeAllocBlob.c)
 */

_QWORD *RtlpMuiRegCreateLanguages()
{
  _QWORD *result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = SafeAllocBlob(0x18u, 4u, 0x1Cu, 0, 0, &v1);
  if ( result )
  {
    *(_DWORD *)result = v1;
    result[2] = result + 3;
    *((_DWORD *)result + 1) = 4;
  }
  return result;
}
