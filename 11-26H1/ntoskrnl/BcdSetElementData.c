/*
 * XREFs of BcdSetElementData @ 0x1409D30A4
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
