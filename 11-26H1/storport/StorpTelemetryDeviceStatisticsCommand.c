/*
 * XREFs of StorpTelemetryDeviceStatisticsCommand @ 0x1400BA4F4
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1400C1F84 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     SendAtaPassthrough @ 0x1400B6F84 (SendAtaPassthrough.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryDeviceStatisticsCommand(__int64 a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rcx
  char v5; // di
  int v6; // edx
  int v8; // [rsp+20h] [rbp-60h]
  int v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+54h] [rbp-2Ch]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int16 v17; // [rsp+70h] [rbp-10h]
  char v18; // [rsp+72h] [rbp-Eh]
  char v19; // [rsp+73h] [rbp-Dh]
  int v20; // [rsp+74h] [rbp-Ch]

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v15 = a2;
  InputBuffer = 196656LL;
  v5 = a3;
  v14 = 0LL;
  v16 = 0LL;
  LODWORD(v10) = 0;
  v13 = 10;
  v12 = 512;
  v17 = 256;
  v18 = 4;
  v19 = a3;
  v20 = 3137536;
  v6 = SendAtaPassthrough(v3, &InputBuffer, a3, &InputBuffer, v8, v9, &v10);
  if ( v6 >= 0 )
  {
    if ( (v20 & 0x10000) != 0 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) != v5 )
        v6 = -1073741637;
      if ( !*(_WORD *)a2 )
        return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
