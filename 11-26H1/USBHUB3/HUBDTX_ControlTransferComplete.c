/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x14002A510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140006790 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dDDD @ 0x140007224 (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  int v7; // esi
  unsigned __int8 *v9; // r14
  char v10; // al
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int16 v15; // ax
  const EVENT_DESCRIPTOR *v16; // rdx
  char v17; // al
  bool v18; // zf
  unsigned __int16 v19; // r9
  char v20; // al
  char v21; // al
  char v22; // al
  __int64 v23; // rax
  char v24; // dl
  char v25; // al
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  unsigned int v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  int v35; // [rsp+58h] [rbp-40h]
  __int64 v36; // [rsp+5Ch] [rbp-3Ch]
  int v37; // [rsp+64h] [rbp-34h]

  v4 = *(_DWORD *)(a4 + 316);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = a4;
  v7 = *(_DWORD *)(a4 + 284);
  v9 = *(unsigned __int8 **)(a4 + 2656);
  *(_DWORD *)(a4 + 416) = 0;
  *(_DWORD *)(a4 + 264) = v4;
  v10 = *(_BYTE *)(a4 + 408);
  if ( (v10 & 0x63) == 0 && v10 < 0 && *(_BYTE *)(a4 + 409) == 26 && *(_WORD *)(a4 + 410) == 1 )
  {
    *(_DWORD *)(a4 + 2724) = v5;
    *(_DWORD *)(a4 + 2728) = v7;
    *(_OWORD *)(a4 + 1740) = 0LL;
    *(_OWORD *)(a4 + 1756) = 0LL;
  }
  if ( v5 >= 0 )
  {
    v11 = 4012;
    goto LABEL_152;
  }
  v11 = 4004;
  LOBYTE(a4) = 96;
  if ( *(_BYTE *)(v6 + 409) == 9 && *(_WORD *)(v6 + 410) && (*(_BYTE *)(v6 + 408) & 0x60) == 0 )
  {
    v12 = -1073733632;
    v13 = 3221225473LL;
  }
  else
  {
    v12 = v7;
    v13 = (unsigned int)v5;
  }
  *(_DWORD *)(v6 + 1568) = v13;
  *(_DWORD *)(v6 + 1572) = v12;
  LOBYTE(v13) = *(_BYTE *)(v6 + 409);
  if ( (_BYTE)v13 == 48 )
  {
    if ( (*(_BYTE *)(v6 + 408) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0xAu,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
          v5,
          v7);
      if ( (*(_DWORD *)(v6 + 2444) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", v6 + 512);
      *(_DWORD *)(v6 + 2440) = 1073807370;
      if ( (byte_140070D49 & 1) != 0 )
      {
        LODWORD(v32) = v5;
        LODWORD(v31) = v7;
        LODWORD(v30) = 0;
        McTemplateK0pqqq_EtwWriteTransfer(
          v13,
          &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
          (const GUID *)(v6 + 1524),
          *(_QWORD *)(v6 + 24),
          v30,
          v31,
          v32);
      }
      v14 = 4008;
      if ( v7 != -1073741820 )
        v14 = 4004;
      v11 = v14;
      goto LABEL_149;
    }
  }
  else if ( (_BYTE)v13 == 3 )
  {
    v15 = *(_WORD *)(v6 + 410);
    if ( v15 == 48 )
    {
      if ( (*(_BYTE *)(v6 + 408) & 0x60) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
            2u,
            5u,
            0xBu,
            (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
            v5,
            v7);
        if ( (*(_DWORD *)(v6 + 2444) & 0x2000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", v6 + 512);
        if ( (byte_140070D49 & 1) == 0 )
          goto LABEL_149;
        LODWORD(v32) = v5;
        v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE;
        LODWORD(v31) = v7;
        LODWORD(v30) = 0;
        goto LABEL_148;
      }
    }
    else if ( v15 == 49 && (*(_BYTE *)(v6 + 408) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0xCu,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
          v5,
          v7);
      if ( (*(_DWORD *)(v6 + 2444) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", v6 + 512);
      if ( (byte_140070D49 & 1) == 0 )
        goto LABEL_149;
      LODWORD(v32) = v5;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE;
      LODWORD(v31) = v7;
      LODWORD(v30) = 0;
      goto LABEL_148;
    }
  }
  else if ( (_BYTE)v13 == 6 && (*(_BYTE *)(v6 + 408) & 0x60) == 0 )
  {
    v17 = *(_BYTE *)(v6 + 411);
    if ( v17 == 3 )
      v18 = *(_BYTE *)(v6 + 410) == 0xEE;
    else
      v18 = v17 == 6;
    if ( !v18 && (*(_DWORD *)(v6 + 2444) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v6 + 512);
    v13 = (unsigned int)*(unsigned __int8 *)(v6 + 411) - 1;
    if ( *(_BYTE *)(v6 + 411) == 1 )
    {
      *(_DWORD *)(v6 + 2440) = 1073807360;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0xDu,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
          v5,
          v7);
      if ( (byte_140070D49 & 1) == 0 )
        goto LABEL_149;
      LODWORD(v32) = v5;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE;
      LODWORD(v31) = v7;
      LODWORD(v30) = 0;
    }
    else
    {
      v13 = (unsigned int)*(unsigned __int8 *)(v6 + 411) - 2;
      if ( *(_BYTE *)(v6 + 411) == 2 )
      {
        *(_DWORD *)(v6 + 2440) = 1073807367;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
            2u,
            5u,
            0xEu,
            (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
            v5,
            v7);
        if ( (byte_140070D49 & 1) == 0 )
          goto LABEL_149;
        LODWORD(v32) = v5;
        v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE;
        LODWORD(v31) = v7;
        LODWORD(v30) = 0;
      }
      else
      {
        v13 = (unsigned int)*(unsigned __int8 *)(v6 + 411) - 3;
        if ( *(_BYTE *)(v6 + 411) == 3 )
        {
          v20 = *(_BYTE *)(v6 + 2012);
          if ( v20 && v20 == *(_BYTE *)(v6 + 410) )
          {
            *(_DWORD *)(v6 + 2440) = 1073807373;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                2u,
                5u,
                0x11u,
                (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                v5,
                v7);
            if ( (byte_140070D49 & 1) == 0 )
              goto LABEL_149;
            LODWORD(v32) = v5;
            v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE;
            LODWORD(v31) = v7;
            LODWORD(v30) = 0;
          }
          else
          {
            LOBYTE(v13) = *(_BYTE *)(v6 + 410);
            if ( (_BYTE)v13 )
            {
              v21 = *(_BYTE *)(v6 + 2011);
              if ( v21 && v21 == (_BYTE)v13 )
              {
                *(_DWORD *)(v6 + 2440) = 1073807375;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                    2u,
                    5u,
                    0x13u,
                    (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                    v5,
                    v7);
                if ( (byte_140070D49 & 1) == 0 )
                  goto LABEL_149;
                LODWORD(v32) = v5;
                v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE;
                LODWORD(v31) = v7;
                LODWORD(v30) = 0;
              }
              else
              {
                if ( !v9 )
                  goto LABEL_149;
                v22 = *(_BYTE *)(*(_QWORD *)v9 + 3LL);
                if ( v22 && v22 == (_BYTE)v13 )
                {
                  *(_DWORD *)(v6 + 2440) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                      2u,
                      5u,
                      0x14u,
                      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                      v5,
                      v7);
                  if ( (byte_140070D49 & 2) == 0 )
                    goto LABEL_149;
                  LODWORD(v32) = v5;
                  v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE;
                  LODWORD(v31) = v7;
                  LODWORD(v30) = 0;
                }
                else
                {
                  v23 = v9[8];
                  if ( (_BYTE)v23 == 0xFF )
                    goto LABEL_149;
                  v24 = *(_BYTE *)(*(_QWORD *)v9 + 4 * v23 + 47);
                  if ( !v24 || v24 != (_BYTE)v13 )
                    goto LABEL_149;
                  *(_DWORD *)(v6 + 2440) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                      2u,
                      5u,
                      0x15u,
                      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                      v5,
                      v7);
                  if ( (byte_140070D49 & 2) == 0 )
                    goto LABEL_149;
                  LODWORD(v32) = v5;
                  v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE;
                  LODWORD(v31) = v7;
                  LODWORD(v30) = 0;
                }
              }
            }
            else
            {
              *(_DWORD *)(v6 + 2440) = 1073807374;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                  2u,
                  5u,
                  0x12u,
                  (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                  v5,
                  v7);
              if ( (byte_140070D49 & 1) == 0 )
                goto LABEL_149;
              LODWORD(v32) = v5;
              v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE;
              LODWORD(v31) = v7;
              LODWORD(v30) = 0;
            }
          }
        }
        else
        {
          v13 = (unsigned int)*(unsigned __int8 *)(v6 + 411) - 6;
          if ( *(_BYTE *)(v6 + 411) == 6 )
          {
            *(_DWORD *)(v6 + 2440) = 1073807372;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                2u,
                5u,
                0x10u,
                (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                v5,
                v7);
            if ( (byte_140070D49 & 1) == 0 )
              goto LABEL_149;
            LODWORD(v32) = v5;
            v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE;
            LODWORD(v31) = v7;
            LODWORD(v30) = 0;
          }
          else
          {
            if ( *(_BYTE *)(v6 + 411) != 15 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_149;
              v19 = 22;
              goto LABEL_55;
            }
            *(_DWORD *)(v6 + 2440) = 1073807371;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                2u,
                5u,
                0xFu,
                (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                v5,
                v7);
            if ( (byte_140070D49 & 1) == 0 )
              goto LABEL_149;
            LODWORD(v32) = v5;
            v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE;
            LODWORD(v31) = v7;
            LODWORD(v30) = 0;
          }
        }
      }
    }
    goto LABEL_148;
  }
  v25 = *(_BYTE *)(v6 + 408) & 0x60;
  if ( v25 == 64 && (_BYTE)v13 == *(_BYTE *)(v6 + 2060) )
  {
    v13 = (unsigned int)*(unsigned __int16 *)(v6 + 412) - 4;
    if ( *(_WORD *)(v6 + 412) == 4 )
    {
      *(_DWORD *)(v6 + 2440) = 1073807376;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0x17u,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
          v5,
          v7);
      if ( (byte_140070D49 & 1) == 0 )
        goto LABEL_149;
      LODWORD(v32) = v5;
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE;
      LODWORD(v31) = v7;
      LODWORD(v30) = 0;
    }
    else
    {
      v13 = (unsigned int)*(unsigned __int16 *)(v6 + 412) - 6;
      if ( *(_WORD *)(v6 + 412) == 6 )
      {
        *(_DWORD *)(v6 + 2440) = 1073807377;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
            2u,
            5u,
            0x18u,
            (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
            v5,
            v7);
        if ( (byte_140070D49 & 1) == 0 )
          goto LABEL_149;
        LODWORD(v32) = v5;
        v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE;
        LODWORD(v31) = v7;
        LODWORD(v30) = 0;
      }
      else
      {
        v13 = (unsigned int)*(unsigned __int16 *)(v6 + 412) - 7;
        if ( *(_WORD *)(v6 + 412) == 7 )
        {
          *(_DWORD *)(v6 + 2440) = 1073807388;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
              2u,
              5u,
              0x19u,
              (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
              v5,
              v7);
          if ( (byte_140070D49 & 1) == 0 )
            goto LABEL_149;
          LODWORD(v32) = v5;
          v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE;
          LODWORD(v31) = v7;
          LODWORD(v30) = 0;
        }
        else
        {
          if ( *(_WORD *)(v6 + 412) != 8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = 27;
LABEL_55:
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
                2u,
                5u,
                v19,
                (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                v5,
                v7);
            }
LABEL_149:
            if ( (byte_140070D4A & 4) != 0 )
            {
              LODWORD(v32) = v5;
              LODWORD(v31) = v7;
              LODWORD(v30) = 0;
              McTemplateK0pqqq_EtwWriteTransfer(
                v13,
                &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR,
                0LL,
                *(_QWORD *)(v6 + 24),
                v30,
                v31,
                v32);
            }
            goto LABEL_152;
          }
          *(_DWORD *)(v6 + 2440) = 1073807390;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
              2u,
              5u,
              0x1Au,
              (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
              v5,
              v7);
          if ( (byte_140070D49 & 2) == 0 )
            goto LABEL_149;
          LODWORD(v32) = v5;
          v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE;
          LODWORD(v31) = v7;
          LODWORD(v30) = 0;
        }
      }
    }
LABEL_148:
    McTemplateK0pqqq_EtwWriteTransfer(v13, v16, (const GUID *)(v6 + 1524), *(_QWORD *)(v6 + 24), v30, v31, v32);
    goto LABEL_149;
  }
  if ( v25 )
  {
LABEL_137:
    if ( (*(_BYTE *)(v6 + 408) & 0x60) != 0 )
      goto LABEL_141;
    goto LABEL_138;
  }
  if ( (_BYTE)v13 == 49 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        0x1Cu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v5,
        v7);
    if ( (*(_DWORD *)(v6 + 2444) & 8) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", v6 + 512);
    if ( (byte_140070D49 & 1) == 0 )
      goto LABEL_149;
    v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
    goto LABEL_147;
  }
  if ( (_BYTE)v13 == 1 )
  {
    if ( *(_WORD *)(v6 + 410) == 1 )
      goto LABEL_149;
    goto LABEL_137;
  }
LABEL_138:
  if ( (_BYTE)v13 == 3 && !*(_WORD *)(v6 + 410) && !*(_WORD *)(v6 + 412) )
    goto LABEL_149;
LABEL_141:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = (*(unsigned __int8 *)(v6 + 408) >> 5) & 3;
    WPP_RECORDER_SF_dDDD(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
      v33,
      5u,
      0x1Du,
      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
      v5,
      v7,
      v33,
      *(unsigned __int8 *)(v6 + 409));
  }
  if ( (*(_DWORD *)(v6 + 2444) & 1) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v6 + 512);
  if ( (byte_140070D4A & 4) != 0 )
  {
    v16 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_147:
    v26 = *(_QWORD *)(v6 + 8);
    LODWORD(v32) = v5;
    LODWORD(v31) = v7;
    v13 = *(unsigned __int16 *)(v26 + 200);
    LODWORD(v30) = *(unsigned __int16 *)(v26 + 200);
    goto LABEL_148;
  }
LABEL_152:
  v36 = 0LL;
  v37 = 0;
  v34 = 24LL;
  v35 = 0;
  v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          &v34,
          a4);
  if ( v27 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_14006D2C0);
    LODWORD(v31) = v27;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v28 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v31);
  }
  return HUBSM_AddEvent(v6 + 512, v11);
}
