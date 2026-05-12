/*
 * XREFs of NvmeGetStorageTemperaturePropertyComplete @ 0x1400E1690
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1400CE9B0 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     TemperatureFromKelvinToCelsius @ 0x1400E3084 (TemperatureFromKelvinToCelsius.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeGetStorageTemperaturePropertyComplete(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // edi
  union _SLIST_HEADER *v5; // rbx
  void *v6; // r9
  __int64 v7; // r14
  __int16 v8; // r15
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // edx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  int *v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  unsigned int v25; // edx
  char *v26; // r14
  __int64 v27; // r13
  _WORD *v28; // rax
  unsigned __int16 v29; // r15
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned __int8 v33; // al
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int8 v40; // al
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 v43; // al
  unsigned __int16 *v44; // r9
  __int64 v45; // rdx
  unsigned __int16 v46; // bx
  char *v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 Pool; // rax
  const EVENT_DESCRIPTOR *v51; // rdx
  __int64 v52; // rdx
  char v53; // r12
  _BYTE *v54; // r9
  unsigned __int8 v55; // r14
  char v56; // r10
  char v57; // bl
  char v58; // r11
  char v59; // r15
  char *v60; // r15
  __int64 v61; // rax
  unsigned __int64 v62; // r13
  __int64 v63; // r8
  int v64; // ecx
  char v65; // cl
  char v66; // r8
  char v67; // al
  char *v68; // r11
  unsigned int v69; // eax
  __int64 v70; // [rsp+20h] [rbp-A8h]
  char v71; // [rsp+60h] [rbp-68h]
  __int64 v72; // [rsp+68h] [rbp-60h]
  int v73; // [rsp+68h] [rbp-60h]
  unsigned int SystemArgument2a; // [rsp+70h] [rbp-58h]
  GUID v76; // [rsp+78h] [rbp-50h] BYREF

  v3 = 0;
  v5 = (union _SLIST_HEADER *)a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  v8 = 8;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  v72 = v7;
  *(_QWORD *)(v9 + 56) = 0LL;
  if ( !a3 )
  {
    v10 = -1073741823;
LABEL_32:
    v20 = (int *)(v9 + 48);
    goto LABEL_33;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v11 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v11 >> 9) & 7) != 0 )
  {
    if ( ((v11 >> 9) & 7) != 1 )
    {
      if ( ((v11 >> 9) & 7) != 2 )
        goto LABEL_6;
      v12 = v11 >> 1;
      switch ( (unsigned __int8)v12 )
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
      v13 = (unsigned __int8)v12 - 133;
      if ( (unsigned __int8)v12 == 133 )
        goto LABEL_6;
      goto LABEL_13;
    }
    v14 = v11 >> 1;
    if ( (unsigned __int8)v14 > 0x80u )
    {
      if ( (unsigned __int8)v14 == 129 )
        goto LABEL_31;
      v18 = (unsigned __int8)v14 - 130;
      if ( (unsigned __int8)v14 == 130 )
        goto LABEL_14;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v14 == 128 )
      goto LABEL_31;
    if ( (unsigned __int8)v14 <= 0x11u )
    {
      if ( (unsigned __int8)v14 != 17 )
      {
        if ( (unsigned __int8)v14 <= 9u )
        {
          if ( (unsigned __int8)v14 == 9
            || !(_BYTE)v14
            || (unsigned __int8)v14 == 1
            || (unsigned __int8)v14 == 2
            || (unsigned __int8)v14 == 3 )
          {
            goto LABEL_31;
          }
          v16 = (unsigned __int8)v14 - 5;
          v15 = (unsigned __int8)v14 == 5;
LABEL_26:
          if ( v15 )
            goto LABEL_31;
          v17 = v16 - 1;
          if ( !v17 )
            goto LABEL_31;
          v18 = v17 - 1;
          if ( !v18 )
            goto LABEL_31;
LABEL_29:
          v19 = v18 == 1;
          goto LABEL_30;
        }
        if ( (unsigned __int8)v14 == 10 )
          goto LABEL_31;
        if ( (unsigned __int8)v14 != 11 )
        {
          if ( (unsigned __int8)v14 == 12
            || (unsigned __int8)v14 == 13
            || (unsigned __int8)v14 == 14
            || (unsigned __int8)v14 == 15 )
          {
            goto LABEL_31;
          }
          if ( (unsigned __int8)v14 != 16 )
            goto LABEL_6;
        }
      }
      v10 = -2147483210;
      goto LABEL_32;
    }
    if ( (unsigned __int8)v14 > 0x1Au )
    {
      switch ( (unsigned __int8)v14 )
      {
        case 0x1Bu:
          v10 = -1073741637;
          goto LABEL_32;
        case 0x1Cu:
          goto LABEL_31;
        case 0x1Eu:
          goto LABEL_14;
      }
      v16 = (unsigned __int8)v14 - 31;
      v15 = (unsigned __int8)v14 == 31;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v14 != 26 && (unsigned __int8)v14 != 18 && (unsigned __int8)v14 != 19 )
    {
      if ( (unsigned __int8)v14 == 20 )
      {
        v10 = -1073741800;
        goto LABEL_32;
      }
      if ( (unsigned __int8)v14 == 21 || (unsigned __int8)v14 != 22 && (unsigned int)(unsigned __int8)v14 - 24 > 1 )
        goto LABEL_6;
    }
LABEL_65:
    v10 = -1073741436;
    goto LABEL_32;
  }
  v25 = v11 >> 1;
  if ( (unsigned __int8)v25 > 0x80u )
  {
    if ( (unsigned __int8)v25 == 129 )
      goto LABEL_31;
    v18 = (unsigned __int8)v25 - 130;
    if ( (unsigned __int8)v25 == 130 )
    {
      v10 = -1073741661;
      goto LABEL_32;
    }
    goto LABEL_29;
  }
  if ( (unsigned __int8)v25 == 128 )
    goto LABEL_31;
  if ( (unsigned __int8)v25 > 0xEu )
  {
    if ( (unsigned __int8)v25 <= 0x16u )
    {
      if ( (unsigned __int8)v25 == 22
        || (unsigned __int8)v25 == 15
        || (unsigned __int8)v25 == 16
        || (unsigned __int8)v25 == 17
        || (unsigned __int8)v25 == 18
        || (unsigned __int8)v25 == 19 )
      {
        goto LABEL_31;
      }
      v13 = (unsigned __int8)v25 - 20;
      if ( (unsigned __int8)v25 != 20 )
      {
LABEL_13:
        if ( v13 == 1 )
        {
LABEL_14:
          v10 = -1073741790;
          goto LABEL_32;
        }
LABEL_6:
        v10 = -1073741435;
        goto LABEL_32;
      }
      goto LABEL_65;
    }
    if ( (unsigned __int8)v25 == 24 )
      goto LABEL_31;
    if ( (unsigned __int8)v25 == 25 || (unsigned __int8)v25 == 26 )
    {
      v10 = -1073741643;
      goto LABEL_32;
    }
    if ( (unsigned __int8)v25 != 27 )
    {
      if ( (unsigned __int8)v25 == 28 )
        goto LABEL_6;
      v19 = (unsigned __int8)v25 == 30;
LABEL_30:
      if ( !v19 )
        goto LABEL_6;
LABEL_31:
      v10 = -1073741808;
      goto LABEL_32;
    }
LABEL_107:
    v10 = -1073741248;
    goto LABEL_32;
  }
  if ( (unsigned __int8)v25 == 14 )
    goto LABEL_31;
  if ( (unsigned __int8)v25 > 7u )
  {
    if ( (unsigned __int8)v25 != 8 && (unsigned __int8)v25 != 9 && (unsigned __int8)v25 != 10 )
    {
      if ( (unsigned __int8)v25 == 11 )
        goto LABEL_31;
      v18 = (unsigned __int8)v25 - 12;
      if ( (unsigned __int8)v25 == 12 )
      {
        v10 = -1073740758;
        goto LABEL_32;
      }
      goto LABEL_29;
    }
    goto LABEL_107;
  }
  if ( (unsigned __int8)v25 == 7 )
    goto LABEL_107;
  if ( (_BYTE)v25 )
  {
    if ( (unsigned __int8)v25 == 1 || (unsigned __int8)v25 == 2 )
      goto LABEL_31;
    if ( (unsigned __int8)v25 == 3 || (unsigned __int8)v25 == 4 || (unsigned int)(unsigned __int8)v25 - 5 > 1 )
      goto LABEL_6;
    goto LABEL_65;
  }
  v26 = *(char **)(v9 + 24);
  v20 = (int *)(v9 + 48);
  *(_DWORD *)(v9 + 48) = 0;
  v27 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  v28 = (_WORD *)(v27 + 214);
  do
  {
    if ( *v28 )
      break;
    --v28;
    --v8;
  }
  while ( v8 );
  v29 = v8 + 1;
  v30 = 16 * v29 + 24;
  memset_0(v26, 0, v30);
  *((_DWORD *)v26 + 1) = v30;
  v5 = (union _SLIST_HEADER *)a1;
  *(_DWORD *)v26 = 40;
  *((_WORD *)v26 + 6) = v29;
  a3 = *(_QWORD *)(a1 + 592);
  if ( !a3 )
  {
    v10 = -1073741823;
    v6 = 0LL;
LABEL_93:
    v7 = v72;
    goto LABEL_33;
  }
  v33 = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a3 + 268), v31, a3, v32);
  *((_WORD *)v26 + 4) = v33;
  v36 = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(v34 + 266), v33, v34, v35);
  *((_WORD *)v26 + 5) = v36;
  v37 = (unsigned __int16)(*(unsigned __int8 *)(v27 + 1) | (*(unsigned __int8 *)(v27 + 2) << 8));
  *((_WORD *)v26 + 12) = 0;
  v40 = TemperatureFromKelvinToCelsius(v37, v36, v38, v39);
  *((_WORD *)v26 + 13) = v40;
  v43 = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 56), v40, v41, v42);
  v44 = (unsigned __int16 *)(v27 + 200);
  v45 = v43;
  *((_WORD *)v26 + 14) = v43;
  v46 = 1;
  *((_WORD *)v26 + 15) = 0x8000;
  if ( v29 > 1u )
  {
    v47 = v26 + 42;
    do
    {
      *((_WORD *)v47 - 1) = v46;
      LOWORD(v45) = (unsigned __int8)TemperatureFromKelvinToCelsius(*v44, v45, v47, v44);
      v44 = (unsigned __int16 *)(v48 + 2);
      ++v46;
      *(_WORD *)v49 = v45;
      *(_DWORD *)(v49 + 2) = -2147450880;
      v47 = (char *)(v49 + 16);
    }
    while ( v46 < v29 );
  }
  Pool = RaidAllocatePool(64LL, 24LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)&v76.Data1 = Pool;
  v6 = (void *)Pool;
  if ( !Pool )
  {
    v5 = (union _SLIST_HEADER *)a1;
    v10 = -1073741670;
    goto LABEL_93;
  }
  *(_WORD *)(Pool + 1) = 0;
  *(_QWORD *)(Pool + 8) = v26;
  v7 = v72;
  *(_BYTE *)Pool = v46 - 1;
  *(_QWORD *)(Pool + 16) = a2;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~0x40u;
  *(_WORD *)(*(_QWORD *)a2 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)a2 + 4184LL) = v9;
  *(_QWORD *)(*(_QWORD *)a2 + 4192LL) = NvmeControllerGetTemperatureThresholdWorkerCompletion;
  *(_QWORD *)(*(_QWORD *)a2 + 4200LL) = a2;
  *(_QWORD *)(*(_QWORD *)a2 + 4208LL) = Pool;
  *(_QWORD *)(*(_QWORD *)a2 + 4224LL) = v72;
  BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)a2 + 4096LL, *(_BYTE *)(Pool + 1), *(_BYTE *)(Pool + 2));
  v5 = (union _SLIST_HEADER *)a1;
  v10 = NvmeControllerProcessCommand(a1, a2);
  if ( v10 >= 0 )
    return;
  v6 = *(void **)&v76.Data1;
LABEL_33:
  *v20 = v10;
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52436152u);
  v21 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  if ( v21 )
    NvmeFreeDmaBuffer((_DWORD)v5, *(_DWORD *)(*(_QWORD *)a2 + 4248LL), a3, v21, *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(v5, (__int64)a2);
  if ( v7 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 152));
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v9 + 141) = -84;
  if ( v15 )
    goto LABEL_183;
  v76 = 0LL;
  IoGetActivityIdIrp(v9, &v76);
  v23 = *(_QWORD *)(v9 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_183;
    v51 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_182;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_183;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v24 = *(int **)(v9 + 56);
        if ( v24 )
          v3 = *v24;
        LODWORD(v70) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v76, v9, v70, *v20);
      }
      goto LABEL_183;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_183;
    v51 = &EventPnpRequestComplete;
LABEL_182:
    LODWORD(v70) = *v20;
    McTemplateK0pd_EtwWriteTransfer(v22, v51, &v76, v9, v70);
    goto LABEL_183;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_183;
  v52 = *(_QWORD *)(v23 + 8);
  v53 = 0;
  v54 = 0LL;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  if ( *(_BYTE *)(v52 + 2) == 40 )
  {
    v60 = 0LL;
    v71 = 0;
    if ( *(_DWORD *)(v52 + 20) )
      goto LABEL_183;
    v61 = 0LL;
    v73 = 0;
    SystemArgument2a = *(_DWORD *)(v52 + 56);
    if ( !SystemArgument2a )
      goto LABEL_183;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v52 + 4 * v61 + 120);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v62 = *(unsigned int *)(v52 + 16);
        if ( (unsigned int)v22 < (unsigned int)v62 )
        {
          v63 = (unsigned int)v22;
          v64 = *(_DWORD *)(v22 + v52) - 64;
          if ( v64 )
          {
            v22 = (unsigned int)(v64 - 1);
            if ( (_DWORD)v22 )
            {
              if ( (_DWORD)v22 == 1 )
              {
                v22 = v63 + 40;
                if ( v63 + 40 <= v62 )
                {
                  if ( *(_DWORD *)(v63 + v52 + 12) )
                    v60 = (char *)(v63 + v52 + 32);
                  v54 = *(_BYTE **)(v63 + v52 + 24);
                  goto LABEL_153;
                }
              }
            }
            else
            {
              v22 = v63 + 56;
              if ( v63 + 56 <= v62 )
              {
                v71 = 1;
                if ( *(_BYTE *)(v63 + v52 + 10) )
                  v60 = (char *)(v63 + v52 + 24);
                v53 = *(_BYTE *)(v63 + v52 + 8);
                v54 = *(_BYTE **)(v63 + v52 + 16);
                v55 = *(_BYTE *)(v63 + v52 + 9);
              }
            }
          }
          else
          {
            v22 = v63 + 40;
            if ( v63 + 40 <= v62 )
            {
              if ( *(_BYTE *)(v63 + v52 + 10) )
                v60 = (char *)(v63 + v52 + 24);
              v54 = *(_BYTE **)(v63 + v52 + 16);
LABEL_153:
              v55 = *(_BYTE *)(v63 + v52 + 9);
              v53 = *(_BYTE *)(v63 + v52 + 8);
LABEL_154:
              if ( v60 )
              {
                v65 = *v60;
                v59 = 0;
                goto LABEL_157;
              }
              goto LABEL_183;
            }
          }
          if ( v71 )
            goto LABEL_154;
        }
      }
      v61 = (unsigned int)(v73 + 1);
      v73 = v61;
      if ( (unsigned int)v61 >= SystemArgument2a )
        goto LABEL_154;
    }
  }
  v65 = *(_BYTE *)(v52 + 72);
  v54 = *(_BYTE **)(v52 + 32);
  v55 = *(_BYTE *)(v52 + 11);
  v53 = *(_BYTE *)(v52 + 4);
  if ( *(_BYTE *)(v52 + 2) )
    goto LABEL_183;
LABEL_157:
  LOBYTE(v22) = v65 - 8;
  if ( (v22 & 0x5D) == 0 )
  {
    v66 = *(_BYTE *)(v52 + 3);
    if ( v66 == 1 || !v54 || !v55 )
    {
LABEL_176:
      if ( byte_140173441 < 0 )
      {
        if ( !v59 )
        {
          v58 = 0;
          v57 = 0;
          v56 = 0;
        }
        LODWORD(v70) = *v20;
        McTemplateK0pduuuuup_EtwWriteTransfer(v22, v52, &v76, v9, v70, v66, v53, v56, v57, v58, v9);
      }
      goto LABEL_183;
    }
    v67 = *v54 & 0x7F;
    if ( v67 == 114 || v67 == 115 )
    {
      v22 = (unsigned __int64)&v54[v55];
      LOBYTE(v52) = 0;
      if ( (unsigned __int64)(v54 + 8) > v22 )
        goto LABEL_174;
      v57 = v54[2];
      v56 = v54[1] & 0xF;
      v58 = v54[3];
    }
    else
    {
      v22 = (unsigned __int64)&v54[v55];
      LOBYTE(v52) = 0;
      if ( (unsigned __int64)(v54 + 8) > v22 )
        goto LABEL_174;
      v68 = v54 + 13;
      v56 = v54[2] & 0xF;
      v69 = v55;
      if ( (unsigned int)(unsigned __int8)v54[7] + 8 <= v55 )
        v69 = (unsigned __int8)v54[7] + 8;
      v22 = (unsigned __int64)&v54[v69];
      if ( (unsigned __int64)v68 <= v22 )
        v57 = v54[12];
      if ( (unsigned __int64)(v54 + 14) > v22 )
        v58 = 0;
      else
        v58 = *v68;
    }
    LOBYTE(v52) = 1;
LABEL_174:
    if ( (_BYTE)v52 )
      v59 = 1;
    goto LABEL_176;
  }
LABEL_183:
  IofCompleteRequest((PIRP)v9, 1);
}
