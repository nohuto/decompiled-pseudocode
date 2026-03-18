/*
 * XREFs of Control_EP_StartMapping @ 0x140032DD0
 * Callers:
 *     <none>
 * Callees:
 *     Control_MapTransfer @ 0x14000E500 (Control_MapTransfer.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     TR_QueueDpcForTransferCompletion @ 0x140016E34 (TR_QueueDpcForTransferCompletion.c)
 */

void __fastcall Control_EP_StartMapping(__int64 a1)
{
  char v2; // si
  KIRQL v3; // al
  __int64 v4; // rcx
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 360);
  *(_BYTE *)(a1 + 104) = v3;
  *(_QWORD *)(a1 + 368) = 0LL;
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 112) == 3;
    v6 = (KSPIN_LOCK *)(a1 + 96);
    if ( v5 )
    {
      *(_DWORD *)(a1 + 108) = 2;
      KeReleaseSpinLock(v6, v3);
      TR_QueueDpcForTransferCompletion((_QWORD *)a1);
    }
    else
    {
      *(_DWORD *)(a1 + 108) = 3;
      KeReleaseSpinLock(v6, v3);
      Control_MapTransfer(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 108) = 2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
  }
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
