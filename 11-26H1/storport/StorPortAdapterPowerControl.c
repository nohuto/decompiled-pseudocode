/*
 * XREFs of StorPortAdapterPowerControl @ 0x140081C40
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall StorPortAdapterPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  char IsAdapterControlSupported; // al
  __int64 v9; // r10
  unsigned int v10; // edx

  v7 = a1 + 376;
  IsAdapterControlSupported = RaidIsAdapterControlSupported(a1 + 376, 10);
  v9 = 0LL;
  if ( IsAdapterControlSupported )
  {
    v10 = RaCallMiniportAdapterControl(v7);
    v9 = MEMORY[0];
  }
  else
  {
    v10 = -1073741637;
  }
  *a7 = v9;
  return v10;
}
