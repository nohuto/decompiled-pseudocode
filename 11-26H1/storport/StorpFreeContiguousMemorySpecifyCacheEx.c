/*
 * XREFs of StorpFreeContiguousMemorySpecifyCacheEx @ 0x14003E480
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpFreeContiguousMemorySpecifyCacheEx(
        __int64 a1,
        void *a2,
        SIZE_T a3,
        MEMORY_CACHING_TYPE a4,
        __int64 a5)
{
  bool v6; // zf

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    if ( !*(_BYTE *)(a1 + 904) )
      goto LABEL_3;
    v6 = *(_DWORD *)(a1 + 924) == 3;
  }
  else
  {
    if ( *(_DWORD *)a1 != 1314275652 || !*(_BYTE *)(a1 + 1168) )
      goto LABEL_3;
    v6 = *(_DWORD *)(a1 + 1188) == 3;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, void *, char))(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 896),
      (unsigned int)a3,
      a5,
      a2,
      1);
    return 0LL;
  }
LABEL_3:
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x2000) != 0 && a3 <= 0x1000 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0x45416152u);
  }
  else
  {
    MmFreeContiguousMemorySpecifyCache(a2, a3, a4);
  }
  return 0LL;
}
