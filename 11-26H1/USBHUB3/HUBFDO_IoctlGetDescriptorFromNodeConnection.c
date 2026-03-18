/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007D044
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x14000A800 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x14000CE30 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1400304F8 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v6; // r15
  __int64 v9; // rax
  _QWORD *v10; // rsi
  int v11; // r12d
  int v12; // ebx
  __int64 v13; // rax
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r14
  unsigned __int16 *v19; // rbx
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned __int16 *v24; // rdx
  unsigned __int64 v25; // rcx
  char v26; // al
  unsigned __int16 v27; // dx
  unsigned __int64 v28; // r15
  unsigned __int16 *v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int16 *v33; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // [rsp+20h] [rbp-89h]
  int v37; // [rsp+30h] [rbp-79h]
  unsigned __int16 *v38; // [rsp+38h] [rbp-71h] BYREF
  __int64 v39; // [rsp+40h] [rbp-69h]
  __int64 v40; // [rsp+48h] [rbp-61h]
  __int64 v41; // [rsp+50h] [rbp-59h]
  _QWORD v42[9]; // [rsp+58h] [rbp-51h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-9h] BYREF

  v4 = 0;
  v39 = a2;
  v40 = a1;
  v6 = a2;
  v38 = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  LOBYTE(v37) = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_14006D270);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, unsigned __int16 **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          v6,
          a3,
          &v38,
          0LL);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v10[317], 2u, 3u, 0x46u, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v11);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v37, v6, v11, v4);
  }
  v11 = HUBFDO_IoctlValidateParameters((_DWORD)v10, 4, a4, (_DWORD)v38, 13LL, a3);
  if ( v11 >= 0 )
  {
    v12 = *v38;
    v37 = v12;
    if ( a3 != 12 )
      memset(v38 + 6, 0, a3 - 12);
    if ( (byte_140070D49 & 4) != 0 )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v6);
      ActivityIdIrp = HUBMISC_GetActivityIdIrp(v13, (__int64)&v43);
      if ( (byte_140070D49 & 4) != 0 )
      {
        v16 = (const GUID *)&v43;
        LODWORD(v36) = v12;
        if ( ActivityIdIrp < 0 )
          v16 = 0LL;
        McTemplateK0pq_EtwWriteTransfer(
          v15,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          v16,
          v10[31],
          v36);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v10[2],
            0LL,
            1LL);
    if ( !v17 )
      goto LABEL_50;
    do
    {
      if ( v17 != v10[334]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_14006D1D0)
                               + 48) == v37 )
      {
        break;
      }
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              v17,
              1LL);
    }
    while ( v17 );
    if ( !v17
      || (v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v17,
                  off_14006D1D0),
          (v18 = *(_QWORD *)(v41 + 24)) == 0)
      || (*(_DWORD *)(v18 + 1644) & 2) == 0 )
    {
LABEL_50:
      v11 = -1073741810;
      goto LABEL_51;
    }
    v19 = v38;
    v20 = *((unsigned __int8 *)v38 + 7);
    v21 = *((unsigned __int8 *)v38 + 7);
    v38[2] = 1664;
    v22 = v21 - 1;
    if ( !v22 )
    {
      v35 = (unsigned int)a3 - 12LL;
      v24 = (unsigned __int16 *)(v18 + 1996);
      if ( v35 > 0x12 )
        LODWORD(v35) = 18;
      v4 = v35;
      goto LABEL_49;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 13 )
      {
        v24 = *(unsigned __int16 **)(v18 + 2064);
        if ( v24 )
        {
LABEL_23:
          v25 = (unsigned int)a3 - 12LL;
          if ( v24[1] < v25 )
            LODWORD(v25) = v24[1];
          v4 = v25;
LABEL_49:
          memmove(v38 + 6, v24, v4);
          goto LABEL_51;
        }
      }
    }
    else
    {
      v24 = *(unsigned __int16 **)(v18 + 2024);
      if ( v24 && !*((_BYTE *)v19 + 6) )
        goto LABEL_23;
    }
    if ( (_BYTE)v20 == 3 )
    {
      v26 = *((_BYTE *)v19 + 6);
      if ( v26 )
      {
        if ( v26 == *(_BYTE *)(v18 + 2012) && v19[4] == 1033 )
        {
          if ( (*(_DWORD *)(v18 + 1640) & 0x40) == 0 )
          {
            v11 = -1073741823;
LABEL_51:
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
            return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v37, v6, v11, v4);
          }
          v27 = (*(_DWORD *)(v18 + 1644) & 0x800) != 0 ? 0xC : 0;
          v28 = (unsigned __int16)(*(_WORD *)(v18 + 2156) - v27);
          if ( v28 >= (unsigned __int64)(unsigned int)a3 - 12 )
            LODWORD(v28) = a3 - 12;
          if ( (unsigned int)v28 <= v19[5] )
          {
            v29 = v38;
            if ( (_BYTE)v28 )
              *((_BYTE *)v38 + 12) = v28;
            if ( (unsigned __int8)v28 > 1u )
              *((_BYTE *)v29 + 13) = 3;
            if ( (unsigned __int8)v28 > 2u )
              memmove(
                v29 + 7,
                (const void *)(*(_QWORD *)(v18 + 2160) + 2 * ((unsigned __int64)v27 >> 1)),
                (unsigned int)(unsigned __int8)v28 - 2);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, unsigned __int16 *))(WdfFunctions_01015 + 1088))(
              WdfDriverGlobals,
              v10[2],
              v20,
              v29);
            v4 = v28;
            v6 = v39;
            return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v37, v6, v11, v4);
          }
          v6 = v39;
        }
      }
    }
    v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v40,
            off_14006D0A8);
    *(_QWORD *)(v30 + 152) = *(_QWORD *)(v19 + 2);
    v31 = v30 + 24;
    *(_QWORD *)(v30 + 32) = *(_QWORD *)(*(_QWORD *)(v41 + 24) + 24LL);
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v18);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v32,
      "User Mode FDO Request",
      4744LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
    *(_DWORD *)v31 = 3276936;
    *(_DWORD *)(v31 + 36) = a3 - 12;
    *(_DWORD *)(v31 + 32) = 11;
    v33 = v38;
    *(_QWORD *)(v31 + 48) = 0LL;
    *(_QWORD *)(v31 + 40) = v33 + 6;
    *(_DWORD *)(v31 + 56) = 5000;
    LOBYTE(v42[0]) = 15;
    LODWORD(v42[3]) = 2228227;
    v42[1] = v31;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v6,
      v42);
    *(_QWORD *)(v18 + 504) = v6;
    return HUBSM_AddDsmEvent(v18, 4051LL);
  }
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v37, v6, v11, v4);
}
