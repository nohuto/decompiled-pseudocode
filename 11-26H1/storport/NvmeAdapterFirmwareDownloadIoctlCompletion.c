/*
 * XREFs of NvmeAdapterFirmwareDownloadIoctlCompletion @ 0x1400D75B0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterFirmwareDownloadIoctlCompletion(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int16 v7; // ax
  int v8; // r8d
  __int64 v9; // rsi
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // ebx
  __int64 v22; // rbp
  __int64 v23; // rsi
  unsigned int v24; // ecx
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
  bool v35; // zf
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  bool v51; // zf
  unsigned int v52; // ecx
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
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  int *v65; // rax
  const EVENT_DESCRIPTOR *v66; // rdx
  __int64 v67; // rdx
  char v68; // r13
  _BYTE *v69; // r9
  unsigned __int8 v70; // bp
  char v71; // r10
  char v72; // bl
  char v73; // r11
  char v74; // r14
  char *v75; // r14
  unsigned int v76; // r12d
  unsigned __int64 v77; // r15
  __int64 v78; // r8
  int v79; // ecx
  char v80; // cl
  char v81; // r8
  char v82; // al
  char *v83; // r11
  unsigned int v84; // eax
  __int64 v85; // [rsp+20h] [rbp-D8h]
  __int64 v86; // [rsp+28h] [rbp-D0h]
  __int64 v87; // [rsp+30h] [rbp-C8h]
  __int64 v88; // [rsp+38h] [rbp-C0h]
  __int64 v89; // [rsp+40h] [rbp-B8h]
  __int64 v90; // [rsp+48h] [rbp-B0h]
  char v91; // [rsp+A0h] [rbp-58h]
  unsigned int v92; // [rsp+A4h] [rbp-54h]
  GUID v93; // [rsp+A8h] [rbp-50h] BYREF

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
  v8 = 2;
  v9 = *(_QWORD *)a2;
  v10 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) == 2
        && (unsigned __int8)(v10 >> 1) != 128
        && (unsigned __int8)(v10 >> 1) != 129
        && (unsigned __int8)(v10 >> 1) != 130
        && (unsigned __int8)(v10 >> 1) != 131
        && (unsigned __int8)(v10 >> 1) != 132 )
      {
        v11 = (unsigned __int8)(v10 >> 1) - 133;
        if ( (unsigned __int8)(v10 >> 1) != 133 )
        {
LABEL_88:
          if ( v11 == 1 )
            goto LABEL_89;
        }
      }
LABEL_97:
      v21 = -1073741435;
      goto LABEL_29;
    }
    v12 = v10 >> 1;
    v13 = (unsigned __int8)(v10 >> 1);
    if ( v13 > 0x80 )
    {
      v40 = v13 - 129;
      if ( !v40 )
        goto LABEL_28;
      v20 = v40 - 1;
      if ( v20 )
        goto LABEL_77;
    }
    else
    {
      if ( (unsigned __int8)v12 == 128 )
        goto LABEL_28;
      if ( v13 <= 0x11 )
      {
        if ( v13 != 17 )
        {
          if ( v13 <= 9 )
          {
            if ( v13 == 9 )
              goto LABEL_28;
            if ( !(_BYTE)v12 )
              goto LABEL_28;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_28;
            v15 = v14 - 1;
            if ( !v15 )
              goto LABEL_28;
            v16 = v15 - 1;
            if ( !v16 )
              goto LABEL_28;
            v18 = v16 - 2;
            v17 = v18 == 0;
LABEL_25:
            if ( v17 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
            v20 = v19 - 1;
            if ( !v20 )
              goto LABEL_28;
LABEL_77:
            v51 = v20 == 1;
LABEL_96:
            if ( !v51 )
              goto LABEL_97;
LABEL_28:
            v21 = -1073741808;
            goto LABEL_29;
          }
          v24 = v13 - 10;
          if ( !v24 )
            goto LABEL_28;
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
              goto LABEL_28;
            v27 = v26 - 1;
            if ( !v27 )
              goto LABEL_28;
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_28;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_28;
            if ( v29 != 1 )
              goto LABEL_97;
          }
        }
        v21 = -2147483210;
        goto LABEL_29;
      }
      if ( v13 <= 0x1A )
      {
        if ( v13 == 26 )
          goto LABEL_49;
        v30 = v13 - 18;
        if ( !v30 )
          goto LABEL_49;
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_49;
        v32 = v31 - 1;
        if ( !v32 )
        {
          v21 = -1073741800;
          goto LABEL_29;
        }
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_97;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_49;
        v36 = v34 - 2;
        v35 = v36 == 0;
        goto LABEL_47;
      }
      v37 = v13 - 27;
      if ( !v37 )
      {
        v21 = -1073741637;
        goto LABEL_29;
      }
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_28;
      v39 = v38 - 2;
      if ( v39 )
      {
        v18 = v39 - 1;
        v17 = v18 == 0;
        goto LABEL_25;
      }
    }
LABEL_89:
    v21 = -1073741790;
    goto LABEL_29;
  }
  v41 = v10 >> 1;
  v42 = (unsigned __int8)(v10 >> 1);
  if ( v42 > 0x80 )
  {
    v62 = v42 - 129;
    if ( !v62 )
      goto LABEL_28;
    v20 = v62 - 1;
    if ( v20 )
      goto LABEL_77;
    v21 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v41 == 128 )
      goto LABEL_28;
    if ( v42 <= 0xE )
    {
      if ( v42 == 14 )
        goto LABEL_28;
      if ( v42 > 7 )
      {
        v47 = v42 - 8;
        if ( v47 )
        {
          v48 = v47 - 1;
          if ( v48 )
          {
            v49 = v48 - 1;
            if ( v49 )
            {
              v50 = v49 - 1;
              if ( !v50 )
                goto LABEL_28;
              v20 = v50 - 1;
              if ( !v20 )
              {
                v21 = -1073740758;
                goto LABEL_29;
              }
              goto LABEL_77;
            }
          }
        }
      }
      else if ( v42 != 7 )
      {
        if ( !(_BYTE)v41 )
        {
          v21 = 0;
          goto LABEL_29;
        }
        v43 = v42 - 1;
        if ( !v43 )
          goto LABEL_28;
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_28;
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_97;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_97;
        v36 = v46 - 1;
        v35 = v36 == 0;
LABEL_47:
        if ( !v35 && v36 != 1 )
          goto LABEL_97;
        goto LABEL_49;
      }
LABEL_79:
      v21 = -1073741248;
      goto LABEL_29;
    }
    if ( v42 <= 0x16 )
    {
      if ( v42 == 22 )
        goto LABEL_28;
      v52 = v42 - 15;
      if ( !v52 )
        goto LABEL_28;
      v53 = v52 - 1;
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
      v11 = v56 - 1;
      if ( v11 )
        goto LABEL_88;
LABEL_49:
      v21 = -1073741436;
      goto LABEL_29;
    }
    v57 = v42 - 24;
    if ( !v57 )
      goto LABEL_28;
    v58 = v57 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        v60 = v59 - 1;
        if ( v60 )
        {
          v61 = v60 - 1;
          if ( !v61 )
            goto LABEL_97;
          v51 = v61 == 2;
          goto LABEL_96;
        }
        goto LABEL_79;
      }
    }
    v21 = -1073741643;
  }
LABEL_29:
  v22 = *(_QWORD *)(v9 + 4224);
  v23 = *(_QWORD *)(v9 + 4184);
  if ( v21 >= 0 )
    v21 = 0;
  else
    StorEtwNvmeControllerEvent(
      (__int64)a1,
      1,
      2LL,
      (__int64)L"Firmware download command failed.",
      L"NVMeStatus",
      v10,
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
  *(_DWORD *)(v23 + 48) = v21;
  *(_QWORD *)(v23 + 56) = 0LL;
  NvmeFreeDmaBuffer(
    (_DWORD)a1,
    *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
    v8,
    *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
    *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v22 + 152));
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v23 + 141) = -84;
  if ( v17 )
    goto LABEL_169;
  v93 = 0LL;
  IoGetActivityIdIrp(v23, &v93);
  v64 = *(_QWORD *)(v23 + 184);
  if ( *(_BYTE *)v64 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_169;
    v66 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_168;
  }
  if ( *(_BYTE *)v64 != 15 )
  {
    if ( *(_BYTE *)v64 != 27 )
      goto LABEL_169;
    if ( *(_BYTE *)(v64 + 1) == 7 && !*(_DWORD *)(v64 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v65 = *(int **)(v23 + 56);
        if ( v65 )
          v3 = *v65;
        LODWORD(v86) = *(_DWORD *)(v23 + 48);
        LODWORD(v85) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v63, v64, &v93, v23, v85, v86);
      }
      goto LABEL_169;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_169;
    v66 = &EventPnpRequestComplete;
LABEL_168:
    LODWORD(v85) = *(_DWORD *)(v23 + 48);
    McTemplateK0pd_EtwWriteTransfer(v63, v66, &v93, v23, v85);
    goto LABEL_169;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_169;
  v67 = *(_QWORD *)(v64 + 8);
  v68 = 0;
  v69 = 0LL;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  if ( *(_BYTE *)(v67 + 2) != 40 )
  {
    v80 = *(_BYTE *)(v67 + 72);
    v69 = *(_BYTE **)(v67 + 32);
    v70 = *(_BYTE *)(v67 + 11);
    v68 = *(_BYTE *)(v67 + 4);
    if ( *(_BYTE *)(v67 + 2) )
      goto LABEL_169;
LABEL_143:
    LOBYTE(v63) = v80 - 8;
    if ( (v63 & 0x5D) != 0 )
      goto LABEL_169;
    v81 = *(_BYTE *)(v67 + 3);
    if ( v81 == 1 || !v69 || !v70 )
      goto LABEL_162;
    v82 = *v69 & 0x7F;
    if ( v82 == 114 || v82 == 115 )
    {
      v63 = (unsigned __int64)&v69[v70];
      LOBYTE(v67) = 0;
      if ( (unsigned __int64)(v69 + 8) > v63 )
        goto LABEL_160;
      v72 = v69[2];
      v71 = v69[1] & 0xF;
      v73 = v69[3];
    }
    else
    {
      v63 = (unsigned __int64)&v69[v70];
      LOBYTE(v67) = 0;
      if ( (unsigned __int64)(v69 + 8) > v63 )
        goto LABEL_160;
      v83 = v69 + 13;
      v71 = v69[2] & 0xF;
      v84 = v70;
      if ( (unsigned int)(unsigned __int8)v69[7] + 8 <= v70 )
        v84 = (unsigned __int8)v69[7] + 8;
      v63 = (unsigned __int64)&v69[v84];
      if ( (unsigned __int64)v83 <= v63 )
        v72 = v69[12];
      if ( (unsigned __int64)(v69 + 14) > v63 )
        v73 = 0;
      else
        v73 = *v83;
    }
    LOBYTE(v67) = 1;
LABEL_160:
    if ( (_BYTE)v67 )
      v74 = 1;
LABEL_162:
    if ( byte_140173441 < 0 )
    {
      if ( !v74 )
      {
        v73 = 0;
        v72 = 0;
        v71 = 0;
      }
      LOBYTE(v90) = v73;
      LOBYTE(v89) = v72;
      LOBYTE(v88) = v71;
      LOBYTE(v87) = v68;
      LOBYTE(v86) = v81;
      LODWORD(v85) = *(_DWORD *)(v23 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v63, v67, &v93, v23, v85, v86, v87, v88, v89, v90, v23);
    }
    goto LABEL_169;
  }
  v75 = 0LL;
  v91 = 0;
  if ( *(_DWORD *)(v67 + 20) )
    goto LABEL_169;
  v76 = 0;
  v92 = *(_DWORD *)(v67 + 56);
  if ( !v92 )
    goto LABEL_169;
  while ( 1 )
  {
    v63 = *(unsigned int *)(v67 + 4LL * v76 + 120);
    if ( (unsigned int)v63 >= 0x80 )
    {
      v77 = *(unsigned int *)(v67 + 16);
      if ( (unsigned int)v63 < (unsigned int)v77 )
        break;
    }
LABEL_134:
    if ( ++v76 >= v92 )
      goto LABEL_140;
  }
  v78 = (unsigned int)v63;
  v79 = *(_DWORD *)(v63 + v67) - 64;
  if ( v79 )
  {
    v63 = (unsigned int)(v79 - 1);
    if ( (_DWORD)v63 )
    {
      if ( (_DWORD)v63 == 1 )
      {
        v63 = v78 + 40;
        if ( v78 + 40 <= v77 )
        {
          if ( *(_DWORD *)(v78 + v67 + 12) )
            v75 = (char *)(v78 + v67 + 32);
          v69 = *(_BYTE **)(v78 + v67 + 24);
          goto LABEL_139;
        }
      }
    }
    else
    {
      v63 = v78 + 56;
      if ( v78 + 56 <= v77 )
      {
        v91 = 1;
        if ( *(_BYTE *)(v78 + v67 + 10) )
          v75 = (char *)(v78 + v67 + 24);
        v68 = *(_BYTE *)(v78 + v67 + 8);
        v69 = *(_BYTE **)(v78 + v67 + 16);
        v70 = *(_BYTE *)(v78 + v67 + 9);
      }
    }
    goto LABEL_133;
  }
  v63 = v78 + 40;
  if ( v78 + 40 > v77 )
  {
LABEL_133:
    if ( v91 )
      goto LABEL_140;
    goto LABEL_134;
  }
  if ( *(_BYTE *)(v78 + v67 + 10) )
    v75 = (char *)(v78 + v67 + 24);
  v69 = *(_BYTE **)(v78 + v67 + 16);
LABEL_139:
  v70 = *(_BYTE *)(v78 + v67 + 9);
  v68 = *(_BYTE *)(v78 + v67 + 8);
LABEL_140:
  if ( v75 )
  {
    v80 = *v75;
    v74 = 0;
    goto LABEL_143;
  }
LABEL_169:
  IofCompleteRequest((PIRP)v23, 1);
}
