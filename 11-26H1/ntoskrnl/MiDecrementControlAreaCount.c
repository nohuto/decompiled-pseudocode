/*
 * XREFs of MiDecrementControlAreaCount @ 0x1404A9360
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x1402EDB60 (MiCheckForControlAreaDeletion.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  if ( _InterlockedDecrement64(a2) <= -1 )
    __fastfail(0xEu);
  v2 = *(_QWORD *)(a1 + 2120);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 2128);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 3160), 0, 0);
  }
  return v2;
}
