/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007EAC8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher @ 0x140030E10 (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation(__int64 a1, __int64 a2, size_t a3, int a4)
{
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rax
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  _QWORD *i; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  void *v24; // r8
  __int64 v25; // r10
  int v26; // edx
  char v27; // r11
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  char v33; // [rsp+30h] [rbp-38h]
  void *v34; // [rsp+38h] [rbp-30h] BYREF
  int v35; // [rsp+40h] [rbp-28h]
  __int128 v36; // [rsp+48h] [rbp-20h] BYREF

  v34 = 0LL;
  v35 = 0;
  v7 = 0;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006D270);
  v33 = *(_BYTE *)(v10 + 240);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v34,
          0LL);
  if ( v11 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v10, 24, a4, (_DWORD)v34, 24LL, a3);
    if ( v11 >= 0 )
    {
      if ( *((_DWORD *)v34 + 1) >= 0x18u )
      {
        v8 = *(unsigned __int16 *)v34;
        memset(v34, 0, a3);
        *(_DWORD *)v34 = v8;
        *((_DWORD *)v34 + 1) = 24;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          24LL);
        for ( i = *(_QWORD **)(v10 + 2376); (_QWORD *)(v10 + 2376) != i; i = (_QWORD *)*i )
        {
          if ( *((_WORD *)i - 24) == (_WORD)v8 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 16));
            v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v10 + 16),
                    0LL,
                    1LL);
            if ( !v18 )
              goto LABEL_26;
            do
            {
              if ( v18 != *(_QWORD *)(v10 + 2672)
                && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                           WdfDriverGlobals,
                                           v18,
                                           off_14006D1D0)
                                       + 48) == v8 )
              {
                break;
              }
              v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v10 + 16),
                      v18,
                      1LL);
            }
            while ( v18 );
            if ( !v18 )
              goto LABEL_26;
            v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v18,
                    off_14006D1D0);
            v20 = *(_QWORD *)(v19 + 24);
            if ( !v20 )
            {
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16));
              v11 = -1073741823;
              goto LABEL_4;
            }
            if ( HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(*(_QWORD *)(v19 + 24)) )
            {
              *((_DWORD *)v34 + 3) = (*(_DWORD *)(*(_QWORD *)(v20 + 8) + 188LL) >> 8) & 0xF;
              v21 = 0LL;
              v22 = *(_QWORD *)(v20 + 8);
              v23 = *(unsigned int *)(v22 + 232);
              v24 = (void *)(*(_DWORD *)(v22 + 188) & 0xF);
              v25 = *(_QWORD *)(v22 + 224);
              if ( *(_DWORD *)(v22 + 232) )
              {
                while ( 1 )
                {
                  v26 = *(_DWORD *)(v25 + 4 * v21);
                  if ( (v26 & 0xF) == (_DWORD)v24 && (v26 & 0x80u) == 0 )
                    break;
                  if ( ++v21 >= v23 )
                    goto LABEL_31;
                }
                v27 = v33;
                *((_DWORD *)v34 + 2) = v26;
                if ( !v33 )
                {
                  v24 = v34;
                  v29 = *((_DWORD *)v34 + 3);
                  if ( v29 )
                    *((_WORD *)v34 + 5) = *((unsigned __int16 *)v34 + 5) / (unsigned int)(v29 + 1);
                }
                v35 = 1;
              }
              else
              {
LABEL_31:
                v27 = v33;
              }
              *((_DWORD *)v34 + 5) = (unsigned __int8)HIBYTE(*(_WORD *)(*(_QWORD *)(v20 + 8) + 188LL)) >> 4;
              v28 = 0LL;
              if ( v23 )
              {
                while ( 1 )
                {
                  v24 = (void *)*(unsigned int *)(v25 + 4 * v28);
                  if ( (*(_DWORD *)(v25 + 4 * v28) & 0xF) == ((*(_DWORD *)(*(_QWORD *)(v20 + 8) + 188LL) >> 4) & 0xF)
                    && (char)v24 < 0 )
                  {
                    break;
                  }
                  if ( ++v28 >= v23 )
                    goto LABEL_45;
                }
                *((_DWORD *)v34 + 4) = (_DWORD)v24;
                if ( !v27 )
                {
                  v24 = v34;
                  v30 = *((_DWORD *)v34 + 5);
                  if ( v30 )
                    *((_WORD *)v34 + 9) = *((unsigned __int16 *)v34 + 9) / (unsigned int)(v30 + 1);
                }
                v7 = 1;
              }
LABEL_45:
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1088))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16),
                v24);
              if ( !v35 || !v7 )
              {
                memset(v34, 0, a3);
                v11 = -1073741216;
                *(_DWORD *)v34 = v8;
                *((_DWORD *)v34 + 1) = 24;
              }
            }
            else
            {
LABEL_26:
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16));
              v11 = -1073741811;
            }
            goto LABEL_4;
          }
        }
      }
      v11 = -1073741811;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2536),
      2u,
      3u,
      0x4Du,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v11);
  }
LABEL_4:
  if ( (byte_140070D49 & 4) != 0 )
  {
    v36 = 0LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp(v12, (__int64)&v36);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v15 = (const GUID *)&v36;
      LODWORD(v32) = v11;
      LODWORD(v31) = v8;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_SUPERSPEEDPLUS_INFORMATION_COMPLETE,
        v15,
        *(_QWORD *)(v10 + 248),
        v31,
        v32);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
