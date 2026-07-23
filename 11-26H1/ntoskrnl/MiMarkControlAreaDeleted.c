/*
 * XREFs of MiMarkControlAreaDeleted @ 0x140486A28
 * Callers:
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiCleanSection @ 0x1404D9074 (MiCleanSection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiClearFilePointer @ 0x1402EDC78 (MiClearFilePointer.c)
 *     MiDrainControlAreaWrites @ 0x140486A68 (MiDrainControlAreaWrites.c)
 */

void __fastcall MiMarkControlAreaDeleted(__int64 a1, __int64 a2)
{
  int v3; // r8d

  v3 = *(_DWORD *)(a1 + 56) | 9;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    v3 = *(_DWORD *)(a1 + 56) | 1;
  *(_DWORD *)(a1 + 56) = v3;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1);
}
