/*
 * XREFs of PopDirectedDripsUmPowerInformationInternal @ 0x140772F20
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1407E24D0 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1407E25C8 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     PopDirectedDripsUmDirectedFxSetMode @ 0x1407E265C (PopDirectedDripsUmDirectedFxSetMode.c)
 *     PopDirectedDripsUmQueryCapabilities @ 0x1407E2730 (PopDirectedDripsUmQueryCapabilities.c)
 */

__int64 __fastcall PopDirectedDripsUmPowerInformationInternal(
        int a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  *a4 = 0;
  *a5 = 0LL;
  _m_prefetchw(dword_140F12AC0);
  v5 = dword_140F12AC0[0];
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(dword_140F12AC0, v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) == 0 )
    return 3221225659LL;
  v8 = a1 - 53;
  if ( !v8 )
    return PopDirectedDripsUmDirectedFxAddTestDevice(a2, a3);
  v9 = v8 - 1;
  if ( !v9 )
    return PopDirectedDripsUmDirectedFxRemoveTestDevice(a2, a3);
  v10 = v9 - 2;
  if ( !v10 )
    return PopDirectedDripsUmDirectedFxSetMode(a2, a3);
  if ( v10 == 8 )
    return PopDirectedDripsUmQueryCapabilities(a4);
  return 3221225485LL;
}
