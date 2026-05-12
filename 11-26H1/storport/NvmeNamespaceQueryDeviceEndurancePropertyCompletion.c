/*
 * XREFs of NvmeNamespaceQueryDeviceEndurancePropertyCompletion @ 0x14010A090
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
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeNamespaceQueryDeviceEndurancePropertyCompletion(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int16 v9; // ax
  unsigned int v10; // edx
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  bool v22; // zf
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  _DWORD *v49; // rdi
  __int64 v50; // rbx
  int v51; // ecx
  int v52; // eax
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  const EVENT_DESCRIPTOR *v70; // rdx
  __int64 v71; // rdx
  char v72; // r15
  _BYTE *v73; // r9
  unsigned __int8 v74; // di
  char v75; // r10
  char v76; // bl
  char v77; // r11
  char v78; // bp
  char *v79; // r14
  unsigned int v80; // r12d
  unsigned __int64 v81; // rbp
  __int64 v82; // r8
  int v83; // ecx
  char v84; // cl
  char v85; // r8
  char v86; // al
  char *v87; // r11
  unsigned int v88; // eax
  __int64 v89; // [rsp+20h] [rbp-D8h]
  __int64 v90; // [rsp+28h] [rbp-D0h]
  __int64 v91; // [rsp+30h] [rbp-C8h]
  __int64 v92; // [rsp+38h] [rbp-C0h]
  __int64 v93; // [rsp+40h] [rbp-B8h]
  __int64 v94; // [rsp+48h] [rbp-B0h]
  char v95; // [rsp+A0h] [rbp-58h]
  unsigned int v96; // [rsp+A4h] [rbp-54h]
  GUID v97; // [rsp+A8h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4216LL);
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  if ( a3 )
  {
    v9 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) &= 0xF1FFu;
    v5 = *(_QWORD *)a2;
    v9 = *(_WORD *)(*(_QWORD *)a2 + 4260LL) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v9;
  v10 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
        goto LABEL_7;
      switch ( (unsigned __int8)(v10 >> 1) )
      {
        case 0x80u:
          goto LABEL_7;
        case 0x81u:
          goto LABEL_7;
        case 0x82u:
          goto LABEL_7;
        case 0x83u:
          goto LABEL_7;
        case 0x84u:
          goto LABEL_7;
      }
      v12 = (unsigned __int8)(v10 >> 1) - 133;
      if ( (unsigned __int8)(v10 >> 1) == 133 )
        goto LABEL_7;
      goto LABEL_14;
    }
    v13 = v10 >> 1;
    v14 = (unsigned __int8)(v10 >> 1);
    if ( v14 > 0x80 )
    {
      v42 = v14 - 129;
      if ( !v42 )
        goto LABEL_32;
      v21 = v42 - 1;
      if ( !v21 )
        goto LABEL_15;
      goto LABEL_30;
    }
    if ( (unsigned __int8)v13 == 128 )
      goto LABEL_32;
    if ( v14 <= 0x11 )
    {
      if ( v14 != 17 )
      {
        if ( v14 <= 9 )
        {
          if ( v14 == 9 )
            goto LABEL_32;
          if ( !(_BYTE)v13 )
            goto LABEL_32;
          v15 = v14 - 1;
          if ( !v15 )
            goto LABEL_32;
          v16 = v15 - 1;
          if ( !v16 )
            goto LABEL_32;
          v17 = v16 - 1;
          if ( !v17 )
            goto LABEL_32;
          v19 = v17 - 2;
          v18 = v19 == 0;
LABEL_27:
          if ( v18 )
            goto LABEL_32;
          v20 = v19 - 1;
          if ( !v20 )
            goto LABEL_32;
          v21 = v20 - 1;
          if ( !v21 )
            goto LABEL_32;
LABEL_30:
          v22 = v21 == 1;
          goto LABEL_31;
        }
        v28 = v14 - 10;
        if ( !v28 )
          goto LABEL_32;
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( !v30 )
            goto LABEL_32;
          v31 = v30 - 1;
          if ( !v31 )
            goto LABEL_32;
          v32 = v31 - 1;
          if ( !v32 )
            goto LABEL_32;
          v33 = v32 - 1;
          if ( !v33 )
            goto LABEL_32;
          if ( v33 != 1 )
            goto LABEL_7;
        }
      }
      v11 = -2147483210;
      goto LABEL_33;
    }
    if ( v14 > 0x1A )
    {
      v39 = v14 - 27;
      if ( !v39 )
      {
        v11 = -1073741637;
        goto LABEL_33;
      }
      v40 = v39 - 1;
      if ( !v40 )
        goto LABEL_32;
      v41 = v40 - 2;
      if ( !v41 )
        goto LABEL_15;
      v19 = v41 - 1;
      v18 = v19 == 0;
      goto LABEL_27;
    }
    if ( v14 != 26 )
    {
      v34 = v14 - 18;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( !v36 )
          {
            v11 = -1073741800;
            goto LABEL_33;
          }
          v37 = v36 - 1;
          if ( !v37 )
            goto LABEL_7;
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 - 2 > 1 )
              goto LABEL_7;
          }
        }
      }
    }
LABEL_60:
    v11 = -1073741436;
    goto LABEL_33;
  }
  v43 = v10 >> 1;
  v44 = (unsigned __int8)(v10 >> 1);
  if ( v44 > 0x80 )
  {
    v69 = v44 - 129;
    if ( !v69 )
      goto LABEL_32;
    v21 = v69 - 1;
    if ( !v21 )
    {
      v11 = -1073741661;
      goto LABEL_33;
    }
    goto LABEL_30;
  }
  if ( (unsigned __int8)v43 == 128 )
    goto LABEL_32;
  if ( v44 > 0xE )
  {
    if ( v44 <= 0x16 )
    {
      if ( v44 == 22 )
        goto LABEL_32;
      v59 = v44 - 15;
      if ( !v59 )
        goto LABEL_32;
      v60 = v59 - 1;
      if ( !v60 )
        goto LABEL_32;
      v61 = v60 - 1;
      if ( !v61 )
        goto LABEL_32;
      v62 = v61 - 1;
      if ( !v62 )
        goto LABEL_32;
      v63 = v62 - 1;
      if ( !v63 )
        goto LABEL_32;
      v12 = v63 - 1;
      if ( v12 )
      {
LABEL_14:
        if ( v12 == 1 )
        {
LABEL_15:
          v11 = -1073741790;
          goto LABEL_33;
        }
LABEL_7:
        v11 = -1073741435;
LABEL_33:
        StorEtwNvmeControllerEvent(
          (__int64)a1,
          1,
          2LL,
          (__int64)L"Failed to retrieve namespace endurance information log from controller.",
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
        v24 = 0LL;
        *(_DWORD *)(v8 + 48) = v11;
        goto LABEL_34;
      }
      goto LABEL_60;
    }
    v64 = v44 - 24;
    if ( !v64 )
      goto LABEL_32;
    v65 = v64 - 1;
    if ( !v65 || (v66 = v65 - 1) == 0 )
    {
      v11 = -1073741643;
      goto LABEL_33;
    }
    v67 = v66 - 1;
    if ( v67 )
    {
      v68 = v67 - 1;
      if ( !v68 )
        goto LABEL_7;
      v22 = v68 == 2;
LABEL_31:
      if ( !v22 )
        goto LABEL_7;
LABEL_32:
      v11 = -1073741808;
      goto LABEL_33;
    }
LABEL_90:
    v11 = -1073741248;
    goto LABEL_33;
  }
  if ( v44 == 14 )
    goto LABEL_32;
  if ( v44 > 7 )
  {
    v55 = v44 - 8;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          v58 = v57 - 1;
          if ( !v58 )
            goto LABEL_32;
          v21 = v58 - 1;
          if ( !v21 )
          {
            v11 = -1073740758;
            goto LABEL_33;
          }
          goto LABEL_30;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v44 == 7 )
    goto LABEL_90;
  if ( (_BYTE)v43 )
  {
    v45 = v44 - 1;
    if ( !v45 )
      goto LABEL_32;
    v46 = v45 - 1;
    if ( !v46 )
      goto LABEL_32;
    v47 = v46 - 1;
    if ( !v47 )
      goto LABEL_7;
    v48 = v47 - 1;
    if ( !v48 || v48 - 1 > 1 )
      goto LABEL_7;
    goto LABEL_60;
  }
  v49 = *(_DWORD **)(v8 + 24);
  *(_DWORD *)(v8 + 48) = 0;
  v50 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  memset_0(v49, 0, *(unsigned int *)(*(_QWORD *)(v8 + 184) + 8LL));
  v24 = 56LL;
  *v49 = 56;
  v49[1] = 56;
  v51 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 176) + 100LL);
  v49[2] = 1;
  v49[3] = v51;
  v52 = *(unsigned __int8 *)(v50 + 5);
  v49[2] = 5;
  v49[5] = v52;
  v53 = *(_OWORD *)(v50 + 48);
  v49[2] = 13;
  *(_OWORD *)(v49 + 6) = v53;
  v54 = *(_OWORD *)(v50 + 64);
  v49[2] = 29;
  *(_OWORD *)(v49 + 10) = v54;
LABEL_34:
  *(_QWORD *)(v8 + 56) = v24;
  NvmeFreeDmaBuffer(
    (__int64)a1,
    *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
    v23,
    *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
    *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v8 + 141) = -84;
  if ( v18 )
    goto LABEL_166;
  v97 = 0LL;
  IoGetActivityIdIrp(v8, &v97);
  v26 = *(_QWORD *)(v8 + 184);
  if ( *(_BYTE *)v26 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_166;
    v70 = &EventNonReadWriteRequestComplete;
    goto LABEL_165;
  }
  if ( *(_BYTE *)v26 != 15 )
  {
    if ( *(_BYTE *)v26 != 27 )
      goto LABEL_166;
    if ( *(_BYTE *)(v26 + 1) == 7 && !*(_DWORD *)(v26 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v27 = *(int **)(v8 + 56);
        if ( v27 )
          v3 = *v27;
        LODWORD(v90) = *(_DWORD *)(v8 + 48);
        LODWORD(v89) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v25, v26, &v97, v8, v89, v90);
      }
      goto LABEL_166;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_166;
    v70 = &EventPnpRequestComplete;
LABEL_165:
    LODWORD(v89) = *(_DWORD *)(v8 + 48);
    McTemplateK0pd_EtwWriteTransfer(v25, v70, &v97, v8, v89);
    goto LABEL_166;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_166;
  v71 = *(_QWORD *)(v26 + 8);
  v72 = 0;
  v73 = 0LL;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  if ( *(_BYTE *)(v71 + 2) != 40 )
  {
    v84 = *(_BYTE *)(v71 + 72);
    v73 = *(_BYTE **)(v71 + 32);
    v74 = *(_BYTE *)(v71 + 11);
    v72 = *(_BYTE *)(v71 + 4);
    if ( *(_BYTE *)(v71 + 2) )
      goto LABEL_166;
LABEL_140:
    LOBYTE(v25) = v84 - 8;
    if ( (v25 & 0x5D) != 0 )
      goto LABEL_166;
    v85 = *(_BYTE *)(v71 + 3);
    if ( v85 == 1 || !v73 || !v74 )
      goto LABEL_159;
    v86 = *v73 & 0x7F;
    if ( v86 == 114 || v86 == 115 )
    {
      v25 = (unsigned __int64)&v73[v74];
      LOBYTE(v71) = 0;
      if ( (unsigned __int64)(v73 + 8) > v25 )
        goto LABEL_157;
      v76 = v73[2];
      v75 = v73[1] & 0xF;
      v77 = v73[3];
    }
    else
    {
      v25 = (unsigned __int64)&v73[v74];
      LOBYTE(v71) = 0;
      if ( (unsigned __int64)(v73 + 8) > v25 )
        goto LABEL_157;
      v87 = v73 + 13;
      v75 = v73[2] & 0xF;
      v88 = v74;
      if ( (unsigned int)(unsigned __int8)v73[7] + 8 <= v74 )
        v88 = (unsigned __int8)v73[7] + 8;
      v25 = (unsigned __int64)&v73[v88];
      if ( (unsigned __int64)v87 <= v25 )
        v76 = v73[12];
      if ( (unsigned __int64)(v73 + 14) > v25 )
        v77 = 0;
      else
        v77 = *v87;
    }
    LOBYTE(v71) = 1;
LABEL_157:
    if ( (_BYTE)v71 )
      v78 = 1;
LABEL_159:
    if ( byte_140173441 < 0 )
    {
      if ( !v78 )
      {
        v77 = 0;
        v76 = 0;
        v75 = 0;
      }
      LOBYTE(v94) = v77;
      LOBYTE(v93) = v76;
      LOBYTE(v92) = v75;
      LOBYTE(v91) = v72;
      LOBYTE(v90) = v85;
      LODWORD(v89) = *(_DWORD *)(v8 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v25, v71, &v97, v8, v89, v90, v91, v92, v93, v94, v8);
    }
    goto LABEL_166;
  }
  v79 = 0LL;
  v95 = 0;
  if ( *(_DWORD *)(v71 + 20) )
    goto LABEL_166;
  v80 = 0;
  v96 = *(_DWORD *)(v71 + 56);
  if ( !v96 )
    goto LABEL_166;
  while ( 1 )
  {
    v25 = *(unsigned int *)(v71 + 4LL * v80 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v81 = *(unsigned int *)(v71 + 16);
      if ( (unsigned int)v25 < (unsigned int)v81 )
        break;
    }
LABEL_131:
    if ( ++v80 >= v96 )
      goto LABEL_137;
  }
  v82 = (unsigned int)v25;
  v83 = *(_DWORD *)(v25 + v71) - 64;
  if ( v83 )
  {
    v25 = (unsigned int)(v83 - 1);
    if ( (_DWORD)v25 )
    {
      if ( (_DWORD)v25 == 1 )
      {
        v25 = v82 + 40;
        if ( v82 + 40 <= v81 )
        {
          if ( *(_DWORD *)(v82 + v71 + 12) )
            v79 = (char *)(v82 + v71 + 32);
          v73 = *(_BYTE **)(v82 + v71 + 24);
          goto LABEL_136;
        }
      }
    }
    else
    {
      v25 = v82 + 56;
      if ( v82 + 56 <= v81 )
      {
        v95 = 1;
        if ( *(_BYTE *)(v82 + v71 + 10) )
          v79 = (char *)(v82 + v71 + 24);
        v72 = *(_BYTE *)(v82 + v71 + 8);
        v73 = *(_BYTE **)(v82 + v71 + 16);
        v74 = *(_BYTE *)(v82 + v71 + 9);
      }
    }
    goto LABEL_130;
  }
  v25 = v82 + 40;
  if ( v82 + 40 > v81 )
  {
LABEL_130:
    if ( v95 )
      goto LABEL_137;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(v82 + v71 + 10) )
    v79 = (char *)(v82 + v71 + 24);
  v73 = *(_BYTE **)(v82 + v71 + 16);
LABEL_136:
  v74 = *(_BYTE *)(v82 + v71 + 9);
  v72 = *(_BYTE *)(v82 + v71 + 8);
LABEL_137:
  if ( v79 )
  {
    v84 = *v79;
    v78 = 0;
    goto LABEL_140;
  }
LABEL_166:
  IofCompleteRequest((PIRP)v8, 1);
}
