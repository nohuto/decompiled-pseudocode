/*
 * XREFs of MiProbeAndLockComplete @ 0x1403A1DB0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x1404ED400 (MiAddMdlTracker.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EF63C (MmUnlockPhysicalPagesByVa.c)
 */

void __fastcall MiProbeAndLockComplete(unsigned __int64 *a1, int a2)
{
  __int64 v4; // r8
  struct _MDL *v5; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned int v8; // r10d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  MiUnlockProbePacketWorkingSet(a1);
  v5 = (struct _MDL *)a1[8];
  v6 = a1 + 12;
  if ( !_bittest64((const signed __int64 *)a1 + 12, 0x39u) )
  {
    v7 = (unsigned __int64)v5->StartVa + v5->ByteOffset;
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(a1[8]);
    if ( (unsigned int)MiGetSystemRegionType(v7) == 4 )
    {
      v6 = a1 + 12;
      if ( (unsigned __int8)DifObjTrkIsKvEnabledForPlugin(56LL) )
        DifObjTrkInsertItem(v8, v7, v5->ByteCount, v5);
    }
  }
  if ( a2 < 0 )
  {
    if ( (*v6 & 0x200000000000000LL) != 0 )
    {
      v9 = *a1;
      v10 = a1[1];
      if ( v10 > *a1 )
        MmUnlockPhysicalPagesByVa(v9, v10 - v9, v4, (*v6 >> 1) & 3LL);
      LODWORD(v9) = KeGetPcr()->Prcb.Number;
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1[11] + 1040) + ((((v9 >> 1) & 3) + 9) << 6)),
        -(__int64)((a1[2] - a1[1]) >> 12));
    }
    else
    {
      MmUnlockPages(v5);
    }
    ++stru_140E2ED08.QueuePriority;
  }
}
