/*
 * XREFs of Register_Create @ 0x14007C7CC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Register_CreateSecureObject @ 0x14007C968 (Register_CreateSecureObject.c)
 */

__int64 __fastcall Register_Create(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int SecureObject; // ebx
  _QWORD *v6; // rsi
  int v7; // edx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+34h] [rbp-3Ch]
  int v11; // [rsp+44h] [rbp-2Ch]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  void *v16; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF

  v10 = 0LL;
  v17 = 0LL;
  v11 = 0;
  v15 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v9 = -1;
    else
      v9 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v9 = 56;
  }
  v12 = 1;
  v13 = 1;
  v16 = off_14006AF98;
  v14 = *(_QWORD *)(a1 + 8);
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01033 + 1656))(
                   WdfDriverGlobals,
                   &v9,
                   &v17);
  if ( SecureObject >= 0 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v17,
                     off_14006AF98);
    v6[1] = a1;
    *v6 = v17;
    if ( !Controller_IsSecureDevice(a1) || (SecureObject = Register_CreateSecureObject(v6), SecureObject >= 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(a1 + 72),
          v7,
          6,
          11,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v17);
      }
      *a2 = v6;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      v4,
      6,
      10,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      SecureObject);
  }
  return (unsigned int)SecureObject;
}
