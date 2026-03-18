/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1400253C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int8 *v6; // rbp
  __int64 *v7; // rsi
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h]
  _OWORD v12[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v3 = 40;
LABEL_3:
    LOWORD(v12[0]) = v3;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v3 = -1;
    goto LABEL_3;
  }
  LOWORD(v12[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v12[0] + 1) + 16LL),
                   off_14006B128);
  v5 = v4;
  v6 = (unsigned __int8 *)v4 + 143;
  v7 = v4 + 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*v7 + 72),
      4u,
      0xCu,
      0x1Cu,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *v6,
      *v4);
  if ( !*((_BYTE *)v5 + 142) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = *v6;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*v7 + 72),
        3u,
        0xCu,
        0x1Du,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v10,
        *v5);
    }
    v9 = -1073741823;
    goto LABEL_19;
  }
  if ( !Controller_IsControllerAccessible(*v7) )
  {
    v9 = -1073741810;
LABEL_19:
    v5[54] = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v9);
  }
  v5[54] = a2;
  *((_BYTE *)v5 + 440) = 0;
  result = UsbDevice_SetAddress(v5, 0LL);
  v9 = result;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = result;
      LODWORD(v10) = *v6;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*v7 + 72),
        3u,
        0xCu,
        0x1Eu,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v10,
        v11);
    }
    goto LABEL_19;
  }
  return result;
}
