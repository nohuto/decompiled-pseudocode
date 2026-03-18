/*
 * XREFs of Bulk_EP_StartMapping @ 0x14003AD30
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x14000FBB0 (Bulk_MapTransfers.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     TR_AttemptStateChange @ 0x140020250 (TR_AttemptStateChange.c)
 */

void __fastcall Bulk_EP_StartMapping(__int64 a1)
{
  char v2; // si

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 332), 0);
  *(_DWORD *)(a1 + 360) = 0;
  if ( !(unsigned int)TR_AttemptStateChange(a1, 5, 3) )
    Bulk_MapTransfers(a1);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
