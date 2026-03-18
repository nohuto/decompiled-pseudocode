/*
 * XREFs of AddResidencyPerfCountersCB @ 0x14011C6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddResidencyPerfCountersCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *a3,
        _QWORD *a4)
{
  int v4; // eax
  unsigned __int64 v5; // r10

  v4 = *((_DWORD *)a1 + 24);
  v5 = (unsigned __int64)*((unsigned int *)a3 + 3) << 12;
  if ( _bittest(&v4, *((unsigned __int8 *)a3 + 16)) )
    a4[30] += v5;
  else
    a4[29] += v5;
  return 0LL;
}
