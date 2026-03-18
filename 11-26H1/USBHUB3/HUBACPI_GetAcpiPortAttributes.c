/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x14008EAB4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B960 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dDDDDD @ 0x140040FB0 (WPP_RECORDER_SF_dDDDDD.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBACPI_EnumChildren @ 0x14008D660 (HUBACPI_EnumChildren.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008DA78 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDSD @ 0x14008DEBC (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E290 (HUBACPI_EvaluateDsmMethod.c)
 *     TUNNEL_RegisterUsb4HostForPort @ 0x140093164 (TUNNEL_RegisterUsb4HostForPort.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // rax
  char v4; // r14
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v6; // eax
  int v7; // esi
  unsigned __int16 v8; // r9
  int v10; // eax
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  bool v17; // al
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r13d
  _QWORD *i; // rax
  _QWORD *v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 v27; // r9
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  int v30; // ecx
  __int64 v31; // rdx
  unsigned __int16 v32; // r9
  unsigned __int8 v33; // dl
  unsigned int v34; // r8d
  int v35; // ecx
  __int64 v36; // rcx
  const EVENT_DESCRIPTOR *v37; // rdx
  __int64 v38; // rcx
  unsigned __int16 v39; // r9
  unsigned __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  __int64 v43; // rax
  int v44; // esi
  char v45; // al
  int v46; // edx
  unsigned __int16 v47; // r9
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // [rsp+20h] [rbp-A9h]
  __int64 v51; // [rsp+28h] [rbp-A1h]
  __int64 v52; // [rsp+28h] [rbp-A1h]
  __int64 v53; // [rsp+28h] [rbp-A1h]
  __int64 v54; // [rsp+30h] [rbp-99h]
  __int64 v55; // [rsp+30h] [rbp-99h]
  __int64 v56; // [rsp+60h] [rbp-69h] BYREF
  __int64 v57; // [rsp+68h] [rbp-61h] BYREF
  __int64 v58; // [rsp+70h] [rbp-59h] BYREF
  __int128 v59; // [rsp+78h] [rbp-51h] BYREF
  __int64 v60; // [rsp+88h] [rbp-41h] BYREF
  __int64 v61; // [rsp+90h] [rbp-39h] BYREF
  __int64 v62; // [rsp+98h] [rbp-31h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-19h]
  __int64 v65; // [rsp+B8h] [rbp-11h]
  __int128 v66; // [rsp+C0h] [rbp-9h]
  __int64 v67; // [rsp+D0h] [rbp+7h]
  _QWORD v68[9]; // [rsp+D8h] [rbp+Fh] BYREF
  bool v69; // [rsp+138h] [rbp+6Fh]
  int v70; // [rsp+140h] [rbp+77h]
  __int64 v71; // [rsp+148h] [rbp+7Fh]

  v1 = 0;
  v67 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v64 = 0LL;
  v68[0] = 0LL;
  v66 = v2;
  v63 = 0LL;
  v4 = 0;
  v60 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v61 = 0LL;
  v56 = 0LL;
  v62 = 0LL;
  LODWORD(v63) = 56;
  v65 = 0x100000001LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v59 = 0LL;
  v6 = v5(WdfDriverGlobals, &v63, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v62, v68);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v4 = 0;
      goto LABEL_6;
    }
    v8 = 42;
LABEL_4:
    LODWORD(v51) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      v8,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v51);
    goto LABEL_5;
  }
  v10 = HUBACPI_EnumChildren(a1, v62);
  v7 = v10;
  if ( v10 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v12 = 43;
    LOBYTE(v11) = 4;
LABEL_18:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v11, 3, v12, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    goto LABEL_5;
  }
  if ( v10 != -2147483643 )
    goto LABEL_6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v11, 3, 44, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
  }
  v13 = *(unsigned int *)(v68[0] + 4LL);
  v67 = 0LL;
  v64 = 0LL;
  v65 = 0x100000001LL;
  v66 = *(unsigned __int64 *)(a1 + 16);
  v63 = 0LL;
  LODWORD(v63) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v63,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         v13,
         &v61,
         &v60);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v12 = 45;
    goto LABEL_25;
  }
  v6 = HUBACPI_EnumChildren(a1, v61);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v8 = 46;
    goto LABEL_4;
  }
  v67 = 0LL;
  v64 = 0LL;
  v65 = 0x100000001LL;
  v66 = *(unsigned __int64 *)(a1 + 16);
  v63 = 0LL;
  LODWORD(v63) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v63,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         1044LL,
         &v56,
         &v57);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v12 = 47;
