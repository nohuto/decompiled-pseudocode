/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x14003B898
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x14003C4C4 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhAcpiEnumChildren @ 0x14003A850 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x14003A9E4 (UsbhAcpiEvalAcpiMethodEx.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003E4F0 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v7; // r13
  int v8; // ebx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  const EVENT_DESCRIPTOR *v14; // r9
  unsigned int v15; // r9d
  __int64 v16; // r10
  unsigned int v17; // r8d
  unsigned __int64 v18; // r10
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // rdi
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r10d
  unsigned int v27; // ecx
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // [rsp+28h] [rbp-71h]
  _DWORD *v31; // [rsp+40h] [rbp-59h]
  int v32; // [rsp+48h] [rbp-51h]
  __int128 v33; // [rsp+50h] [rbp-49h] BYREF
  int v34; // [rsp+60h] [rbp-39h]
  _DWORD v35[7]; // [rsp+64h] [rbp-35h]
  _DWORD *v36; // [rsp+80h] [rbp-19h]
  __int64 v37; // [rsp+88h] [rbp-11h]
  int v38; // [rsp+90h] [rbp-9h]
  __int128 v39; // [rsp+98h] [rbp-1h] BYREF
  int v40; // [rsp+A8h] [rbp+Fh]

  v35[5] = 8;
  v40 = 0;
  v37 = 0LL;
  v38 = 0;
  v34 = 0;
  v35[0] = 1;
  v35[1] = 1;
  v35[2] = 1;
  v35[3] = 4;
  v35[4] = 4;
  v35[6] = 4;
  v39 = 0LL;
  v33 = 0LL;
  v36 = FdoExt(a1);
  result = UsbhAcpiEnumChildren(a1, &v39, 0x14u);
  if ( (_DWORD)result == -2147483643 )
  {
    v5 = DWORD1(v39);
    if ( DWORD1(v39) < 0x14 )
      return 3222536207LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, DWORD1(v39), 1112885333LL);
    v7 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v8 = UsbhAcpiEnumChildren(a1, Pool2, v5);
    if ( v8 < 0 )
      goto LABEL_30;
    v9 = ExAllocatePool2(64LL, 1044LL, 1112885333LL);
    if ( !v9 )
    {
      v8 = -1073741670;
LABEL_30:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    if ( !*((_QWORD *)v36 + 378) )
    {
      v10 = FdoExt(a1);
      *((_QWORD *)v36 + 378) = ExAllocatePool2(64LL, 28 * (*((unsigned __int8 *)v10 + 2938) + 1LL), 1112885333LL);
    }
    v11 = v7 + 2;
    v32 = 1;
    if ( v7[1] <= 1u )
    {
LABEL_29:
      ExFreePoolWithTag((PVOID)v9, 0);
      goto LABEL_30;
    }
    while ( 1 )
    {
      v11 = (_DWORD *)((char *)v11 + (unsigned int)v11[1] + 8);
      v31 = v11;
      if ( (*(_BYTE *)v11 & 1) == 0 || !v11[1] )
        goto LABEL_28;
      *((_QWORD *)&v33 + 1) = v11 + 2;
      WORD1(v33) = *((_WORD *)v11 + 2);
      LOWORD(v33) = WORD1(v33) - 1;
      v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v33, 1380204895, (_DWORD *)v9);
      if ( v8 >= 0 )
        break;
      v8 = 0;
LABEL_27:
      v11 = v31;
LABEL_28:
      if ( (unsigned int)++v32 >= v7[1] )
        goto LABEL_29;
    }
    if ( !*(_DWORD *)(v9 + 8) )
      goto LABEL_27;
    v12 = v9 + 12;
    if ( *(_WORD *)(v9 + 12) )
      goto LABEL_27;
    v13 = *(unsigned __int16 *)(v9 + 16);
    if ( !(_WORD)v13 || (unsigned __int16)v13 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_27;
    v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v33, 1129338207, (_DWORD *)v9);
    if ( v8 < 0 )
    {
LABEL_21:
      v14 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_22:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v14);
      v8 = 0;
      goto LABEL_27;
    }
    v15 = *(_DWORD *)(v9 + 8);
    if ( !v15 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v30) = v13;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            38,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v30);
        }
      }
      goto LABEL_27;
    }
    v16 = *(unsigned int *)(v9 + 4);
    v37 = 0LL;
    v17 = 0;
    v38 = 0;
    v18 = v9 + v16;
    while ( v12 < v18 && v17 < v15 )
    {
      if ( v17 >= 4 || *(_WORD *)v12 )
        goto LABEL_21;
      v19 = v35[2 * v17];
      v20 = (unsigned int)v35[2 * v17 - 1];
      if ( v19 == 1 )
      {
        *((_BYTE *)&v37 + v20) = *(_BYTE *)(v12 + 4);
      }
      else
      {
        if ( v19 != 4 )
          goto LABEL_21;
        *(_DWORD *)((char *)&v37 + v20) = *(_DWORD *)(v12 + 4);
      }
      v21 = *(unsigned __int16 *)(v12 + 2);
      if ( (unsigned __int16)v21 < 4u )
        v21 = 4LL;
      v12 += v21 + 4;
      ++v17;
    }
    v22 = v36;
    v23 = *((_QWORD *)v36 + 378);
    if ( v23 )
    {
      v24 = v38;
      v25 = 28 * v13;
      *(_QWORD *)(v25 + v23) = v37;
      *(_DWORD *)(v25 + v23 + 8) = v24;
      *(_DWORD *)(a2 + 4 * v13) |= 0x20u;
    }
    if ( !(_BYTE)v37 )
    {
      *(_DWORD *)(a2 + 4 * v13) = *(_DWORD *)(a2 + 4 * v13) & 0xFFFFFFE0 | 0x11;
      goto LABEL_27;
    }
    v26 = BYTE1(v37);
    v27 = *(_DWORD *)(a2 + 4 * v13) & 0xFFFFFFE0;
    *(_DWORD *)(a2 + 4 * v13) = v27;
    if ( v26 )
    {
      switch ( v26 )
      {
        case 1:
          v28 = v27 | 4;
          break;
        case 2:
          v28 = v27 | 2;
          break;
        case 255:
          v28 = v27 | 8;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dD(
              WPP_GLOBAL_Control->DeviceExtension,
              v26 - 2,
              v23,
              39,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              v13,
              v26);
          }
          goto LABEL_61;
      }
      *(_DWORD *)(a2 + 4 * v13) = v28;
    }
LABEL_61:
    v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v33, 1145851999, (_DWORD *)v9);
    if ( v8 >= 0 )
    {
      if ( *(_DWORD *)(v9 + 8) && *(_WORD *)(v9 + 12) == 2 && *(_WORD *)(v9 + 14) >= 0x10u )
      {
        v29 = *((_QWORD *)v22 + 378);
        if ( v29 )
        {
          *(_OWORD *)(28 * v13 + v29 + 12) = *(_OWORD *)(v9 + 16);
          *(_DWORD *)(a2 + 4 * v13) |= 0x40u;
        }
        if ( (*(_BYTE *)(v9 + 24) & 1) == 0 )
          *(_DWORD *)(a2 + 4 * v13) |= 0x10u;
        v22[641] |= 1u;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v30) = v13;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            40,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v30);
        }
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
      }
      goto LABEL_27;
    }
    v14 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
    goto LABEL_22;
  }
  return result;
}
