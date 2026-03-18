/*
 * XREFs of Isoch_EP_StartMapping @ 0x140034B30
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdx

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 336), 0);
  *(_DWORD *)(a1 + 384) = 0;
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 108), 3) )
    Isoch_MapTransfers(a1, v3);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
