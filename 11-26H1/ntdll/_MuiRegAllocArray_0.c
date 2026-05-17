/*
 * XREFs of _MuiRegAllocArray_0 @ 0x180143EC8
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall MuiRegAllocArray_0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 8LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap_0();
  }
  return result;
}
