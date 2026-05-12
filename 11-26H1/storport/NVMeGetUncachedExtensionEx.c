/*
 * XREFs of NVMeGetUncachedExtensionEx @ 0x1400797D4
 * Callers:
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x140072258 (RaidDmaAllocateUncachedExtension.c)
 *     RaidDmaGetAdapterInfo @ 0x1400722BC (RaidDmaGetAdapterInfo.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x140187DDC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall NVMeGetUncachedExtensionEx(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _DWORD v12[4]; // [rsp+40h] [rbp-78h] BYREF
  char v13; // [rsp+50h] [rbp-68h]

  v6 = 0x80000000;
  memset_0(v12, 0, 0x58uLL);
  if ( *(_DWORD *)(a1 + 1352) )
    return *(_QWORD *)(a1 + 1336);
  if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 1160) )
  {
    if ( (int)RaidInitializeDma(v7, *(_QWORD *)(a1 + 32), a1 + 176) < 0 )
      return 0LL;
    v12[0] = 1;
    if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1160), (__int64)v12) >= 0 && (v13 & 2) != 0 )
      *(_DWORD *)(a1 + 992) |= 8u;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      v6 = *(_DWORD *)(a1 + 1024);
    if ( *(_BYTE *)(a2 + 144) == 2 )
    {
      if ( *(_QWORD *)(a1 + 1376) < 0x100000000uLL )
        *(_QWORD *)(a1 + 1376) = -1LL;
      *(_QWORD *)(a1 + 1392) = 0x100000000LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 144) != 3 )
        goto LABEL_19;
      if ( *(_QWORD *)(a1 + 1376) < 0x100000000uLL )
        *(_QWORD *)(a1 + 1376) = -1LL;
      *(_QWORD *)(a1 + 1392) = 0LL;
    }
    *(_QWORD *)(a1 + 1408) = -1LL;
  }
LABEL_19:
  if ( (int)RaidDmaAllocateUncachedExtension(
              a1 + 1160,
              a3,
              *(_QWORD *)(a1 + 1384),
              *(_QWORD *)(a1 + 1376),
              *(_QWORD *)(a1 + 1392),
              *(_DWORD *)(a1 + 1368),
              v6,
              a1 + 1336) < 0
    && (v6 == 0x80000000
     || (int)RaidDmaAllocateUncachedExtension(
               a1 + 1160,
               a3,
               *(_QWORD *)(a1 + 1384),
               *(_QWORD *)(a1 + 1376),
               *(_QWORD *)(a1 + 1392),
               *(_DWORD *)(a1 + 1368),
               0x80000000,
               a1 + 1336) < 0) )
  {
    return 0LL;
  }
  if ( *(_BYTE *)(a2 + 144) == 4 )
  {
    v9 = *(_QWORD *)(a1 + 1344);
    v10 = v9 | 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 1400) = v9 & 0xFFFFFFFF00000000uLL;
    v11 = *(_QWORD *)(a1 + 1384) == 0LL;
    *(_QWORD *)(a1 + 1408) = v9 | 0xFFFFFFFFLL;
    if ( v11 )
      v9 &= 0xFFFFFFFF00000000uLL;
    *(_QWORD *)(a1 + 1376) = v10;
    *(_QWORD *)(a1 + 1384) = v9;
  }
  return *(_QWORD *)(a1 + 1336);
}
