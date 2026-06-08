/*
 * XREFs of PepGetParkingPageInfo @ 0x14003CA80
 * Callers:
 *     PepDevicePowerControlCallback @ 0x14000D670 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepGetParkingPageInfo(__int64 a1, _QWORD *a2)
{
  int v3; // edx
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v7) = *(_DWORD *)(a1 + 56);
  v9 = 24;
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, int *))HalDispatchTable->HalQuerySystemInformation)(
         29LL,
         24LL,
         &v7,
         &v9);
  if ( v4 >= 0 )
  {
    *a2 = *((_QWORD *)&v7 + 1);
    a2[1] = v8;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v4;
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      4,
      25,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v6);
  }
  return (unsigned int)v4;
}
