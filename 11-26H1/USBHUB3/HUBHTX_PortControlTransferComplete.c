/*
 * XREFs of HUBHTX_PortControlTransferComplete @ 0x1400054C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqhh_EtwWriteTransfer @ 0x1400066FC (McTemplateK0pqhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140006790 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ccccc @ 0x140006AD8 (WPP_RECORDER_SF_ccccc.c)
 *     WPP_RECORDER_SF_cccccc @ 0x140006C10 (WPP_RECORDER_SF_cccccc.c)
 *     WPP_RECORDER_SF_cccccccc @ 0x140006D60 (WPP_RECORDER_SF_cccccccc.c)
 *     WPP_RECORDER_SF_chcccc @ 0x140006FD8 (WPP_RECORDER_SF_chcccc.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_PortControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int16 v16; // ax
  int v17; // ebx
  __int64 v18; // rax
  const char *v20; // [rsp+20h] [rbp-98h]
  int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+20h] [rbp-98h]
  const char *v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+70h] [rbp-48h] BYREF
  int v25; // [rsp+78h] [rbp-40h]
  __int64 v26; // [rsp+7Ch] [rbp-3Ch]
  int v27; // [rsp+84h] [rbp-34h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 44);
  if ( v4 >= 0 )
  {
    if ( !*(_BYTE *)(a4 + 169) )
    {
      v8 = *(_DWORD *)(a4 + 1336) & 0x20;
      if ( v6 == 1 )
      {
        if ( !v8 )
        {
          v23 = "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c";
          LODWORD(v20) = 1699;
          if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 3504))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)a4 + 16LL),
                 0LL,
                 0LL) >= 0 )
            _InterlockedOr((volatile signed __int32 *)(v5 + 1336), 0x20u);
        }
      }
      else if ( v8 )
      {
        v20 = "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c";
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a4 + 16LL),
          0LL,
          1707LL);
        _InterlockedAnd((volatile signed __int32 *)(v5 + 1336), 0xFFFFFFDF);
      }
      v9 = **(_DWORD **)(v5 + 80);
      if ( *(_DWORD *)(v5 + 1256) == 5000 )
      {
        if ( (byte_140070D49 & 0x20) != 0 )
          McTemplateK0pqhh_EtwWriteTransfer(
            *(unsigned __int16 *)(v5 + 200),
            (unsigned int)&USBHUB3_ETW_EVENT_30_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            *(_WORD *)(v5 + 200),
            *(_WORD *)(v5 + 184),
            *(_WORD *)(v5 + 186));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a4) = ((v9 & 8) != 0) + 48;
          WPP_RECORDER_SF_chcccc(
            *(_QWORD *)(v5 + 1432),
            ((v9 & 0x10) != 0) + 48,
            (unsigned __int8)(((v9 & 0x200) != 0) + 48),
            a4,
            (_DWORD)v20,
            (v9 & 1) + 48,
            ((unsigned __int16)v9 >> 5) & 0xF,
            ((v9 & 2) != 0) + 48,
            ((v9 & 0x10) != 0) + 48,
            ((v9 & 0x200) != 0) + 48,
            a4);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = (BYTE2(v9) >> 7) + 48;
            LOBYTE(v11) = ((v9 & 0x80000) != 0) + 48;
            LOBYTE(v10) = ((v9 & 0x200000) != 0) + 48;
            WPP_RECORDER_SF_cccccc(
              *(_QWORD *)(v5 + 1432),
              v10,
              v11,
              v12,
              v21,
              (BYTE2(v9) & 1) + 48,
              ((v9 & 0x400000) != 0) + 48,
              ((v9 & 0x100000) != 0) + 48,
              v10,
              v11,
              v12);
          }
        }
      }
      else
      {
        if ( (byte_140070D49 & 0x20) != 0 )
          McTemplateK0pqhh_EtwWriteTransfer(
            *(unsigned __int16 *)(v5 + 200),
            (unsigned int)&USBHUB3_ETW_EVENT_20_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            *(_WORD *)(v5 + 200),
            *(_WORD *)(v5 + 184),
            *(_WORD *)(v5 + 186));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a4) = ((v9 & 4) != 0) + 48;
          LOBYTE(a3) = ((v9 & 0x10) != 0) + 48;
          WPP_RECORDER_SF_cccccccc(
            *(_QWORD *)(v5 + 1432),
            ((v9 & 2) != 0) + 48,
            a3,
            a4,
            (_DWORD)v20,
            (v9 & 1) + 48,
            ((v9 & 0x400) != 0) + 48,
            ((v9 & 0x200) != 0) + 48,
            ((v9 & 2) != 0) + 48,
            a3,
            a4,
            (BYTE1(v9) & 1) + 48,
            ((v9 & 8) != 0) + 48);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = HIWORD(v9);
            LOBYTE(v14) = ((v9 & 0x80000) != 0) + 48;
            LOBYTE(v13) = ((v9 & 0x40000) != 0) + 48;
            LOBYTE(v15) = (BYTE2(v9) & 1) + 48;
            WPP_RECORDER_SF_ccccc(
              *(_QWORD *)(v5 + 1432),
              v13,
              v14,
              v15,
              v22,
              v15,
              ((v9 & 0x20000) != 0) + 48,
              ((v9 & 0x100000) != 0) + 48,
              v13,
              v14);
          }
        }
      }
    }
    if ( *(_BYTE *)(v5 + 169) == 3 )
    {
      v16 = *(_WORD *)(v5 + 170);
      if ( v16 == 2 )
      {
        *(_WORD *)(v5 + 192) |= 4u;
        *(_WORD *)(v5 + 184) |= 4u;
      }
      else if ( v16 == 5 )
      {
        if ( *(_BYTE *)(v5 + 173) == 3 )
        {
          *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x60;
          *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x60;
        }
        if ( *(_BYTE *)(v5 + 173) == 4 )
        {
          *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x80;
          *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x80;
        }
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 1432),
        2u,
        4u,
        0x22u,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a4 + 44));
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2608LL) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", *(_QWORD *)v5 + 1280LL);
    *(_DWORD *)(*(_QWORD *)v5 + 2612LL) = 1073872897;
    if ( (byte_140070D4A & 2) != 0 )
      McTemplateK0pqqq_EtwWriteTransfer(
        a1,
        (unsigned int)&USBHUB3_ETW_EVENT_PORT_CONTROL_TRANSFER_ERROR,
        0,
        *(_QWORD *)(*(_QWORD *)v5 + 248LL),
        *(_WORD *)(v5 + 200),
        v6,
        v4);
  }
  v26 = 0LL;
  v27 = 0;
  v24 = 24LL;
  v25 = 0;
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          &v24);
  if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_14006D2C0);
    LODWORD(v23) = v17;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v18 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v23);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 1240))(v5, ((v4 >> 31) & 0xFFFFFFFC) + 3012);
}
