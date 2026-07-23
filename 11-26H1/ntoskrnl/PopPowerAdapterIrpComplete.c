/*
 * XREFs of PopPowerAdapterIrpComplete @ 0x1404F0F10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     PopPowerAdapterTraceFailure @ 0x14077D91C (PopPowerAdapterTraceFailure.c)
 */

__int64 __fastcall PopPowerAdapterIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  int v5; // r8d

  v4 = 0;
  v5 = *(_DWORD *)(a2 + 48);
  if ( v5 != -1073741536 )
  {
    v4 = 1;
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a3 + 128) = 1;
    }
    else
    {
      v4 = *(_DWORD *)(a3 + 128) != 2;
      PopPowerAdapterTraceFailure(a3);
    }
  }
  KeSetEvent((PRKEVENT)(a3 + 104), 0, 0);
  if ( v4 )
    PopBatteryQueueWork(1u);
  return 3221225494LL;
}
