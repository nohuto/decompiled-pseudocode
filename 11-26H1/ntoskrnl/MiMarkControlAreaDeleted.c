/*
 * XREFs of MiMarkControlAreaDeleted @ 0x14048CEE8
 * Callers:
 *     MiPruneUnusedList @ 0x14048F610 (MiPruneUnusedList.c)
 *     MiCleanSection @ 0x1404DF994 (MiCleanSection.c)
 *     MiEntireSubsectionIsPurged @ 0x140529CA0 (MiEntireSubsectionIsPurged.c)
 *     MiProcessDeleteOnClose @ 0x1406E7900 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiClearFilePointer @ 0x14030BBF8 (MiClearFilePointer.c)
 *     MiDrainControlAreaWrites @ 0x14048CF28 (MiDrainControlAreaWrites.c)
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
