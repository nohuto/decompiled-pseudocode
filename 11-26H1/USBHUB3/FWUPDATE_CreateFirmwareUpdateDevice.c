/*
 * XREFs of FWUPDATE_CreateFirmwareUpdateDevice @ 0x140091124
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B960 (HUBFDO_EvtDevicePrepareHardware.c)
 *     FWUPDATE_EvtDeviceReportedMissing @ 0x140091920 (FWUPDATE_EvtDeviceReportedMissing.c)
 * Callees:
 *     McTemplateK0ppuq_EtwWriteTransfer @ 0x140001F34 (McTemplateK0ppuq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x140090D54 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 */

__int64 __fastcall FWUPDATE_CreateFirmwareUpdateDevice(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  char v4; // si
  char v5; // r15
  int updated; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // edx
  unsigned __int16 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rax
  __m128i si128; // xmm0
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rcx
  BOOL v19; // eax
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int128 v29; // [rsp+80h] [rbp-88h] BYREF
  __int128 v30; // [rsp+90h] [rbp-78h]
  __int128 v31; // [rsp+A0h] [rbp-68h]
  void *v32; // [rsp+B0h] [rbp-58h]
  _OWORD v33[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v34[12]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v35[18]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v36; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v37; // [rsp+1F8h] [rbp+F0h]
  __int128 v38; // [rsp+208h] [rbp+100h]
  _QWORD v39[10]; // [rsp+218h] [rbp+110h] BYREF
  char v40; // [rsp+268h] [rbp+160h] BYREF

  LODWORD(v32) = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v34, 0, sizeof(v34));
  v28 = 0LL;
  v2 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  memset(v39, 0, sizeof(v39));
  v26 = 0LL;
  LOBYTE(v23) = 0;
  memset(v33, 0, 60);
  memset(v35, 0, 0x8CuLL);
  v3 = *(unsigned int *)(a1 + 160);
  v25 = 0LL;
  v4 = 0;
  v24 = 0LL;
  v5 = 0;
  if ( (_DWORD)v3 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v7);
    v9 = v24;
    if ( v24 )
    {
      LOBYTE(v23) = 8;
      LOBYTE(v8) = 27;
      v5 = 1;
      updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, NTSTATUS (__fastcall *)(__int64, IRP *), __int64, __int64 *, int))(WdfFunctions_01015 + 584))(
                  WdfDriverGlobals,
                  v24,
                  FWUPDATE_EvtDeviceWdmIrpQueryInterfacePreprocess,
                  v8,
                  &v23,
                  1);
      if ( updated >= 0 )
      {
        memset(v35, 0, sizeof(v35));
        v35[1] = FWUPDATE_EvtDeviceD0Entry;
        v35[3] = FWUPDATE_EvtDeviceD0Exit;
        LODWORD(v35[0]) = 144;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
          WdfDriverGlobals,
          v24,
          v35);
        memset(v33, 0, sizeof(v33));
        *((_QWORD *)&v33[3] + 1) = FWUPDATE_EvtDeviceReportedMissing;
        *(_QWORD *)&v33[1] = FWUPDATE_EvtDeviceResourceRequirementsQuery;
        LODWORD(v33[0]) = 64;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 1688))(
          WdfDriverGlobals,
          v24,
          v33);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
          WdfDriverGlobals,
          v24,
          34LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
          WdfDriverGlobals,
          v24,
          0LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v24);
        v26 = 0x100000008LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
          WdfDriverGlobals,
          v24,
          &v26);
        updated = FWUPDATE_AddIdsForFirmwareUpdateDevice(a1, v24);
        if ( updated < 0 )
          goto LABEL_40;
        v32 = off_14006D248;
        *((_QWORD *)&v29 + 1) = FWUPDATE_EvtDeviceCleanup;
        LODWORD(v29) = 56;
        *((_QWORD *)&v30 + 1) = 0x100000001LL;
        while ( 1 )
        {
          v12 = v24;
          DestinationString.Buffer = (wchar_t *)&v40;
          *(_QWORD *)&DestinationString.Length = 12582912LL;
          updated = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBFWU-%d", v2);
          if ( updated >= 0 )
            updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
                        WdfDriverGlobals,
                        v12,
                        &DestinationString);
          if ( updated < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            v10 = 38;
            goto LABEL_38;
          }
          updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                      WdfDriverGlobals,
                      v24,
                      &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
          if ( updated < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            v10 = 39;
            goto LABEL_12;
          }
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015
                                                                                                 + 600))(
                  WdfDriverGlobals,
                  &v24,
                  &v29,
                  &v25);
          updated = v13;
          if ( v13 >= 0 )
            break;
          ++v2;
          if ( v13 != -1073741771 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            v10 = 40;
LABEL_38:
            v11 = 2;
            goto LABEL_39;
          }
        }
        v4 = 1;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v25,
                off_14006D248);
        v5 = 0;
        *(_QWORD *)v14 = a1;
        *(_DWORD *)(v14 + 28) = 5;
        memset(v34, 0, sizeof(v34));
        v34[6] = FWUPDATE_EvtIoInternalDeviceControl;
        LODWORD(v34[0]) = 96;
        v34[5] = FWUPDATE_EvtIoDeviceControl;
        BYTE5(v34[1]) = 1;
        *(_QWORD *)((char *)v34 + 4) = 1LL;
        updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1216))(
                    WdfDriverGlobals,
                    v25,
                    v34,
                    0LL,
                    &v28);
        if ( updated >= 0 )
        {
          *(_QWORD *)&v36 = 0x200000030LL;
          *((_QWORD *)&v36 + 1) = 2LL;
          *(_QWORD *)&v37 = 2LL;
          *((_QWORD *)&v37 + 1) = 2LL;
          LODWORD(v38) = 2;
          *(_QWORD *)((char *)&v38 + 4) = 2LL;
          HIDWORD(v38) = -1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 664))(
            WdfDriverGlobals,
            v25,
            &v36);
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v16 = 2;
          v17 = *(_DWORD *)(a1 + 756);
          v18 = 2LL;
          *(__m128i *)((char *)&v39[3] + 4) = si128;
          LODWORD(v39[4]) = 1;
          v39[0] = 80LL;
          *(_QWORD *)((char *)&v39[5] + 4) = si128.m128i_i64[0];
          HIDWORD(v39[6]) = _mm_cvtsi128_si32(si128);
          HIDWORD(v39[7]) = v17;
          LODWORD(v39[7]) = 1;
          *(_QWORD *)((char *)&v39[1] + 4) = 1LL;
          *(_QWORD *)((char *)&v39[2] + 4) = 0LL;
          v39[8] = 0LL;
          v39[9] = 0x500000000LL;
          LODWORD(v39[1]) = 0;
          while ( 1 )
          {
            v19 = v16++ > v17;
            *((_DWORD *)&v39[3] + ++v18) = v19 + 3;
            if ( v18 > 6 )
              break;
            v17 = HIDWORD(v39[7]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
            WdfDriverGlobals,
            v25,
            v39);
          v20 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 2672) = v25;
          updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1064))(
                      WdfDriverGlobals,
                      v20);
          if ( updated >= 0 )
          {
            v4 = 0;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v22) = updated;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a1 + 2536),
                2u,
                3u,
                0x2Au,
                (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
                v22);
            }
            *(_QWORD *)(a1 + 2672) = 0LL;
          }
          goto LABEL_40;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v10 = 41;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v10 = 37;
      }
LABEL_12:
      v11 = 3;
LABEL_39:
      LODWORD(v22) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        v11,
        v10,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v22);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v9, 3, 36, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
      }
      updated = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        0x23u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v3);
    updated = -1073741823;
  }
LABEL_40:
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 0x40) != 0 )
  {
    LOBYTE(v22) = *(_BYTE *)(a1 + 160);
    McTemplateK0ppuq_EtwWriteTransfer(
      v3,
      &USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_ENUMERATION_COMPLETE,
      (const GUID *)(a1 + 2292),
      *(_QWORD *)(a1 + 248),
      *(_QWORD *)(a1 + 2672),
      v22,
      updated);
  }
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v24);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v25);
  return (unsigned int)updated;
}
