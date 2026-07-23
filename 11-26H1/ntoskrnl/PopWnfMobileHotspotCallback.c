/*
 * XREFs of PopWnfMobileHotspotCallback @ 0x1406069A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407CC67C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfMobileHotspotCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF

  v8 = a4;
  v7 = 8;
  v4 = ExQueryWnfStateData(a1, &v8, &v9, &v7);
  if ( v4 >= 0 )
  {
    if ( v7 >= 8 )
    {
      v5 = v9 >> 1;
      LOBYTE(v5) = (v9 & 2) != 0;
      PopPowerRequestNotifyMobileHotspotChanged(v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
