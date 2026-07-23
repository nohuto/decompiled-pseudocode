/*
 * XREFs of _MuiRegAllocArray_0 @ 0x180143DC8
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

PVOID __fastcall MuiRegAllocArray_0(__int64 a1, unsigned int a2)
{
  PVOID result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 8LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
