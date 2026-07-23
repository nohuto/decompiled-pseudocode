/*
 * XREFs of HvpAllocateBin @ 0x140A8F15C
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1408638B8 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140863984 (HvpMapHiveImage.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpAllocateNonPagedBin @ 0x140A8F1BC (HvpAllocateNonPagedBin.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)HvpAllocateNonPagedBin(a1, a2, a5);
  }
  else
  {
    v5 = 0;
    v6 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 0;
    v7 = guard_dispatch_icall_no_overrides(v6, a2);
    if ( v7 )
      *a5 = v7;
    else
      return (unsigned int)-1073741670;
  }
  return v5;
}
