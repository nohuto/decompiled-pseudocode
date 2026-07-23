/*
 * XREFs of ExpGetEntryBilledProcess @ 0x14041CBC0
 * Callers:
 *     ExQueryPoolBlockSize @ 0x1406CFFC0 (ExQueryPoolBlockSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetEntryBilledProcess(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 3);
  if ( (v1 & 8) == 0 )
    return -1LL;
  if ( (v1 & 4) != 0 )
    a1 += -16LL * (unsigned __int8)*(_WORD *)a1;
  return a1 ^ (__int64)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ *(_QWORD *)(a1 + 8);
}
