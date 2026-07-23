/*
 * XREFs of PopBatteryIrpComplete @ 0x1404DA220
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  bool v4; // bl
  int v6; // edx

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 == -1073741536 )
  {
    v4 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 104);
    v4 = 1;
    if ( v3 < 0 )
    {
      *(_DWORD *)(a3 + 104) = v6 != 0 ? 2 : 4;
      v4 = v6 != 0;
    }
    else if ( !v6 )
    {
      *(_DWORD *)(a3 + 108) = *(_DWORD *)(a3 + 188);
      *(_DWORD *)(a3 + 104) = 1;
    }
  }
  KeSetEvent((PRKEVENT)(a3 + 80), 0, 0);
  if ( v4 )
    PopBatteryQueueWork(1LL);
  return 3221225494LL;
}
