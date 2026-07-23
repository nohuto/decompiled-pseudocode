/*
 * XREFs of RtlpSetHeapWalkEntryOverheadBytes @ 0x180095230
 * Callers:
 *     RtlpWalkHeap @ 0x180093700 (RtlpWalkHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpSetHeapWalkEntryOverheadBytes(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = (*(_BYTE *)(a1 + 18) & 2) == 0;
  *(_BYTE *)(a1 + 16) = a2;
  if ( v2 )
    *(_QWORD *)(a1 + 36) = a2;
}
