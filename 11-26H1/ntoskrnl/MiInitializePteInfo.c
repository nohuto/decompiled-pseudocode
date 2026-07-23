/*
 * XREFs of MiInitializePteInfo @ 0x140D05208
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x140D0033C (MiInitializeSystemSpaceMap.c)
 *     MiInitializeKernelStacks @ 0x140D02980 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140D05144 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiInitializePteInfo(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v9; // r8
  char v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  int v15; // r14d

  v9 = a7;
  v11 = a4;
  v12 = (a7 + (a6 >> 12) - 1) / a7;
  v13 = 0LL;
  v14 = ((((v12 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v15 = (dword_140FBF20C & 2) != 0 ? 3 : 1;
  if ( !a3 )
  {
    if ( (dword_140FBF20C & 2) != 0 )
    {
      v13 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, (int)v14 * v15, a7, a4);
      if ( v13 )
      {
LABEL_6:
        a3 = (__int64)(v13 << 25) >> 16;
        goto LABEL_7;
      }
      v15 = 1;
    }
    v13 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v14, v9, a4);
    if ( !v13 )
      return 0LL;
    goto LABEL_6;
  }
LABEL_7:
  if ( !(unsigned int)MiInitializeDynamicBitmap(a1, a3, v12, v11) )
  {
    if ( v13 )
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v13, v14);
    return 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( a7 == 16 )
    *(_DWORD *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 44) = a2;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a8;
  *(_QWORD *)(a1 + 32) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)a1 = 0LL;
  if ( v15 != 1
    && (unsigned int)MiInitializeDynamicBitmap(
                       a1 + 16,
                       a3 + ((((v12 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL),
                       2 * v12,
                       4) )
  {
    *(_DWORD *)(a1 + 40) |= 4u;
  }
  return 1LL;
}
