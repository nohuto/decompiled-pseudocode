/*
 * XREFs of NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion @ 0x140114060
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

void __fastcall NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  bool v20; // zf
  int v21; // ecx
  unsigned int v22; // edx
  bool v23; // zf
  __int64 v24; // rax
  _DWORD *v25; // rbx
  unsigned __int64 v26; // rbp
  _BYTE *v27; // r15
  char v28; // al
  unsigned int NvmeFirmwareGranularity; // eax
  unsigned int v30; // r9d
  unsigned __int64 Alignment; // rcx
  unsigned int v32; // eax
  unsigned int i; // edx
  unsigned int v34; // ecx
  __int64 v35; // r9
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  int *v38; // rax
  const EVENT_DESCRIPTOR *v39; // rdx
  __int64 v40; // rdx
  char v41; // r15
  _BYTE *v42; // r9
  unsigned __int8 v43; // bp
  char v44; // r10
  char v45; // bl
  char v46; // r11
  char v47; // r14
  char *v48; // r14
  unsigned int v49; // r13d
  unsigned __int64 v50; // r12
  __int64 v51; // r8
  int v52; // ecx
  char v53; // cl
  char v54; // al
  char v55; // r8
  char *v56; // r11
  unsigned int v57; // eax
  __int64 v58; // [rsp+20h] [rbp-D8h]
  __int64 v59; // [rsp+28h] [rbp-D0h]
  __int64 v60; // [rsp+30h] [rbp-C8h]
  __int64 v61; // [rsp+38h] [rbp-C0h]
  __int64 v62; // [rsp+40h] [rbp-B8h]
  __int64 v63; // [rsp+48h] [rbp-B0h]
  char v64; // [rsp+A0h] [rbp-58h]
  unsigned int v65; // [rsp+A4h] [rbp-54h]
  GUID v66; // [rsp+A8h] [rbp-50h] BYREF

  v4 = 0;
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v6 = *(_QWORD *)a2;
  v7 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v7 >> 9) & 7) != 0 )
  {
    if ( ((v7 >> 9) & 7) != 1 )
    {
      if ( ((v7 >> 9) & 7) == 2 )
      {
        v8 = v7 >> 1;
        if ( (unsigned __int8)v8 != 128
          && (unsigned __int8)v8 != 129
          && (unsigned __int8)v8 != 130
          && (unsigned __int8)v8 != 131
          && (unsigned __int8)v8 != 132 )
        {
          v9 = (unsigned __int8)v8 - 133;
          if ( (unsigned __int8)v8 != 133 )
          {
LABEL_85:
            if ( v9 == 1 )
              goto LABEL_86;
          }
        }
      }
LABEL_94:
      v15 = -1073741435;
      goto LABEL_26;
    }
    v10 = v7 >> 1;
    if ( (unsigned __int8)v10 > 0x80u )
    {
      if ( (unsigned __int8)v10 == 129 )
        goto LABEL_25;
      v14 = (unsigned __int8)v10 - 130;
      if ( (unsigned __int8)v10 != 130 )
        goto LABEL_74;
    }
    else
    {
      if ( (unsigned __int8)v10 == 128 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 <= 0x11u )
      {
        if ( (unsigned __int8)v10 != 17 )
        {
          if ( (unsigned __int8)v10 <= 9u )
          {
            if ( (unsigned __int8)v10 == 9
              || !(_BYTE)v10
              || (unsigned __int8)v10 == 1
              || (unsigned __int8)v10 == 2
              || (unsigned __int8)v10 == 3 )
            {
              goto LABEL_25;
            }
            v12 = (unsigned __int8)v10 - 5;
            v11 = (unsigned __int8)v10 == 5;
LABEL_22:
            if ( v11 )
              goto LABEL_25;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_25;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_25;
LABEL_74:
            v23 = v14 == 1;
LABEL_93:
            if ( !v23 )
              goto LABEL_94;
LABEL_25:
            v15 = -1073741808;
            goto LABEL_26;
          }
          if ( (unsigned __int8)v10 == 10 )
            goto LABEL_25;
          if ( (unsigned __int8)v10 != 11 )
          {
            if ( (unsigned __int8)v10 == 12
              || (unsigned __int8)v10 == 13
              || (unsigned __int8)v10 == 14
              || (unsigned __int8)v10 == 15 )
            {
              goto LABEL_25;
            }
            if ( (unsigned __int8)v10 != 16 )
              goto LABEL_94;
          }
        }
        v15 = -2147483210;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 <= 0x1Au )
      {
        switch ( (unsigned __int8)v10 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_46;
          case 0x14u:
            v15 = -1073741800;
            goto LABEL_26;
          case 0x15u:
            goto LABEL_94;
          case 0x16u:
            goto LABEL_46;
        }
        v21 = (unsigned __int8)v10 - 24;
        v20 = (unsigned __int8)v10 == 24;
        goto LABEL_44;
      }
      if ( (unsigned __int8)v10 == 27 )
      {
        v15 = -1073741637;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 == 28 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 != 30 )
      {
        v12 = (unsigned __int8)v10 - 31;
        v11 = (unsigned __int8)v10 == 31;
        goto LABEL_22;
      }
    }
LABEL_86:
    v15 = -1073741790;
    goto LABEL_26;
  }
  v22 = v7 >> 1;
  if ( (unsigned __int8)v22 > 0x80u )
  {
    if ( (unsigned __int8)v22 == 129 )
      goto LABEL_25;
    v14 = (unsigned __int8)v22 - 130;
    if ( (unsigned __int8)v22 != 130 )
      goto LABEL_74;
    v15 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v22 == 128 )
      goto LABEL_25;
    if ( (unsigned __int8)v22 <= 0xEu )
    {
      if ( (unsigned __int8)v22 == 14 )
        goto LABEL_25;
      if ( (unsigned __int8)v22 > 7u )
      {
        if ( (unsigned __int8)v22 != 8 && (unsigned __int8)v22 != 9 && (unsigned __int8)v22 != 10 )
        {
          if ( (unsigned __int8)v22 == 11 )
            goto LABEL_25;
          v14 = (unsigned __int8)v22 - 12;
          if ( (unsigned __int8)v22 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)v22 != 7 )
      {
        if ( !(_BYTE)v22 )
        {
          v15 = 0;
          goto LABEL_26;
        }
        if ( (unsigned __int8)v22 == 1 || (unsigned __int8)v22 == 2 )
          goto LABEL_25;
        if ( (unsigned __int8)v22 == 3 || (unsigned __int8)v22 == 4 )
          goto LABEL_94;
        v21 = (unsigned __int8)v22 - 5;
        v20 = (unsigned __int8)v22 == 5;
LABEL_44:
        if ( !v20 && v21 != 1 )
          goto LABEL_94;
        goto LABEL_46;
      }
LABEL_76:
      v15 = -1073741248;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v22 <= 0x16u )
    {
      if ( (unsigned __int8)v22 == 22
        || (unsigned __int8)v22 == 15
        || (unsigned __int8)v22 == 16
        || (unsigned __int8)v22 == 17
        || (unsigned __int8)v22 == 18
        || (unsigned __int8)v22 == 19 )
      {
        goto LABEL_25;
      }
      v9 = (unsigned __int8)v22 - 20;
      if ( (unsigned __int8)v22 != 20 )
        goto LABEL_85;
LABEL_46:
      v15 = -1073741436;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v22 == 24 )
      goto LABEL_25;
    if ( (unsigned __int8)v22 != 25 && (unsigned __int8)v22 != 26 )
    {
      if ( (unsigned __int8)v22 != 27 )
      {
        if ( (unsigned __int8)v22 == 28 )
          goto LABEL_94;
        v23 = (unsigned __int8)v22 == 30;
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v15 = -1073741643;
  }
LABEL_26:
  v16 = *(_QWORD *)(v6 + 4216);
  v17 = *(_QWORD *)(v6 + 4184);
  if ( v15 >= 0 )
  {
    v24 = *(_QWORD *)(v17 + 184);
    v25 = *(_DWORD **)(v17 + 24);
    *(_DWORD *)(v17 + 48) = 0;
    v26 = *(unsigned int *)(v24 + 8);
    v27 = *(_BYTE **)(*(_QWORD *)a2 + 4160LL);
    memset_0(v25, 0, (unsigned int)v26);
    *((_BYTE *)v25 + 8) &= ~1u;
    *v25 = 56;
    v25[1] = 56;
    *((_BYTE *)v25 + 9) = (*(_BYTE *)(a1[37].Alignment + 260) >> 1) & 7;
    *((_BYTE *)v25 + 10) = *v27 & 7;
    v28 = -1;
    if ( ((*v27 >> 4) & 7) != 0 )
      v28 = (*v27 >> 4) & 7;
    *((_BYTE *)v25 + 11) = v28;
    *((_BYTE *)v25 + 12) = 1;
    NvmeFirmwareGranularity = GetNvmeFirmwareGranularity((__int64)a1);
    v30 = NvmeFirmwareGranularity;
    if ( NvmeFirmwareGranularity )
    {
      v25[4] = NvmeFirmwareGranularity;
      Alignment = a1[8].Alignment;
      v18 = *(unsigned int *)(Alignment + 200);
      v32 = *(_DWORD *)(Alignment + 200) - (unsigned int)v18 % NvmeFirmwareGranularity;
      if ( !((unsigned int)v18 % v30) )
        v32 = *(_DWORD *)(Alignment + 200);
    }
    else
    {
      v25[4] = 4;
      v32 = *(_DWORD *)(a1[8].Alignment + 200);
    }
    v25[5] = v32;
    for ( i = 0; ; ++i )
    {
      v34 = (*(unsigned __int8 *)(a1[37].Alignment + 260) >> 1) & 7;
      if ( i >= v34 )
        break;
      if ( v26 < 32 * (unsigned __int64)(i + 1) + 24 )
      {
        v25[1] = 32 * v34 + 24;
        *(_DWORD *)(v17 + 48) = -2147483643;
        break;
      }
      if ( i )
        v25[1] += 32;
      v18 = 32LL * i;
      v35 = i;
      *(_DWORD *)((char *)v25 + v18 + 24) = 32;
      *(_DWORD *)((char *)v25 + v18 + 28) = 32;
      *((_BYTE *)v25 + v18 + 32) = i + 1;
      if ( i )
        *((_BYTE *)v25 + v18 + 33) &= ~1u;
      else
        *((_BYTE *)v25 + v18 + 33) ^= (*(_BYTE *)(a1[37].Alignment + 260) ^ *((_BYTE *)v25 + v18 + 33)) & 1;
      *(_QWORD *)((char *)v25 + v18 + 40) = *(_QWORD *)&v27[8 * v35 + 8];
    }
    v19 = (unsigned int)v25[1];
    if ( (unsigned int)v26 < (unsigned int)v19 )
      v19 = (unsigned int)v26;
  }
  else
  {
    StorEtwNvmeControllerEvent(
      (__int64)a1,
      1,
      2LL,
      (__int64)L"Failed to retrieve firmware slot information log from controller.",
      L"NVMeStatus",
      *(_WORD *)(a3 + 14),
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
    v19 = 0LL;
    *(_DWORD *)(v17 + 48) = v15;
  }
  *(_QWORD *)(v17 + 56) = v19;
  NvmeFreeDmaBuffer(
    (__int64)a1,
    *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
    v18,
    *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
    *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v16 + 120));
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v17 + 141) = -84;
  if ( v11 )
    goto LABEL_184;
  v66 = 0LL;
  IoGetActivityIdIrp(v17, &v66);
  v37 = *(_QWORD *)(v17 + 184);
  if ( *(_BYTE *)v37 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_184;
    v39 = &EventNonReadWriteRequestComplete;
    goto LABEL_183;
  }
  if ( *(_BYTE *)v37 != 15 )
  {
    if ( *(_BYTE *)v37 != 27 )
      goto LABEL_184;
    if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v38 = *(int **)(v17 + 56);
        if ( v38 )
          v4 = *v38;
        LODWORD(v59) = *(_DWORD *)(v17 + 48);
        LODWORD(v58) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v36, v37, &v66, v17, v58, v59);
      }
      goto LABEL_184;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_184;
    v39 = &EventPnpRequestComplete;
LABEL_183:
    LODWORD(v58) = *(_DWORD *)(v17 + 48);
    McTemplateK0pd_EtwWriteTransfer(v36, v39, &v66, v17, v58);
    goto LABEL_184;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_184;
  v40 = *(_QWORD *)(v37 + 8);
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( *(_BYTE *)(v40 + 2) != 40 )
  {
    v53 = *(_BYTE *)(v40 + 72);
    v42 = *(_BYTE **)(v40 + 32);
    v43 = *(_BYTE *)(v40 + 11);
    v41 = *(_BYTE *)(v40 + 4);
    if ( *(_BYTE *)(v40 + 2) )
      goto LABEL_184;
LABEL_158:
    LOBYTE(v36) = v53 - 8;
    if ( (v36 & 0x5D) != 0 )
      goto LABEL_184;
    if ( *(_BYTE *)(v40 + 3) == 1 || !v42 || !v43 )
      goto LABEL_177;
    v54 = *v42 & 0x7F;
    if ( v54 == 114 || v54 == 115 )
    {
      v36 = (unsigned __int64)&v42[v43];
      v55 = 0;
      if ( (unsigned __int64)(v42 + 8) > v36 )
        goto LABEL_175;
      v45 = v42[2];
      v44 = v42[1] & 0xF;
      v46 = v42[3];
    }
    else
    {
      v36 = (unsigned __int64)&v42[v43];
      v55 = 0;
      if ( (unsigned __int64)(v42 + 8) > v36 )
        goto LABEL_175;
      v56 = v42 + 13;
      v44 = v42[2] & 0xF;
      v57 = v43;
      if ( (unsigned int)(unsigned __int8)v42[7] + 8 <= v43 )
        v57 = (unsigned __int8)v42[7] + 8;
      v36 = (unsigned __int64)&v42[v57];
      if ( (unsigned __int64)v56 <= v36 )
        v45 = v42[12];
      if ( (unsigned __int64)(v42 + 14) > v36 )
        v46 = 0;
      else
        v46 = *v56;
    }
    v55 = 1;
LABEL_175:
    if ( v55 )
      v47 = 1;
LABEL_177:
    if ( byte_140173441 < 0 )
    {
      if ( !v47 )
      {
        v46 = 0;
        v45 = 0;
        v44 = 0;
      }
      LOBYTE(v63) = v46;
      LOBYTE(v62) = v45;
      LOBYTE(v61) = v44;
      LOBYTE(v60) = v41;
      LOBYTE(v59) = *(_BYTE *)(v40 + 3);
      LODWORD(v58) = *(_DWORD *)(v17 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v36, v40, &v66, v17, v58, v59, v60, v61, v62, v63, v17);
    }
    goto LABEL_184;
  }
  v48 = 0LL;
  v64 = 0;
  if ( *(_DWORD *)(v40 + 20) )
    goto LABEL_184;
  v49 = 0;
  v65 = *(_DWORD *)(v40 + 56);
  if ( !v65 )
    goto LABEL_184;
  while ( 1 )
  {
    v36 = *(unsigned int *)(v40 + 4LL * v49 + 120);
    if ( (unsigned int)v36 >= 0x80 )
    {
      v50 = *(unsigned int *)(v40 + 16);
      if ( (unsigned int)v36 < (unsigned int)v50 )
        break;
    }
LABEL_149:
    if ( ++v49 >= v65 )
      goto LABEL_155;
  }
  v51 = (unsigned int)v36;
  v52 = *(_DWORD *)(v36 + v40) - 64;
  if ( v52 )
  {
    v36 = (unsigned int)(v52 - 1);
    if ( (_DWORD)v36 )
    {
      if ( (_DWORD)v36 == 1 )
      {
        v36 = v51 + 40;
        if ( v51 + 40 <= v50 )
        {
          if ( *(_DWORD *)(v51 + v40 + 12) )
            v48 = (char *)(v51 + v40 + 32);
          v42 = *(_BYTE **)(v51 + v40 + 24);
          goto LABEL_154;
        }
      }
    }
    else
    {
      v36 = v51 + 56;
      if ( v51 + 56 <= v50 )
      {
        v64 = 1;
        if ( *(_BYTE *)(v51 + v40 + 10) )
          v48 = (char *)(v51 + v40 + 24);
        v41 = *(_BYTE *)(v51 + v40 + 8);
        v42 = *(_BYTE **)(v51 + v40 + 16);
        v43 = *(_BYTE *)(v51 + v40 + 9);
      }
    }
    goto LABEL_148;
  }
  v36 = v51 + 40;
  if ( v51 + 40 > v50 )
  {
LABEL_148:
    if ( v64 )
      goto LABEL_155;
    goto LABEL_149;
  }
  if ( *(_BYTE *)(v51 + v40 + 10) )
    v48 = (char *)(v51 + v40 + 24);
  v42 = *(_BYTE **)(v51 + v40 + 16);
LABEL_154:
  v43 = *(_BYTE *)(v51 + v40 + 9);
  v41 = *(_BYTE *)(v51 + v40 + 8);
LABEL_155:
  if ( v48 )
  {
    v53 = *v48;
    v47 = 0;
    goto LABEL_158;
  }
LABEL_184:
  IofCompleteRequest((PIRP)v17, 1);
}
