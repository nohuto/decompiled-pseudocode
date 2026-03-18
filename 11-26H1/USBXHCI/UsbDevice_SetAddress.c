/*
 * XREFs of UsbDevice_SetAddress @ 0x140025BE0
 * Callers:
 *     UsbDevice_UcxEvtAddress @ 0x1400253C0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x14001E7D4 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x140034648 (WPP_RECORDER_SF_dqq.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004E410 (UsbDevice_GetDeviceSpeedEx.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int16 v4; // r13
  __int64 v5; // r8
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rsi
  int v14; // r9d
  int v15; // r15d
  __int64 v16; // r14
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int *v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  __int64 v24; // r10
  int DeviceSpeed; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned __int16 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // cl
  int v40; // r8d
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbp
  int v45; // eax
  __int16 v46; // dx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // r8d
  __int64 v50; // rax
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // ecx
  __int64 v55; // r8
  char v56; // dl
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  int v63; // [rsp+28h] [rbp-50h]
  int v64; // [rsp+30h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v4 = a2;
  v5 = a1 + 624;
  v7 = *(_QWORD *)(v2 + 88);
  if ( !*(_BYTE *)(a1 + 665) )
    v5 = a1 + 616;
  v8 = *(_QWORD *)(v2 + 144);
  v9 = *(_QWORD *)(v5 + 32);
  if ( v9 )
  {
    v10 = *(void **)(v9 + 16);
    v11 = *(_DWORD *)(v9 + 44);
  }
  else
  {
    v11 = 0;
    v10 = 0LL;
  }
  memset(v10, 0, v11);
  v12 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 16);
  else
    v13 = 0LL;
  v14 = 0;
  v15 = *(_DWORD *)(v7 + 104) & 4;
  *(_DWORD *)(v13 + 4) |= 3u;
  v16 = v15 != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(v13 + 4);
  v17 = *(_DWORD *)(a1 + 36);
  if ( v17 > 1 )
  {
    v18 = 0;
    v19 = (unsigned int *)(a1 + 48);
    v20 = v17 - 1;
    do
    {
      v21 = *v19++;
      if ( v21 > 0xF )
        v21 = 15;
      v22 = v21 << v18;
      v18 += 4;
      v14 |= v22;
      --v20;
    }
    while ( v20 );
  }
  v23 = *(_DWORD *)(v16 + v13 + 32) ^ (v14 ^ *(_DWORD *)(v16 + v13 + 32)) & 0xFFFFF;
  *(_DWORD *)(v16 + v13 + 32) = v23;
  v24 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v24 + 744) & 0x20000000LL) == 0 )
  {
    v40 = *(_DWORD *)(a1 + 20);
    if ( v40 )
    {
      if ( v40 != 1 )
      {
        if ( v40 != 2 )
        {
          if ( v40 != 3 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return (unsigned int)-1073741811;
            v33 = 22;
            v34 = *(_QWORD *)(v24 + 72);
            v64 = *(_DWORD *)(a1 + 20);
            v63 = *(unsigned __int8 *)(a1 + 143);
            goto LABEL_24;
          }
          goto LABEL_30;
        }
LABEL_32:
        v35 = v23 & 0xFF0FFFFF | 0x300000;
        goto LABEL_37;
      }
LABEL_34:
      v35 = v23 & 0xFF0FFFFF | 0x100000;
      goto LABEL_37;
    }
LABEL_36:
    v35 = v23 & 0xFF0FFFFF | 0x200000;
    goto LABEL_37;
  }
  Feature_UISCSF__private_ReportDeviceUsage();
  DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1);
  if ( !DeviceSpeed )
  {
    v23 = *(_DWORD *)(v16 + v13 + 32);
    goto LABEL_36;
  }
  v27 = DeviceSpeed - 1;
  if ( !v27 )
  {
    v23 = *(_DWORD *)(v16 + v13 + 32);
    goto LABEL_34;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    v23 = *(_DWORD *)(v16 + v13 + 32);
    goto LABEL_32;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
    v23 = *(_DWORD *)(v16 + v13 + 32);
LABEL_30:
    v35 = v23 & 0xFF0FFFFF | 0x400000;
    goto LABEL_37;
  }
  v30 = v29 - 1;
  if ( v30 )
  {
    v31 = v30 - 1;
    if ( v31 )
    {
      if ( v31 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v32 = UsbDevice_GetDeviceSpeedEx(v26);
        v33 = 20;
        v64 = v32;
        v63 = *(unsigned __int8 *)(a1 + 143);
        v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
LABEL_24:
        WPP_RECORDER_SF_DD(v34, 2u, 0xCu, v33, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, v63, v64);
        return (unsigned int)-1073741811;
      }
      v35 = *(_DWORD *)(v16 + v13 + 32) & 0xFF0FFFFF | 0x700000;
    }
    else
    {
      v35 = *(_DWORD *)(v16 + v13 + 32) & 0xFF0FFFFF | 0x600000;
    }
  }
  else
  {
    v35 = *(_DWORD *)(v16 + v13 + 32) & 0xFF0FFFFF | 0x500000;
  }
LABEL_37:
  *(_DWORD *)(v16 + v13 + 32) = v35 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v16 + v13 + 38) = *(_BYTE *)(a1 + 44);
  v36 = *(_QWORD *)(a1 + 24);
  if ( v36 )
  {
    v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v36,
            off_14006B128);
    if ( *(_DWORD *)(v37 + 152) > 1u )
      *(_DWORD *)(v16 + v13 + 32) |= 0x2000000u;
    *(_BYTE *)(v16 + v13 + 40) = *(_BYTE *)(v37 + 143);
    if ( !*(_BYTE *)(a1 + 144) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v37 + 152) )
      *(_BYTE *)(a1 + 145) = 1;
  }
  v38 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v38 )
    v39 = *(_BYTE *)(a1 + 4 * v38 + 44);
  else
    v39 = 0;
  *(_BYTE *)(v16 + v13 + 41) = v39;
  v41 = v15 != 0 ? 0x40 : 0;
  v42 = *(unsigned int *)(v41 + v13 + 68);
  v43 = (unsigned int)v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(a1 + 184) + 128LL))) & 0x38;
  *(_DWORD *)(v41 + v13 + 68) = v43;
  v44 = *(_QWORD *)(a1 + 184);
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v43, v42)
    && !*(_WORD *)(v44 + 100)
    && *(_BYTE *)(v44 + 39)
    && ((v45 = *(_DWORD *)(v44 + 128), v45 == 5) || v45 == 1) )
  {
    v46 = *(_WORD *)(v44 + 105);
  }
  else
  {
    v46 = *(_WORD *)(v44 + 100) & 0x7FF;
  }
  *(_WORD *)((v15 != 0 ? 0x40 : 0) + v13 + 70) = v46;
  v47 = *(_QWORD *)(a1 + 184);
  v48 = *(_BYTE *)(v47 + 99) & 3;
  if ( v48 == 1 )
  {
    v49 = 0;
  }
  else if ( (*(_QWORD *)(*(_QWORD *)v47 + 736LL) & 0x10000000000000LL) == 0
         || v48 != 3
         || *(char *)(v47 + 98) >= 0
         || (v50 = *(_QWORD *)(v47 + 16), *(_WORD *)(v50 + 132) != 1529)
         || *(_WORD *)(v50 + 134) != 4353
         || (v49 = 0, *(_DWORD *)(v50 + 36) <= 1u) )
  {
    v49 = 6;
  }
  *(_DWORD *)((v15 != 0 ? 0x40 : 0) + v13 + 68) = v49 | *(_DWORD *)((v15 != 0 ? 0x40 : 0) + v13 + 68) & 0xFFFFFFF9;
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 160LL) = *(unsigned __int16 *)((v15 != 0 ? 0x40 : 0) + v13 + 70);
  *(_QWORD *)((v15 != 0 ? 0x40 : 0) + v13 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 184), 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v52 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 656LL : 648LL) + a1);
    if ( v52 )
      v53 = *(_QWORD *)(v52 + 16);
    else
      LODWORD(v53) = 0;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v53, v51, 23);
  }
  memset((void *)(a1 + 464), 0, 0x60uLL);
  v54 = *(_DWORD *)(a1 + 500);
  *(_QWORD *)(a1 + 504) = UsbDevice_SetAddressCompletion;
  v55 = a1 + 648;
  *(_QWORD *)(a1 + 512) = a1;
  *(_DWORD *)(a1 + 500) = (v54 & 0xFFFF03FF | 0x2C00) ^ ((v54 & 0x3FF | 0x2C00) ^ (unsigned __int16)(v4 << 9)) & 0x200;
  *(_BYTE *)(a1 + 503) = *(_BYTE *)(a1 + 143);
  v56 = *(_BYTE *)(a1 + 665);
  v57 = *(_QWORD *)((v56 != 0 ? 656LL : 648LL) + a1);
  if ( v57 )
    v58 = *(_QWORD *)(v57 + 24);
  else
    v58 = 0LL;
  *(_QWORD *)(a1 + 488) = v58;
  if ( v56 )
    v55 = a1 + 656;
  if ( *(_QWORD *)v55 )
    v59 = *(_QWORD *)(*(_QWORD *)v55 + 16LL);
  else
    v59 = 0LL;
  *(_QWORD *)(a1 + 536) = v59;
  v60 = *(_QWORD *)((v56 != 0 ? 656LL : 648LL) + a1);
  if ( v60 )
    v61 = *(_DWORD *)(v60 + 44);
  else
    v61 = 0;
  *(_DWORD *)(a1 + 544) = v61;
  *(_DWORD *)(a1 + 548) = 1;
  *(_QWORD *)(a1 + 552) = a1;
  Command_SendCommand(v8, a1 + 464);
  return v3;
}
