/*
 * XREFs of MiWorkingSetManager @ 0x1404B7850
 * Callers:
 *     MiTrimmingThread @ 0x1404B7730 (MiTrimmingThread.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiComputeSystemTrimCriteria @ 0x1402A59C4 (MiComputeSystemTrimCriteria.c)
 *     MiWakeMappedPageWriter @ 0x1402A729C (MiWakeMappedPageWriter.c)
 *     MiScanPagefiles @ 0x1402A72EC (MiScanPagefiles.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 *     MiPruneProcessLargePageCaches @ 0x1402A83C4 (MiPruneProcessLargePageCaches.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 *     MiAdjustModifiedPageLoad @ 0x1404B5B78 (MiAdjustModifiedPageLoad.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

int __fastcall MiWorkingSetManager(unsigned __int64 a1, int a2)
{
  int v2; // esi
  int v3; // edi
  KIRQL v6; // al
  unsigned __int64 v7; // rsi
  volatile LONG *v8; // rcx
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  KIRQL v12; // al
  unsigned __int64 v13; // rbp
  volatile LONG *v14; // rcx
  int v15; // r15d
  int v17; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v18[156]; // [rsp+24h] [rbp-B4h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 == 3 )
  {
    LOBYTE(v3) = MiWalkAllHardLimitWorkingSets(a1, 1) != 0;
  }
  else
  {
    while ( 1 )
    {
      memset_0(v18, 0, sizeof(v18));
      v10 = *(_DWORD *)(a1 + 4);
      v17 = 0;
      if ( (v10 & 0x10) != 0 )
        break;
      v11 = MiComputeSystemTrimCriteria(a1, (__int64)&v17);
      if ( !v11 || (*(_DWORD *)(a1 + 4) & 1) != 0 )
        break;
      v3 = 1;
      MiTrimAllWorkingSets(a1, (__int64)&v17);
      if ( v11 == 2 )
        goto LABEL_4;
      v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 272));
      v13 = *(_QWORD *)(a1 + 18496);
      v14 = (volatile LONG *)(a1 + 272);
      v15 = *(_DWORD *)(a1 + 18504);
      if ( v12 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(v14);
      else
        ExReleaseSpinLockShared(v14, v12);
      MiAdjustModifiedPageLoad(a1, v13, v15);
      v2 = 1;
    }
  }
  if ( v3 )
  {
LABEL_4:
    if ( !v2 )
    {
      v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 272));
      v7 = *(_QWORD *)(a1 + 18496);
      v8 = (volatile LONG *)(a1 + 272);
      v9 = *(_DWORD *)(a1 + 18504);
      if ( v6 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      else
        ExReleaseSpinLockShared(v8, v6);
      MiAdjustModifiedPageLoad(a1, v7, v9);
    }
  }
  if ( a2 == 4 )
  {
    MiPruneProcessLargePageCaches(a1, 0);
    MiAdjustCachedStacks(a1, 0);
    MiScanPagefiles(a1);
  }
  return MiWakeMappedPageWriter(a1);
}