LABEL_25:
    LOBYTE(v11) = 2;
    goto LABEL_18;
  }
  v69 = *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_14006D2C0)
                 + 104) >= 0x605u;
  v7 = HUBACPI_EvaluateDsmMethod(a1, 0LL, v14, v15, 7, 0, v56);
  if ( v7 >= 0 )
  {
    v18 = *(_DWORD *)(v57 + 16);
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v69 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2536),
            v16,
            3,
            51,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
        }
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = *(_DWORD *)(v57 + 16);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2536),
          2u,
          6u,
          0x34u,
          (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
          v52);
      }
      v17 = v69;
    }
    else
    {
      v17 = 0;
      v69 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v16, 3, 50, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
        goto LABEL_50;
      }
    }
  }
  else
  {
    if ( v7 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = -1073741772;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2536),
          2u,
          3u,
          0x31u,
          (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
          v52);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v16, 3, 48, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    v17 = v69;
  }
  if ( v17 )
  {
LABEL_40:
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x200u);
    goto LABEL_51;
  }
LABEL_50:
  _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0xFFFFFDFF);
LABEL_51:
  v70 = 1;
  v19 = v60 + 8;
  if ( *(_DWORD *)(v60 + 4) <= 1u )
    goto LABEL_5;
  while ( 1 )
  {
    v19 += *(unsigned int *)(v19 + 4) + 8LL;
    v71 = v19;
    if ( (*(_BYTE *)v19 & 1) == 0 || !*(_DWORD *)(v19 + 4) )
      goto LABEL_65;
    *((_QWORD *)&v59 + 1) = v19 + 8;
    WORD1(v59) = *(_WORD *)(v19 + 4);
    LOWORD(v59) = WORD1(v59) - 1;
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v59, 1380204895, v56);
    if ( v7 < 0 )
    {
      v7 = 0;
      goto LABEL_64;
    }
    if ( !*(_DWORD *)(v57 + 8) || *(_WORD *)(v57 + 12) )
      goto LABEL_64;
    v22 = *(unsigned __int16 *)(v57 + 16);
    if ( !(_WORD)v22 || (unsigned __int16)v22 > *(_WORD *)(a1 + 48) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
      v39 = 53;
      goto LABEL_113;
    }
    for ( i = *(_QWORD **)(a1 + 2376); ; i = (_QWORD *)*i )
    {
      v24 = i - 31;
      if ( (_QWORD *)(a1 + 2376) == i )
        goto LABEL_64;
      if ( *((_WORD *)v24 + 100) == (_WORD)v22 )
        break;
    }
    if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v59, v20, v21, 2, v22, v56) >= 0 )
    {
      if ( *(_WORD *)(v57 + 12) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_83;
        v27 = 54;
        v28 = 2;
        v29 = 6;
      }
      else
      {
        v30 = *(unsigned __int16 *)(v57 + 16);
        *((_DWORD *)v24 + 54) = v30;
        switch ( v30 )
        {
          case 0:
            goto LABEL_83;
          case 1:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_83;
            v27 = 55;
            break;
          case 2:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_83;
            v27 = 56;
            break;
          default:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_83;
            v27 = 57;
            LODWORD(v53) = v30;
            v28 = 2;
            v29 = 6;
            goto LABEL_82;
        }
        v28 = 4;
        v29 = 3;
      }
      LODWORD(v53) = v22;
LABEL_82:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        v28,
        v29,
        v27,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v53);
    }
