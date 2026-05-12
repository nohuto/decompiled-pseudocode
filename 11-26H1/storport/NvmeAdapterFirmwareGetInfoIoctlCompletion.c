/*
 * XREFs of NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D82B0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeFirmwareGranularity @ 0x1400D1AF8 (GetNvmeFirmwareGranularity.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeAdapterFirmwareGetInfoIoctlCompletion(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int16 v7; // ax
  __int64 v8; // rsi
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ebx
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  bool v36; // zf
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  bool v52; // zf
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  __int64 v64; // rax
  _DWORD *v65; // rbx
  unsigned __int64 v66; // rbp
  _BYTE *v67; // r12
  char v68; // dl
  char v69; // al
  unsigned int NvmeFirmwareGranularity; // eax
  unsigned int v71; // r9d
  int v72; // eax
  unsigned int i; // edx
  unsigned int v74; // ecx
  __int64 v75; // r9
  unsigned __int64 v76; // rcx
  __int64 v77; // rdx
  int *v78; // rax
  const EVENT_DESCRIPTOR *v79; // rdx
  __int64 v80; // rdx
  char v81; // r15
  _BYTE *v82; // r9
  unsigned __int8 v83; // bp
  char v84; // r10
  char v85; // bl
  char v86; // r11
  char v87; // r14
  char *v88; // r14
  unsigned int v89; // r13d
  unsigned __int64 v90; // r12
  __int64 v91; // r8
  int v92; // ecx
  char v93; // cl
  char v94; // al
  char v95; // r8
  char *v96; // r11
  unsigned int v97; // eax
  __int64 v98; // [rsp+20h] [rbp-D8h]
  __int64 v99; // [rsp+28h] [rbp-D0h]
  __int64 v100; // [rsp+30h] [rbp-C8h]
  __int64 v101; // [rsp+38h] [rbp-C0h]
  __int64 v102; // [rsp+40h] [rbp-B8h]
  __int64 v103; // [rsp+48h] [rbp-B0h]
  char v104; // [rsp+A0h] [rbp-58h]
  unsigned int v105; // [rsp+A4h] [rbp-54h]
  GUID v106; // [rsp+A8h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)a2;
  if ( a3 )
  {
    v7 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) &= 0xF1FFu;
    v5 = *(_QWORD *)a2;
    v7 = *(_WORD *)(*(_QWORD *)a2 + 4260LL) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v7;
  v8 = *(_QWORD *)a2;
  v9 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) == 2
        && (unsigned __int8)(v9 >> 1) != 128
        && (unsigned __int8)(v9 >> 1) != 129
        && (unsigned __int8)(v9 >> 1) != 130
        && (unsigned __int8)(v9 >> 1) != 131
        && (unsigned __int8)(v9 >> 1) != 132 )
      {
        v10 = (unsigned __int8)(v9 >> 1) - 133;
        if ( (unsigned __int8)(v9 >> 1) != 133 )
        {
LABEL_88:
          if ( v10 == 1 )
            goto LABEL_89;
        }
      }
LABEL_97:
      v20 = -1073741435;
      goto LABEL_29;
    }
    v11 = v9 >> 1;
    v12 = (unsigned __int8)(v9 >> 1);
    if ( v12 > 0x80 )
    {
      v41 = v12 - 129;
      if ( !v41 )
        goto LABEL_28;
      v19 = v41 - 1;
      if ( v19 )
        goto LABEL_77;
    }
    else
    {
      if ( (unsigned __int8)v11 == 128 )
        goto LABEL_28;
      if ( v12 <= 0x11 )
      {
        if ( v12 != 17 )
        {
          if ( v12 <= 9 )
          {
            if ( v12 == 9 )
              goto LABEL_28;
            if ( !(_BYTE)v11 )
              goto LABEL_28;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_28;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_28;
            v15 = v14 - 1;
            if ( !v15 )
              goto LABEL_28;
            v17 = v15 - 2;
            v16 = v17 == 0;
LABEL_25:
            if ( v16 )
              goto LABEL_28;
            v18 = v17 - 1;
            if ( !v18 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
LABEL_77:
            v52 = v19 == 1;
LABEL_96:
            if ( !v52 )
              goto LABEL_97;
LABEL_28:
            v20 = -1073741808;
            goto LABEL_29;
          }
          v25 = v12 - 10;
          if ( !v25 )
            goto LABEL_28;
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( !v27 )
              goto LABEL_28;
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_28;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_28;
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_28;
            if ( v30 != 1 )
              goto LABEL_97;
          }
        }
        v20 = -2147483210;
        goto LABEL_29;
      }
      if ( v12 <= 0x1A )
      {
        if ( v12 == 26 )
          goto LABEL_49;
        v31 = v12 - 18;
        if ( !v31 )
          goto LABEL_49;
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_49;
        v33 = v32 - 1;
        if ( !v33 )
        {
          v20 = -1073741800;
          goto LABEL_29;
        }
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_97;
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_49;
        v37 = v35 - 2;
        v36 = v37 == 0;
        goto LABEL_47;
      }
      v38 = v12 - 27;
      if ( !v38 )
      {
        v20 = -1073741637;
        goto LABEL_29;
      }
      v39 = v38 - 1;
      if ( !v39 )
        goto LABEL_28;
      v40 = v39 - 2;
      if ( v40 )
      {
        v17 = v40 - 1;
        v16 = v17 == 0;
        goto LABEL_25;
      }
    }
LABEL_89:
    v20 = -1073741790;
    goto LABEL_29;
  }
  v42 = v9 >> 1;
  v43 = (unsigned __int8)(v9 >> 1);
  if ( v43 > 0x80 )
  {
    v63 = v43 - 129;
    if ( !v63 )
      goto LABEL_28;
    v19 = v63 - 1;
    if ( v19 )
      goto LABEL_77;
    v20 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v42 == 128 )
      goto LABEL_28;
    if ( v43 <= 0xE )
    {
      if ( v43 == 14 )
        goto LABEL_28;
      if ( v43 > 7 )
      {
        v48 = v43 - 8;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( !v51 )
                goto LABEL_28;
              v19 = v51 - 1;
              if ( !v19 )
              {
                v20 = -1073740758;
                goto LABEL_29;
              }
              goto LABEL_77;
            }
          }
        }
      }
      else if ( v43 != 7 )
      {
        if ( !(_BYTE)v42 )
        {
          v20 = 0;
          goto LABEL_29;
        }
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_28;
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_28;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_97;
        v47 = v46 - 1;
        if ( !v47 )
          goto LABEL_97;
        v37 = v47 - 1;
        v36 = v37 == 0;
LABEL_47:
        if ( !v36 && v37 != 1 )
          goto LABEL_97;
        goto LABEL_49;
      }
LABEL_79:
      v20 = -1073741248;
      goto LABEL_29;
    }
    if ( v43 <= 0x16 )
    {
      if ( v43 == 22 )
        goto LABEL_28;
      v53 = v43 - 15;
      if ( !v53 )
        goto LABEL_28;
      v54 = v53 - 1;
      if ( !v54 )
        goto LABEL_28;
      v55 = v54 - 1;
      if ( !v55 )
        goto LABEL_28;
      v56 = v55 - 1;
      if ( !v56 )
        goto LABEL_28;
      v57 = v56 - 1;
      if ( !v57 )
        goto LABEL_28;
      v10 = v57 - 1;
      if ( v10 )
        goto LABEL_88;
LABEL_49:
      v20 = -1073741436;
      goto LABEL_29;
    }
    v58 = v43 - 24;
    if ( !v58 )
      goto LABEL_28;
    v59 = v58 - 1;
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( v61 )
        {
          v62 = v61 - 1;
          if ( !v62 )
            goto LABEL_97;
          v52 = v62 == 2;
          goto LABEL_96;
        }
        goto LABEL_79;
      }
    }
    v20 = -1073741643;
  }
LABEL_29:
  v21 = *(_QWORD *)(v8 + 4224);
  v22 = *(_QWORD *)(v8 + 4184);
  if ( v20 >= 0 )
  {
    v64 = *(_QWORD *)(v22 + 184);
    v65 = *(_DWORD **)(v22 + 24);
    *(_DWORD *)(v22 + 48) = 0;
    v66 = *(unsigned int *)(v64 + 8);
    v67 = *(_BYTE **)(*(_QWORD *)a2 + 4160LL);
    memset_0(v65, 0, (unsigned int)v66);
    v68 = *((_BYTE *)v65 + 8);
    *v65 = 56;
    v65[1] = 56;
    *((_BYTE *)v65 + 8) = v68 ^ (v68 ^ (*(_BYTE *)(a1[37].Alignment + 256) >> 2)) & 1;
    *((_BYTE *)v65 + 9) = (*(_BYTE *)(a1[37].Alignment + 260) >> 1) & 7;
    *((_BYTE *)v65 + 10) = *v67 & 7;
    v69 = -1;
    if ( ((*v67 >> 4) & 7) != 0 )
      v69 = (*v67 >> 4) & 7;
    *((_BYTE *)v65 + 11) = v69;
    *((_BYTE *)v65 + 12) = 1;
    NvmeFirmwareGranularity = GetNvmeFirmwareGranularity((__int64)a1);
    v71 = NvmeFirmwareGranularity;
    if ( NvmeFirmwareGranularity )
    {
      v65[4] = NvmeFirmwareGranularity;
      LODWORD(v23) = *(_DWORD *)(a1[8].Alignment + 200);
      v72 = v23 - (unsigned int)v23 % NvmeFirmwareGranularity;
      if ( !((unsigned int)v23 % v71) )
        v72 = *(_DWORD *)(a1[8].Alignment + 200);
    }
    else
    {
      v65[4] = 4;
      v72 = *(_DWORD *)(a1[8].Alignment + 200);
    }
    v65[5] = v72;
    for ( i = 0; ; ++i )
    {
      v74 = (*(unsigned __int8 *)(a1[37].Alignment + 260) >> 1) & 7;
      if ( i >= v74 )
        break;
      if ( v66 < 32 * (unsigned __int64)(i + 1) + 24 )
      {
        v65[1] = 32 * v74 + 24;
        *(_DWORD *)(v22 + 48) = -2147483643;
        break;
      }
      if ( i )
        v65[1] += 32;
      v23 = 32LL * i;
      v75 = i;
      v65[(unsigned __int64)v23 / 4 + 6] = 32;
      v65[(unsigned __int64)v23 / 4 + 7] = 32;
      LOBYTE(v65[(unsigned __int64)v23 / 4 + 8]) = i + 1;
      if ( i )
        BYTE1(v65[(unsigned __int64)v23 / 4 + 8]) &= ~1u;
      else
        BYTE1(v65[(unsigned __int64)v23 / 4 + 8]) ^= (*(_BYTE *)(a1[37].Alignment + 260) ^ BYTE1(v65[(unsigned __int64)v23 / 4 + 8])) & 1;
      *(_QWORD *)&v65[(unsigned __int64)v23 / 4 + 10] = *(_QWORD *)&v67[8 * v75 + 8];
    }
    v24 = (unsigned int)v65[1];
    if ( (unsigned int)v66 < (unsigned int)v24 )
      v24 = (unsigned int)v66;
  }
  else
  {
    StorEtwNvmeControllerEvent(
      (__int64)a1,
      1,
      2LL,
      (__int64)L"Failed to retrieve firmware slot information log from controller.",
      L"NVMeStatus",
      v9,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    v24 = 0LL;
    *(_DWORD *)(v22 + 48) = v20;
  }
  *(_QWORD *)(v22 + 56) = v24;
  NvmeFreeDmaBuffer(
    (_DWORD)a1,
    *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
    v23,
    *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
    *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v21 + 152));
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v22 + 141) = -84;
  if ( v16 )
    goto LABEL_187;
  v106 = 0LL;
  IoGetActivityIdIrp(v22, &v106);
  v77 = *(_QWORD *)(v22 + 184);
  if ( *(_BYTE *)v77 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_187;
    v79 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_186;
  }
  if ( *(_BYTE *)v77 != 15 )
  {
    if ( *(_BYTE *)v77 != 27 )
      goto LABEL_187;
    if ( *(_BYTE *)(v77 + 1) == 7 && !*(_DWORD *)(v77 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v78 = *(int **)(v22 + 56);
        if ( v78 )
          v3 = *v78;
        LODWORD(v99) = *(_DWORD *)(v22 + 48);
        LODWORD(v98) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v76, v77, &v106, v22, v98, v99);
      }
      goto LABEL_187;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_187;
    v79 = &EventPnpRequestComplete;
LABEL_186:
    LODWORD(v98) = *(_DWORD *)(v22 + 48);
    McTemplateK0pd_EtwWriteTransfer(v76, v79, &v106, v22, v98);
    goto LABEL_187;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_187;
  v80 = *(_QWORD *)(v77 + 8);
  v81 = 0;
  v82 = 0LL;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  if ( *(_BYTE *)(v80 + 2) != 40 )
  {
    v93 = *(_BYTE *)(v80 + 72);
    v82 = *(_BYTE **)(v80 + 32);
    v83 = *(_BYTE *)(v80 + 11);
    v81 = *(_BYTE *)(v80 + 4);
    if ( *(_BYTE *)(v80 + 2) )
      goto LABEL_187;
LABEL_161:
    LOBYTE(v76) = v93 - 8;
    if ( (v76 & 0x5D) != 0 )
      goto LABEL_187;
    if ( *(_BYTE *)(v80 + 3) == 1 || !v82 || !v83 )
      goto LABEL_180;
    v94 = *v82 & 0x7F;
    if ( v94 == 114 || v94 == 115 )
    {
      v76 = (unsigned __int64)&v82[v83];
      v95 = 0;
      if ( (unsigned __int64)(v82 + 8) > v76 )
        goto LABEL_178;
      v85 = v82[2];
      v84 = v82[1] & 0xF;
      v86 = v82[3];
    }
    else
    {
      v76 = (unsigned __int64)&v82[v83];
      v95 = 0;
      if ( (unsigned __int64)(v82 + 8) > v76 )
        goto LABEL_178;
      v96 = v82 + 13;
      v84 = v82[2] & 0xF;
      v97 = v83;
      if ( (unsigned int)(unsigned __int8)v82[7] + 8 <= v83 )
        v97 = (unsigned __int8)v82[7] + 8;
      v76 = (unsigned __int64)&v82[v97];
      if ( (unsigned __int64)v96 <= v76 )
        v85 = v82[12];
      if ( (unsigned __int64)(v82 + 14) > v76 )
        v86 = 0;
      else
        v86 = *v96;
    }
    v95 = 1;
LABEL_178:
    if ( v95 )
      v87 = 1;
LABEL_180:
    if ( byte_140173441 < 0 )
    {
      if ( !v87 )
      {
        v86 = 0;
        v85 = 0;
        v84 = 0;
      }
      LOBYTE(v103) = v86;
      LOBYTE(v102) = v85;
      LOBYTE(v101) = v84;
      LOBYTE(v100) = v81;
      LOBYTE(v99) = *(_BYTE *)(v80 + 3);
      LODWORD(v98) = *(_DWORD *)(v22 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v76, v80, &v106, v22, v98, v99, v100, v101, v102, v103, v22);
    }
    goto LABEL_187;
  }
  v88 = 0LL;
  v104 = 0;
  if ( *(_DWORD *)(v80 + 20) )
    goto LABEL_187;
  v89 = 0;
  v105 = *(_DWORD *)(v80 + 56);
  if ( !v105 )
    goto LABEL_187;
  while ( 1 )
  {
    v76 = *(unsigned int *)(v80 + 4LL * v89 + 120);
    if ( (unsigned int)v76 >= 0x80 )
    {
      v90 = *(unsigned int *)(v80 + 16);
      if ( (unsigned int)v76 < (unsigned int)v90 )
        break;
    }
LABEL_152:
    if ( ++v89 >= v105 )
      goto LABEL_158;
  }
  v91 = (unsigned int)v76;
  v92 = *(_DWORD *)(v76 + v80) - 64;
  if ( v92 )
  {
    v76 = (unsigned int)(v92 - 1);
    if ( (_DWORD)v76 )
    {
      if ( (_DWORD)v76 == 1 )
      {
        v76 = v91 + 40;
        if ( v91 + 40 <= v90 )
        {
          if ( *(_DWORD *)(v91 + v80 + 12) )
            v88 = (char *)(v91 + v80 + 32);
          v82 = *(_BYTE **)(v91 + v80 + 24);
          goto LABEL_157;
        }
      }
    }
    else
    {
      v76 = v91 + 56;
      if ( v91 + 56 <= v90 )
      {
        v104 = 1;
        if ( *(_BYTE *)(v91 + v80 + 10) )
          v88 = (char *)(v91 + v80 + 24);
        v81 = *(_BYTE *)(v91 + v80 + 8);
        v82 = *(_BYTE **)(v91 + v80 + 16);
        v83 = *(_BYTE *)(v91 + v80 + 9);
      }
    }
    goto LABEL_151;
  }
  v76 = v91 + 40;
  if ( v91 + 40 > v90 )
  {
LABEL_151:
    if ( v104 )
      goto LABEL_158;
    goto LABEL_152;
  }
  if ( *(_BYTE *)(v91 + v80 + 10) )
    v88 = (char *)(v91 + v80 + 24);
  v82 = *(_BYTE **)(v91 + v80 + 16);
LABEL_157:
  v83 = *(_BYTE *)(v91 + v80 + 9);
  v81 = *(_BYTE *)(v91 + v80 + 8);
LABEL_158:
  if ( v88 )
  {
    v93 = *v88;
    v87 = 0;
    goto LABEL_161;
  }
LABEL_187:
  IofCompleteRequest((PIRP)v22, 1);
}
