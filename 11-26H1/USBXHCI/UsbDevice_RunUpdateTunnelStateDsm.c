/*
 * XREFs of UsbDevice_RunUpdateTunnelStateDsm @ 0x14004E800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003C83C (UsbDevice_UpdateUsbDevice.c)
 *     WPP_RECORDER_SF_di @ 0x1400459B4 (WPP_RECORDER_SF_di.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_ExecuteDSM @ 0x140080FE4 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall UsbDevice_RunUpdateTunnelStateDsm(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rsi

  v2 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_14006B060);
  v3 = *v2;
  v4 = v2[2];
  v5 = v2[1];
  v7 = Controller_ExecuteDSM(*(_QWORD *)(*v2 + 8), &GUID_DSM_QUERY_TUNNEL_MODE, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_di(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xCu,
      0x1Fu,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(_DWORD *)(v3 + 44),
      v7);
  if ( v7 == 1 )
  {
    *(_BYTE *)(v5 + 67) = 3;
  }
  else if ( v7 == 2 )
  {
    *(_BYTE *)(v5 + 67) = 2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v6,
        12,
        32,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(_DWORD *)(v3 + 44));
    }
    *(_BYTE *)(v5 + 67) = 4;
  }
  *(_BYTE *)(v5 + 66) = v7 == 1;
  UsbDevice_UpdateUsbDevice(v3, v5);
  *(_QWORD *)(v3 + 432) = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(WdfDriverGlobals, v4, 0LL);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, a1);
}