LABEL_83:
    v58 = 0LL;
    if ( *((_DWORD *)v24 + 52) != 768 )
      goto LABEL_89;
    v31 = *(_QWORD *)(a1 + 2776);
    if ( v31 )
    {
      v58 = *(_QWORD *)(a1 + 2776);
    }
    else
    {
      if ( (int)HUBACPI_EvaluateDSD(a1, (unsigned __int16 *)&v59, v25, v26, v56, v22, (__int64)&v58) < 0 )
        goto LABEL_89;
      v31 = v58;
    }
    v7 = TUNNEL_RegisterUsb4HostForPort(a1, v31, v24);
    if ( v7 < 0 )
      break;
LABEL_89:
    if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v59, v25, v26, 5, v22, v56) < 0 )
      goto LABEL_101;
    if ( *(_WORD *)(v57 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v32 = 59;
      v33 = 2;
      v34 = 6;
    }
    else
    {
      v35 = *(_DWORD *)(v57 + 16);
      if ( !v35 )
        goto LABEL_101;
      if ( v35 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_101;
        v32 = 61;
        LODWORD(v52) = *(_DWORD *)(v57 + 16);
        v33 = 2;
        v34 = 6;
        goto LABEL_100;
      }
      *((_DWORD *)v24 + 51) |= 0x400u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v32 = 60;
      v33 = 4;
      v34 = 3;
    }
    LODWORD(v52) = v22;
LABEL_100:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      v33,
      v34,
      v32,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v52);
LABEL_101:
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v59, 1129338207, v56);
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = v22;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2536),
          4u,
          3u,
          0x3Eu,
          (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
          v52);
      }
      if ( (byte_140070D49 & 0x40) != 0 )
      {
        v37 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
        goto LABEL_106;
      }
      goto LABEL_107;
    }
    v38 = v57;
    if ( *(_DWORD *)(v57 + 8) )
    {
      v40 = v57 + 12;
      v41 = 0;
      if ( v57 + 12 < v57 + (unsigned __int64)*(unsigned int *)(v57 + 4) )
      {
        while ( 1 )
        {
          if ( v41 >= *(_DWORD *)(v38 + 8) )
            goto LABEL_125;
          if ( v41 >= 4 )
          {
            v44 = -1072431093;
            goto LABEL_130;
          }
          if ( *(_WORD *)v40 )
            break;
          v38 = acpiUpcPackageFields[2 * v41];
          v42 = acpiUpcPackageFields[2 * v41 + 1];
          if ( v42 == 1 )
          {
            *((_BYTE *)v24 + v38 + 1340) = *(_BYTE *)(v40 + 4);
          }
          else
          {
            if ( v42 != 4 )
            {
              v44 = -1072431089;
LABEL_130:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v55) = v44;
                LODWORD(v52) = v22;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(a1 + 2536),
                  2u,
                  6u,
                  0x40u,
                  (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
                  v52,
                  v55);
              }
              if ( (byte_140070D49 & 0x40) != 0 )
              {
                LODWORD(v52) = v44;
                LODWORD(v50) = v22;
                McTemplateK0pqq_EtwWriteTransfer(
                  v38,
                  &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
                  0LL,
                  *(_QWORD *)(a1 + 16),
                  v50,
                  v52);
              }
              v7 = 0;
              goto LABEL_64;
            }
            *(_DWORD *)((char *)v24 + v38 + 1340) = *(_DWORD *)(v40 + 4);
          }
          v43 = *(unsigned __int16 *)(v40 + 2);
          if ( (unsigned __int16)v43 < 4u )
            v43 = 4LL;
          v38 = v57;
          v40 += v43 + 4;
          ++v41;
          if ( v40 >= v57 + (unsigned __int64)*(unsigned int *)(v57 + 4) )
            goto LABEL_125;
        }
        v44 = -1072431096;
        goto LABEL_130;
      }
