/*
 * XREFs of NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400E0E40
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1400CE9B0 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     TemperatureFromKelvinToCelsius @ 0x1400E3084 (TemperatureFromKelvinToCelsius.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeControllerGetTemperatureThresholdWorkerCompletion(
        union _SLIST_HEADER *SystemArgument2,
        _DWORD *a2,
        unsigned __int16 *a3)
{
  int v3; // ebx
  unsigned __int16 *v5; // r10
  int v7; // edx
  __int64 v8; // r11
  __int64 v9; // r13
  unsigned __int8 *v10; // rdi
  __int64 v11; // r14
  unsigned int v12; // edx
  int v13; // edx
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  bool v17; // zf
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rax
  unsigned int v27; // edx
  char *v28; // r9
  unsigned __int16 v29; // r10
  char v30; // al
  unsigned __int8 v31; // al
  int v32; // eax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r12
  _BYTE *v36; // r9
  unsigned __int8 v37; // si
  char v38; // r10
  char v39; // di
  char v40; // r11
  char v41; // bp
  char *v42; // r14
  unsigned int v43; // r15d
  unsigned __int64 v44; // rbp
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // al
  char v49; // r8
  char *v50; // r11
  unsigned int v51; // eax
  __int64 v52; // [rsp+20h] [rbp-98h]
  char v53; // [rsp+60h] [rbp-58h]
  unsigned int v54; // [rsp+64h] [rbp-54h]
  GUID v55; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v5 = a3;
  v7 = 0;
  v8 = 0LL;
  LODWORD(a3) = 128;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  v10 = *(unsigned __int8 **)(*(_QWORD *)a2 + 4208LL);
  v11 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  *(_QWORD *)(v9 + 56) = 0LL;
  if ( !v5 )
  {
    *(_DWORD *)(v9 + 48) = -1073741823;
LABEL_33:
    v22 = 16LL * *(unsigned __int16 *)(v8 + 12);
    *(_DWORD *)(v9 + 48) = v7;
    *(_QWORD *)(v9 + 56) = v22 + 24;
    goto LABEL_34;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = v5[7];
  v12 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v12 >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
        goto LABEL_6;
      v14 = v12 >> 1;
      switch ( (unsigned __int8)v14 )
      {
        case 0x80u:
          goto LABEL_6;
        case 0x81u:
          goto LABEL_6;
        case 0x82u:
          goto LABEL_6;
        case 0x83u:
          goto LABEL_6;
        case 0x84u:
          goto LABEL_6;
      }
      v15 = (unsigned __int8)v14 - 133;
      if ( (unsigned __int8)v14 == 133 )
        goto LABEL_6;
      goto LABEL_13;
    }
    v16 = v12 >> 1;
    if ( (unsigned __int8)v16 > 0x80u )
    {
      if ( (unsigned __int8)v16 == 129 )
        goto LABEL_31;
      v20 = (unsigned __int8)v16 - 130;
      if ( (unsigned __int8)v16 == 130 )
        goto LABEL_14;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v16 == 128 )
      goto LABEL_31;
    if ( (unsigned __int8)v16 <= 0x11u )
    {
      if ( (unsigned __int8)v16 != 17 )
      {
        if ( (unsigned __int8)v16 <= 9u )
        {
          if ( (unsigned __int8)v16 == 9
            || !(_BYTE)v16
            || (unsigned __int8)v16 == 1
            || (unsigned __int8)v16 == 2
            || (unsigned __int8)v16 == 3 )
          {
            goto LABEL_31;
          }
          v18 = (unsigned __int8)v16 - 5;
          v17 = (unsigned __int8)v16 == 5;
LABEL_26:
          if ( v17 )
            goto LABEL_31;
          v19 = v18 - 1;
          if ( !v19 )
            goto LABEL_31;
          v20 = v19 - 1;
          if ( !v20 )
            goto LABEL_31;
LABEL_29:
          v21 = v20 == 1;
          goto LABEL_30;
        }
        if ( (unsigned __int8)v16 == 10 )
          goto LABEL_31;
        if ( (unsigned __int8)v16 != 11 )
        {
          if ( (unsigned __int8)v16 == 12
            || (unsigned __int8)v16 == 13
            || (unsigned __int8)v16 == 14
            || (unsigned __int8)v16 == 15 )
          {
            goto LABEL_31;
          }
          if ( (unsigned __int8)v16 != 16 )
            goto LABEL_6;
        }
      }
      v13 = -2147483210;
      goto LABEL_32;
    }
    if ( (unsigned __int8)v16 > 0x1Au )
    {
      switch ( (unsigned __int8)v16 )
      {
        case 0x1Bu:
          v13 = -1073741637;
          goto LABEL_32;
        case 0x1Cu:
          goto LABEL_31;
        case 0x1Eu:
          goto LABEL_14;
      }
      v18 = (unsigned __int8)v16 - 31;
      v17 = (unsigned __int8)v16 == 31;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v16 != 26 && (unsigned __int8)v16 != 18 && (unsigned __int8)v16 != 19 )
    {
      if ( (unsigned __int8)v16 == 20 )
      {
        v13 = -1073741800;
        goto LABEL_32;
      }
      if ( (unsigned __int8)v16 == 21 || (unsigned __int8)v16 != 22 && (unsigned int)(unsigned __int8)v16 - 24 > 1 )
        goto LABEL_6;
    }
LABEL_66:
    v13 = -1073741436;
    goto LABEL_32;
  }
  v27 = v12 >> 1;
  if ( (unsigned __int8)v27 > 0x80u )
  {
    if ( (unsigned __int8)v27 == 129 )
      goto LABEL_31;
    v20 = (unsigned __int8)v27 - 130;
    if ( (unsigned __int8)v27 == 130 )
    {
      v13 = -1073741661;
      goto LABEL_32;
    }
    goto LABEL_29;
  }
  if ( (unsigned __int8)v27 == 128 )
    goto LABEL_31;
  if ( (unsigned __int8)v27 > 0xEu )
  {
    if ( (unsigned __int8)v27 <= 0x16u )
    {
      if ( (unsigned __int8)v27 == 22
        || (unsigned __int8)v27 == 15
        || (unsigned __int8)v27 == 16
        || (unsigned __int8)v27 == 17
        || (unsigned __int8)v27 == 18
        || (unsigned __int8)v27 == 19 )
      {
        goto LABEL_31;
      }
      v15 = (unsigned __int8)v27 - 20;
      if ( (unsigned __int8)v27 != 20 )
      {
LABEL_13:
        if ( v15 == 1 )
        {
LABEL_14:
          v13 = -1073741790;
          goto LABEL_32;
        }
LABEL_6:
        v13 = -1073741435;
LABEL_32:
        *(_DWORD *)(v9 + 48) = v13;
        goto LABEL_34;
      }
      goto LABEL_66;
    }
    if ( (unsigned __int8)v27 == 24 )
      goto LABEL_31;
    if ( (unsigned __int8)v27 == 25 || (unsigned __int8)v27 == 26 )
    {
      v13 = -1073741643;
      goto LABEL_32;
    }
    if ( (unsigned __int8)v27 != 27 )
    {
      if ( (unsigned __int8)v27 == 28 )
        goto LABEL_6;
      v21 = (unsigned __int8)v27 == 30;
LABEL_30:
      if ( !v21 )
        goto LABEL_6;
LABEL_31:
      v13 = -1073741808;
      goto LABEL_32;
    }
LABEL_106:
    v13 = -1073741248;
    goto LABEL_32;
  }
  if ( (unsigned __int8)v27 == 14 )
    goto LABEL_31;
  if ( (unsigned __int8)v27 > 7u )
  {
    if ( (unsigned __int8)v27 != 8 && (unsigned __int8)v27 != 9 && (unsigned __int8)v27 != 10 )
    {
      if ( (unsigned __int8)v27 == 11 )
        goto LABEL_31;
      v20 = (unsigned __int8)v27 - 12;
      if ( (unsigned __int8)v27 == 12 )
      {
        v13 = -1073740758;
        goto LABEL_32;
      }
      goto LABEL_29;
    }
    goto LABEL_106;
  }
  if ( (unsigned __int8)v27 == 7 )
    goto LABEL_106;
  if ( (_BYTE)v27 )
  {
    if ( (unsigned __int8)v27 == 1 || (unsigned __int8)v27 == 2 )
      goto LABEL_31;
    if ( (unsigned __int8)v27 == 3 || (unsigned __int8)v27 == 4 || (unsigned int)(unsigned __int8)v27 - 5 > 1 )
      goto LABEL_6;
    goto LABEL_66;
  }
  v29 = (unsigned __int8)TemperatureFromKelvinToCelsius(*v5, 0LL, *((_QWORD *)v10 + 1) + 16LL * v10[1], v10 + 2);
  if ( *v28 )
  {
    a3[15] = v29;
    *((_BYTE *)a3 + 33) = 1;
  }
  else
  {
    a3[14] = v29;
    *((_BYTE *)a3 + 32) = 1;
    *((_BYTE *)a3 + 34) = 1;
  }
  if ( !*v28 && (v10[1] || *(_WORD *)(SystemArgument2[37].Alignment + 266)) )
  {
    v30 = 1;
  }
  else
  {
    v31 = v10[1];
    if ( v31 >= *v10 )
      goto LABEL_33;
    v10[1] = v31 + 1;
    v30 = 0;
  }
  *v28 = v30;
  *(_QWORD *)(*(_QWORD *)a2 + 4192LL) = NvmeControllerGetTemperatureThresholdWorkerCompletion;
  *(_QWORD *)(*(_QWORD *)a2 + 4200LL) = a2;
  *(_QWORD *)(*(_QWORD *)a2 + 4208LL) = v10;
  BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)a2 + 4096LL, v10[1], v10[2]);
  v32 = NvmeControllerProcessCommand((__int64)SystemArgument2, a2);
  if ( v32 >= 0 )
    return;
  *(_DWORD *)(v9 + 48) = v32;
LABEL_34:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52436152u);
  v23 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  if ( v23 )
    NvmeFreeDmaBuffer(
      (_DWORD)SystemArgument2,
      *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
      (_DWORD)a3,
      v23,
      *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(SystemArgument2, (__int64)a2);
  if ( v11 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v11 + 152));
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v9 + 141) = -84;
  if ( v17 )
    goto LABEL_182;
  v55 = 0LL;
  IoGetActivityIdIrp(v9, &v55);
  v25 = *(_QWORD *)(v9 + 184);
  if ( *(_BYTE *)v25 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_182;
    v33 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_181;
  }
  if ( *(_BYTE *)v25 != 15 )
  {
    if ( *(_BYTE *)v25 != 27 )
      goto LABEL_182;
    if ( *(_BYTE *)(v25 + 1) == 7 && !*(_DWORD *)(v25 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v26 = *(int **)(v9 + 56);
        if ( v26 )
          v3 = *v26;
        LODWORD(v52) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v24, v25, &v55, v9, v52, *(_DWORD *)(v9 + 48));
      }
      goto LABEL_182;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_182;
    v33 = &EventPnpRequestComplete;
LABEL_181:
    LODWORD(v52) = *(_DWORD *)(v9 + 48);
    McTemplateK0pd_EtwWriteTransfer(v24, v33, &v55, v9, v52);
    goto LABEL_182;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_182;
  v34 = *(_QWORD *)(v25 + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *(_BYTE *)(v34 + 2) == 40 )
  {
    v42 = 0LL;
    v53 = 0;
    if ( *(_DWORD *)(v34 + 20) )
      goto LABEL_182;
    v43 = 0;
    v54 = *(_DWORD *)(v34 + 56);
    if ( !v54 )
      goto LABEL_182;
    while ( 1 )
    {
      v24 = *(unsigned int *)(v34 + 4LL * v43 + 120);
      if ( (unsigned int)v24 >= 0x80 )
      {
        v44 = *(unsigned int *)(v34 + 16);
        if ( (unsigned int)v24 < (unsigned int)v44 )
        {
          v45 = (unsigned int)v24;
          v46 = *(_DWORD *)(v24 + v34) - 64;
          if ( v46 )
          {
            v24 = (unsigned int)(v46 - 1);
            if ( (_DWORD)v24 )
            {
              if ( (_DWORD)v24 == 1 )
              {
                v24 = v45 + 40;
                if ( v45 + 40 <= v44 )
                {
                  if ( *(_DWORD *)(v45 + v34 + 12) )
                    v42 = (char *)(v45 + v34 + 32);
                  v36 = *(_BYTE **)(v45 + v34 + 24);
                  goto LABEL_152;
                }
              }
            }
            else
            {
              v24 = v45 + 56;
              if ( v45 + 56 <= v44 )
              {
                v53 = 1;
                if ( *(_BYTE *)(v45 + v34 + 10) )
                  v42 = (char *)(v45 + v34 + 24);
                v35 = *(_BYTE *)(v45 + v34 + 8);
                v36 = *(_BYTE **)(v45 + v34 + 16);
                v37 = *(_BYTE *)(v45 + v34 + 9);
              }
            }
          }
          else
          {
            v24 = v45 + 40;
            if ( v45 + 40 <= v44 )
            {
              if ( *(_BYTE *)(v45 + v34 + 10) )
                v42 = (char *)(v45 + v34 + 24);
              v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_152:
              v37 = *(_BYTE *)(v45 + v34 + 9);
              v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_153:
              if ( v42 )
              {
                v47 = *v42;
                v41 = 0;
                goto LABEL_156;
              }
              goto LABEL_182;
            }
          }
          if ( v53 )
            goto LABEL_153;
        }
      }
      if ( ++v43 >= v54 )
        goto LABEL_153;
    }
  }
  v47 = *(_BYTE *)(v34 + 72);
  v36 = *(_BYTE **)(v34 + 32);
  v37 = *(_BYTE *)(v34 + 11);
  v35 = *(_BYTE *)(v34 + 4);
  if ( *(_BYTE *)(v34 + 2) )
    goto LABEL_182;
LABEL_156:
  LOBYTE(v24) = v47 - 8;
  if ( (v24 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v34 + 3) == 1 || !v36 || !v37 )
    {
LABEL_175:
      if ( byte_140173441 < 0 )
      {
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        LODWORD(v52) = *(_DWORD *)(v9 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v24, v34, &v55, v9, v52, *(_BYTE *)(v34 + 3), v35, v38, v39, v40, v9);
      }
      goto LABEL_182;
    }
    v48 = *v36 & 0x7F;
    if ( v48 == 114 || v48 == 115 )
    {
      v24 = (unsigned __int64)&v36[v37];
      v49 = 0;
      if ( (unsigned __int64)(v36 + 8) > v24 )
        goto LABEL_173;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v24 = (unsigned __int64)&v36[v37];
      v49 = 0;
      if ( (unsigned __int64)(v36 + 8) > v24 )
        goto LABEL_173;
      v50 = v36 + 13;
      v38 = v36[2] & 0xF;
      v51 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v51 = (unsigned __int8)v36[7] + 8;
      v24 = (unsigned __int64)&v36[v51];
      if ( (unsigned __int64)v50 <= v24 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v24 )
        v40 = 0;
      else
        v40 = *v50;
    }
    v49 = 1;
LABEL_173:
    if ( v49 )
      v41 = 1;
    goto LABEL_175;
  }
LABEL_182:
  IofCompleteRequest((PIRP)v9, 1);
}