LABEL_125:
      _InterlockedOr((volatile signed __int32 *)v24 + 51, 2u);
      if ( *((_BYTE *)v24 + 1340) )
        _InterlockedOr((volatile signed __int32 *)v24 + 51, 1u);
      else
        _InterlockedAnd((volatile signed __int32 *)v24 + 51, 0xFFFFFFFE);
      v45 = *((_BYTE *)v24 + 1341);
      if ( v45 == 8 || (unsigned __int8)(v45 - 9) <= 1u )
      {
        _InterlockedOr((volatile signed __int32 *)v24 + 51, 0x1000u);
        if ( *((_BYTE *)v24 + 1341) == 10 )
          _InterlockedOr((volatile signed __int32 *)v24 + 51, 0x200u);
        if ( v69 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDDD(
              *(_QWORD *)(a1 + 2536),
              (*((_DWORD *)v24 + 336) >> 5) & 1,
              (*((_DWORD *)v24 + 336) >> 3) & 1,
              v24[168] & 3,
              v50);
        }
        else
        {
          v46 = *((_DWORD *)v24 + 336);
          if ( v46 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = 66;
LABEL_149:
            LODWORD(v55) = v46;
            LODWORD(v52) = v22;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2536),
              2u,
              6u,
              v47,
              (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
              v52,
              v55);
          }
        }
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v24 + 51, 0xFFFFEFFF);
        v46 = *((_DWORD *)v24 + 336);
        if ( v46 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v47 = 67;
          goto LABEL_149;
        }
      }
      v48 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v59, 1145851999, v56);
      v7 = v48;
      if ( v48 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = v48;
          LODWORD(v52) = v22;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1 + 2536),
            4u,
            3u,
            0x44u,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
            v52,
            v55);
        }
        if ( (byte_140070D49 & 0x40) != 0 )
        {
          v37 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
LABEL_106:
          LODWORD(v52) = v7;
          LODWORD(v50) = v22;
          McTemplateK0pqq_EtwWriteTransfer(v36, v37, 0LL, *(_QWORD *)(a1 + 16), v50, v52);
        }
LABEL_107:
        v7 = 0;
        goto LABEL_64;
      }
      v49 = v57;
      if ( *(_DWORD *)(v57 + 8) && *(_WORD *)(v57 + 12) == 2 && *(_WORD *)(v57 + 14) >= 0x10u )
      {
        *(_OWORD *)(v24 + 169) = *(_OWORD *)(v57 + 16);
        _InterlockedOr((volatile signed __int32 *)v24 + 51, 4u);
        if ( (*(_BYTE *)(v49 + 24) & 1) == 0 )
          _InterlockedAnd((volatile signed __int32 *)v24 + 51, 0xFFFFFFFE);
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v52) = v22;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2536),
            2u,
            6u,
            0x45u,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
            v52);
        }
        if ( (byte_140070D49 & 0x40) != 0 )
        {
          LODWORD(v52) = v7;
          LODWORD(v50) = v22;
          McTemplateK0pqq_EtwWriteTransfer(
            v36,
            &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE,
            0LL,
            *(_QWORD *)(a1 + 16),
            v50,
            v52);
        }
      }
      goto LABEL_64;
    }
    if ( (byte_140070D49 & 0x40) != 0 )
    {
      LODWORD(v52) = -1072431093;
      LODWORD(v50) = v22;
      McTemplateK0pqq_EtwWriteTransfer(
        v57,
        &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
        0LL,
        *(_QWORD *)(a1 + 16),
        v50,
        v52);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = 63;
LABEL_113:
      LODWORD(v52) = v22;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        6u,
        v39,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v52);
    }
LABEL_64:
    v19 = v71;
LABEL_65:
    if ( (unsigned int)++v70 >= *(_DWORD *)(v60 + 4) )
      goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v54) = v7;
    LODWORD(v53) = *((unsigned __int16 *)v24 + 100);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      0x3Au,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v53,
      v54);
  }
  v4 = 1;
LABEL_6:
  if ( v61 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v56 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v62 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v4 == 1 )
    return (unsigned int)v7;
  return v1;
}
