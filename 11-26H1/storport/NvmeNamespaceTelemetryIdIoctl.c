/*
 * XREFs of NvmeNamespaceTelemetryIdIoctl @ 0x140115190
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceTelemetryIdIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  int v6; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  int v10; // eax
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r15
  int v20; // eax
  char *v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  unsigned int v32; // r13d
  unsigned __int64 v33; // r12
  int v34; // ecx
  __int64 v36; // rax
  const GUID *v37; // r14
  ULONG v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  ULONG *v47; // rax
  const EVENT_DESCRIPTOR *v48; // rdx
  __int64 v49; // rdx
  _BYTE *v50; // r9
  unsigned __int8 v51; // r14
  char v52; // r11
  char v53; // si
  char v54; // r10
  char v55; // r15
  char *v56; // r15
  unsigned int v57; // r13d
  unsigned __int64 v58; // r12
  __int64 v59; // r8
  int v60; // ecx
  char v61; // r12
  char v62; // cl
  char v63; // r8
  char v64; // al
  char *v65; // r10
  unsigned int v66; // eax
  int v67; // ebx
  unsigned __int64 v68; // rcx
  __int64 v69; // rdx
  int *v70; // rax
  const EVENT_DESCRIPTOR *v71; // rdx
  __int64 v72; // rdx
  _BYTE *v73; // r9
  unsigned __int8 v74; // r14
  char v75; // r11
  char v76; // si
  char v77; // r10
  char v78; // r15
  char *v79; // r15
  unsigned int v80; // r13d
  unsigned __int64 v81; // r12
  __int64 v82; // r8
  int v83; // ecx
  char v84; // r12
  char v85; // cl
  char v86; // r8
  char v87; // al
  char *v88; // r10
  unsigned int v89; // eax
  int v90; // [rsp+20h] [rbp-100h]
  ULONG v91[2]; // [rsp+20h] [rbp-100h]
  int v92; // [rsp+20h] [rbp-100h]
  __int64 v93; // [rsp+28h] [rbp-F8h]
  __int64 v94; // [rsp+30h] [rbp-F0h]
  __int64 v95; // [rsp+38h] [rbp-E8h]
  char v96; // [rsp+A0h] [rbp-80h]
  char v97; // [rsp+A0h] [rbp-80h]
  char v98; // [rsp+A0h] [rbp-80h]
  char v99; // [rsp+A1h] [rbp-7Fh]
  char v100; // [rsp+A1h] [rbp-7Fh]
  char v101; // [rsp+A1h] [rbp-7Fh]
  char v102; // [rsp+A1h] [rbp-7Fh]
  unsigned int v103; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v104; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v105; // [rsp+ACh] [rbp-74h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+B0h] [rbp-70h] BYREF
  GUID v107; // [rsp+C0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+D0h] [rbp-50h] BYREF
  GUID *v109; // [rsp+F0h] [rbp-30h]
  __int64 v110; // [rsp+F8h] [rbp-28h]
  __int64 v111; // [rsp+100h] [rbp-20h]
  __int64 v112; // [rsp+108h] [rbp-18h]
  const GUID *v113; // [rsp+110h] [rbp-10h]
  __int64 v114; // [rsp+118h] [rbp-8h]
  unsigned int *v115; // [rsp+120h] [rbp+0h]
  __int64 v116; // [rsp+128h] [rbp+8h]
  unsigned int *v117; // [rsp+130h] [rbp+10h]
  __int64 v118; // [rsp+138h] [rbp+18h]
  unsigned int *v119; // [rsp+140h] [rbp+20h]
  __int64 v120; // [rsp+148h] [rbp+28h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 16);
  GuidString = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x28u )
  {
    v6 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v105 = -1073741820;
    *(_DWORD *)(a2 + 48) = -1073741820;
    if ( v7 )
      goto LABEL_94;
    v107 = 0LL;
    IoGetActivityIdIrp(a2, &v107);
    v9 = *(unsigned __int8 **)(a2 + 184);
    if ( *v9 != 14 )
    {
      v10 = *v9 - 15;
      if ( *v9 != 15 )
      {
LABEL_5:
        if ( v10 == 12 )
        {
          if ( v9[1] == 7 && !*((_DWORD *)v9 + 2) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v11 = *(int **)(a2 + 56);
              if ( v11 )
                v6 = *v11;
              McTemplateK0pqd_EtwWriteTransfer(v8, (__int64)v9, &v107, a2, v6, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_94;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v12 = &EventPnpRequestComplete;
            v90 = *(_DWORD *)(a2 + 48);
LABEL_93:
            McTemplateK0pd_EtwWriteTransfer(v8, v12, &v107, a2, v90);
          }
        }
LABEL_94:
        IofCompleteRequest((PIRP)a2, 0);
        return v105;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_94;
      v13 = *((_QWORD *)v9 + 1);
      v14 = 0LL;
      v96 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = *(unsigned __int8 *)(v13 + 2);
      if ( (_BYTE)v20 == 40 )
      {
        v21 = 0LL;
        v99 = 0;
        if ( !*(_DWORD *)(v13 + 20) )
        {
          v22 = 0;
          v103 = *(_DWORD *)(v13 + 56);
          if ( v103 )
          {
            while ( 1 )
            {
              v8 = *(unsigned int *)(v13 + 4LL * v22 + 120);
              if ( (unsigned int)v8 >= 0x80 )
              {
                v23 = *(unsigned int *)(v13 + 16);
                if ( (unsigned int)v8 < (unsigned int)v23 )
                {
                  v24 = (unsigned int)v8;
                  v25 = *(_DWORD *)(v8 + v13) - 64;
                  if ( v25 )
                  {
                    v8 = (unsigned int)(v25 - 1);
                    if ( (_DWORD)v8 )
                    {
                      if ( (_DWORD)v8 == 1 )
                      {
                        v8 = v24 + 40;
                        if ( v24 + 40 <= v23 )
                          goto LABEL_24;
                      }
                    }
                    else
                    {
                      v8 = v24 + 56;
                      if ( v24 + 56 <= v23 )
                      {
                        v99 = 1;
                        if ( *(_BYTE *)(v24 + v13 + 10) )
                          v21 = (char *)(v24 + v13 + 24);
                        v14 = *(_BYTE **)(v24 + v13 + 16);
                        v15 = *(_BYTE *)(v24 + v13 + 9);
                        v96 = *(_BYTE *)(v24 + v13 + 8);
                      }
                    }
                  }
                  else
                  {
                    v8 = v24 + 40;
                    if ( v24 + 40 <= v23 )
                      goto LABEL_38;
                  }
                  if ( v99 )
                    goto LABEL_35;
                }
              }
              if ( ++v22 >= v103 )
                goto LABEL_35;
            }
          }
        }
        goto LABEL_94;
      }
      goto LABEL_41;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v90 = *(_DWORD *)(a2 + 48);
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v2 + 8) < 0x28u )
  {
    v6 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v105 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    if ( v7 )
      goto LABEL_94;
    v107 = 0LL;
    IoGetActivityIdIrp(a2, &v107);
    v9 = *(unsigned __int8 **)(a2 + 184);
    if ( *v9 != 14 )
    {
      v10 = *v9 - 15;
      if ( *v9 != 15 )
        goto LABEL_5;
      if ( byte_140173441 >= 0 )
        goto LABEL_94;
      v13 = *((_QWORD *)v9 + 1);
      v14 = 0LL;
      v96 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = *(unsigned __int8 *)(v13 + 2);
      if ( (_BYTE)v20 == 40 )
      {
        v21 = 0LL;
        v100 = 0;
        if ( *(_DWORD *)(v13 + 20) )
          goto LABEL_94;
        v32 = 0;
        v103 = *(_DWORD *)(v13 + 56);
        if ( !v103 )
          goto LABEL_94;
        do
        {
          v8 = *(unsigned int *)(v13 + 4LL * v32 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v33 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v8 < (unsigned int)v33 )
            {
              v24 = (unsigned int)v8;
              v34 = *(_DWORD *)(v8 + v13) - 64;
              if ( v34 )
              {
                v8 = (unsigned int)(v34 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v24 + 40;
                    if ( v24 + 40 <= v33 )
                    {
LABEL_24:
                      if ( *(_DWORD *)(v24 + v13 + 12) )
                        v21 = (char *)(v24 + v13 + 32);
                      v14 = *(_BYTE **)(v24 + v13 + 24);
LABEL_27:
                      v26 = *(_BYTE *)(v24 + v13 + 8);
                      v15 = *(_BYTE *)(v24 + v13 + 9);
                      goto LABEL_36;
                    }
                  }
                }
                else
                {
                  v8 = v24 + 56;
                  if ( v24 + 56 <= v33 )
                  {
                    v100 = 1;
                    if ( *(_BYTE *)(v24 + v13 + 10) )
                      v21 = (char *)(v24 + v13 + 24);
                    v14 = *(_BYTE **)(v24 + v13 + 16);
                    v15 = *(_BYTE *)(v24 + v13 + 9);
                    v96 = *(_BYTE *)(v24 + v13 + 8);
                  }
                }
              }
              else
              {
                v8 = v24 + 40;
                if ( v24 + 40 <= v33 )
                {
LABEL_38:
                  if ( *(_BYTE *)(v24 + v13 + 10) )
                    v21 = (char *)(v24 + v13 + 24);
                  v14 = *(_BYTE **)(v24 + v13 + 16);
                  goto LABEL_27;
                }
              }
              if ( v100 )
                break;
            }
          }
          ++v32;
        }
        while ( v32 < v103 );
LABEL_35:
        v26 = v96;
LABEL_36:
        if ( !v21 )
          goto LABEL_94;
        v27 = *v21;
        v19 = 0;
        goto LABEL_42;
      }
LABEL_41:
      v26 = *(_BYTE *)(v13 + 4);
      v15 = *(_BYTE *)(v13 + 11);
      v14 = *(_BYTE **)(v13 + 32);
      v27 = *(_BYTE *)(v13 + 72);
      if ( v20 )
        goto LABEL_94;
LABEL_42:
      LOBYTE(v8) = v27 - 8;
      if ( (v8 & 0x5D) != 0 )
        goto LABEL_94;
      v28 = *(_BYTE *)(v13 + 3);
      if ( v28 == 1 || !v14 || !v15 )
      {
LABEL_61:
        if ( byte_140173441 < 0 )
        {
          if ( !v19 )
          {
            v18 = 0;
            v17 = 0;
            v16 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v8, v13, &v107, a2, *(_DWORD *)(a2 + 48), v28, v26, v16, v17, v18, a2);
        }
        goto LABEL_94;
      }
      v29 = *v14 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v8 = (unsigned __int64)&v14[v15];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v14 + 8) > v8 )
          goto LABEL_59;
        v18 = v14[3];
        v16 = v14[1] & 0xF;
        v17 = v14[2];
      }
      else
      {
        v8 = (unsigned __int64)&v14[v15];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v14 + 8) > v8 )
          goto LABEL_59;
        v30 = v14 + 13;
        v16 = v14[2] & 0xF;
        v31 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v31 = (unsigned __int8)v14[7] + 8;
        v8 = (unsigned __int64)&v14[v31];
        if ( (unsigned __int64)v30 <= v8 )
          v17 = v14[12];
        if ( (unsigned __int64)(v14 + 14) > v8 )
          v18 = 0;
        else
          v18 = *v30;
      }
      LOBYTE(v13) = 1;
LABEL_59:
      if ( (_BYTE)v13 )
        v19 = 1;
      goto LABEL_61;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v8 = *(unsigned int *)(a2 + 48);
    v90 = *(_DWORD *)(a2 + 48);
LABEL_92:
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  v36 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v36 == 40 && *(_DWORD *)(v36 + 4) == 40 )
  {
    v37 = (const GUID *)(a1 + 160);
    v38 = 0;
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(v36 + 8);
    *(_OWORD *)(v36 + 24) = *(_OWORD *)(*(_QWORD *)(v3 + 128) + 1048LL);
    *(_QWORD *)(a2 + 56) = 40LL;
    if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v36 + 24, 0x400000000000LL) )
    {
      *(_QWORD *)&v107.Data1 = 0x1000000LL;
      v109 = &v107;
      v103 = *(_DWORD *)(a1 + 56);
      v115 = &v103;
      v42 = *(_QWORD *)(v41 + 128);
      v110 = 8LL;
      v111 = v39;
      v112 = 16LL;
      v113 = v37;
      v114 = 16LL;
      v116 = 4LL;
      v43 = *(unsigned int *)(v42 + 56);
      v117 = &v105;
      v104 = *(unsigned __int16 *)(v41 + 4);
      v119 = &v104;
      v105 = v43;
      v118 = 4LL;
      v120 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v43, (unsigned __int8 *)dword_140165326, v40, v41, 8u, &v108);
    }
    RtlStringFromGUID(v37, &GuidString);
    Buffer = (wchar_t *)&word_140152E7C;
    if ( GuidString.Buffer )
      Buffer = GuidString.Buffer;
    StorEtwNvmeNamespaceEvent(
      a1,
      1,
      4,
      (__int64)L"NVMe namespace identification",
      Buffer,
      0,
      (void *)&word_140152E7C,
      0);
    RtlFreeUnicodeString(&GuidString);
    v7 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v7 )
      goto LABEL_168;
    v107 = 0LL;
    IoGetActivityIdIrp(a2, &v107);
    v46 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v46 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v48 = &EventNonReadWriteRequestComplete;
        goto LABEL_167;
      }
LABEL_168:
      IofCompleteRequest((PIRP)a2, 0);
      return 0LL;
    }
    if ( *(_BYTE *)v46 != 15 )
    {
      if ( *(_BYTE *)v46 == 27 )
      {
        if ( *(_BYTE *)(v46 + 1) == 7 && !*(_DWORD *)(v46 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v47 = *(ULONG **)(a2 + 56);
            if ( v47 )
              v38 = *v47;
            LODWORD(v93) = *(_DWORD *)(a2 + 48);
            v91[0] = v38;
            McTemplateK0pqd_EtwWriteTransfer(v45, v46, &v107, a2, *(_QWORD *)v91, v93);
          }
          goto LABEL_168;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v48 = &EventPnpRequestComplete;
LABEL_167:
          v91[0] = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v45, v48, &v107, a2, *(_QWORD *)v91);
          goto LABEL_168;
        }
      }
      goto LABEL_168;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_168;
    v49 = *(_QWORD *)(v46 + 8);
    v50 = 0LL;
    v97 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    if ( *(_BYTE *)(v49 + 2) == 40 )
    {
      v56 = 0LL;
      v101 = 0;
      if ( *(_DWORD *)(v49 + 20) )
        goto LABEL_168;
      v57 = 0;
      v104 = *(_DWORD *)(v49 + 56);
      if ( !v104 )
        goto LABEL_168;
      do
      {
        v45 = *(unsigned int *)(v49 + 4LL * v57 + 120);
        if ( (unsigned int)v45 >= 0x80 )
        {
          v58 = *(unsigned int *)(v49 + 16);
          if ( (unsigned int)v45 < (unsigned int)v58 )
          {
            v59 = (unsigned int)v45;
            v60 = *(_DWORD *)(v49 + v45) - 64;
            if ( v60 )
            {
              v45 = (unsigned int)(v60 - 1);
              if ( (_DWORD)v45 )
              {
                if ( (_DWORD)v45 == 1 )
                {
                  v45 = v59 + 40;
                  if ( v59 + 40 <= v58 )
                  {
                    if ( *(_DWORD *)(v49 + v59 + 12) )
                      v56 = (char *)(v59 + v49 + 32);
                    v50 = *(_BYTE **)(v49 + v59 + 24);
LABEL_127:
                    v61 = *(_BYTE *)(v49 + v59 + 8);
                    v51 = *(_BYTE *)(v49 + v59 + 9);
                    goto LABEL_136;
                  }
                }
              }
              else
              {
                v45 = v59 + 56;
                if ( v59 + 56 <= v58 )
                {
                  v101 = 1;
                  if ( *(_BYTE *)(v49 + v59 + 10) )
                    v56 = (char *)(v59 + v49 + 24);
                  v50 = *(_BYTE **)(v49 + v59 + 16);
                  v51 = *(_BYTE *)(v49 + v59 + 9);
                  v97 = *(_BYTE *)(v49 + v59 + 8);
                }
              }
            }
            else
            {
              v45 = v59 + 40;
              if ( v59 + 40 <= v58 )
              {
                if ( *(_BYTE *)(v49 + v59 + 10) )
                  v56 = (char *)(v59 + v49 + 24);
                v50 = *(_BYTE **)(v49 + v59 + 16);
                goto LABEL_127;
              }
            }
            if ( v101 )
              break;
          }
        }
        ++v57;
      }
      while ( v57 < v104 );
      v61 = v97;
LABEL_136:
      if ( !v56 )
        goto LABEL_168;
      v62 = *v56;
      v55 = 0;
    }
    else
    {
      v62 = *(_BYTE *)(v49 + 72);
      v50 = *(_BYTE **)(v49 + 32);
      v51 = *(_BYTE *)(v49 + 11);
      v61 = *(_BYTE *)(v49 + 4);
      if ( *(_BYTE *)(v49 + 2) )
        goto LABEL_168;
    }
    LOBYTE(v45) = v62 - 8;
    if ( (v45 & 0x5D) != 0 )
      goto LABEL_168;
    v63 = *(_BYTE *)(v49 + 3);
    if ( v63 == 1 || !v50 || !v51 )
    {
LABEL_161:
      if ( byte_140173441 < 0 )
      {
        if ( !v55 )
        {
          v54 = 0;
          v53 = 0;
          v52 = 0;
        }
        LOBYTE(v95) = v52;
        LOBYTE(v94) = v61;
        LOBYTE(v93) = v63;
        v91[0] = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v45, v49, &v107, a2, *(_QWORD *)v91, v93, v94, v95, v53, v54, a2);
      }
      goto LABEL_168;
    }
    v64 = *v50 & 0x7F;
    if ( v64 == 114 || v64 == 115 )
    {
      v45 = (unsigned __int64)&v50[v51];
      LOBYTE(v49) = 0;
      if ( (unsigned __int64)(v50 + 8) > v45 )
        goto LABEL_159;
      v53 = v50[2];
      v52 = v50[1] & 0xF;
      v54 = v50[3];
    }
    else
    {
      v45 = (unsigned __int64)&v50[v51];
      LOBYTE(v49) = 0;
      if ( (unsigned __int64)(v50 + 8) > v45 )
        goto LABEL_159;
      v65 = v50 + 13;
      v52 = v50[2] & 0xF;
      v66 = v51;
      if ( (unsigned int)(unsigned __int8)v50[7] + 8 <= v51 )
        v66 = (unsigned __int8)v50[7] + 8;
      v45 = (unsigned __int64)&v50[v66];
      if ( (unsigned __int64)v65 <= v45 )
        v53 = v50[12];
      if ( (unsigned __int64)(v50 + 14) > v45 )
        v54 = 0;
      else
        v54 = *v65;
    }
    LOBYTE(v49) = 1;
LABEL_159:
    if ( (_BYTE)v49 )
      v55 = 1;
    goto LABEL_161;
  }
  v67 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v7 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v7 )
    goto LABEL_235;
  v107 = 0LL;
  IoGetActivityIdIrp(a2, &v107);
  v69 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v69 != 14 )
  {
    if ( *(_BYTE *)v69 != 15 )
    {
      if ( *(_BYTE *)v69 == 27 )
      {
        if ( *(_BYTE *)(v69 + 1) == 7 && !*(_DWORD *)(v69 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v70 = *(int **)(a2 + 56);
            if ( v70 )
              v67 = *v70;
            McTemplateK0pqd_EtwWriteTransfer(v68, v69, &v107, a2, v67, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_235;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v71 = &EventPnpRequestComplete;
          v92 = *(_DWORD *)(a2 + 48);
LABEL_234:
          McTemplateK0pd_EtwWriteTransfer(v68, v71, &v107, a2, v92);
          goto LABEL_235;
        }
      }
      goto LABEL_235;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_235;
    v72 = *(_QWORD *)(v69 + 8);
    v73 = 0LL;
    v98 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    if ( *(_BYTE *)(v72 + 2) == 40 )
    {
      v79 = 0LL;
      v102 = 0;
      if ( *(_DWORD *)(v72 + 20) )
        goto LABEL_235;
      v80 = 0;
      v104 = *(_DWORD *)(v72 + 56);
      if ( !v104 )
        goto LABEL_235;
      do
      {
        v68 = *(unsigned int *)(v72 + 4LL * v80 + 120);
        if ( (unsigned int)v68 >= 0x80 )
        {
          v81 = *(unsigned int *)(v72 + 16);
          if ( (unsigned int)v68 < (unsigned int)v81 )
          {
            v82 = (unsigned int)v68;
            v83 = *(_DWORD *)(v72 + v68) - 64;
            if ( v83 )
            {
              v68 = (unsigned int)(v83 - 1);
              if ( (_DWORD)v68 )
              {
                if ( (_DWORD)v68 == 1 )
                {
                  v68 = v82 + 40;
                  if ( v82 + 40 <= v81 )
                  {
                    if ( *(_DWORD *)(v72 + v82 + 12) )
                      v79 = (char *)(v82 + v72 + 32);
                    v73 = *(_BYTE **)(v72 + v82 + 24);
LABEL_194:
                    v84 = *(_BYTE *)(v72 + v82 + 8);
                    v74 = *(_BYTE *)(v72 + v82 + 9);
                    goto LABEL_203;
                  }
                }
              }
              else
              {
                v68 = v82 + 56;
                if ( v82 + 56 <= v81 )
                {
                  v102 = 1;
                  if ( *(_BYTE *)(v72 + v82 + 10) )
                    v79 = (char *)(v82 + v72 + 24);
                  v73 = *(_BYTE **)(v72 + v82 + 16);
                  v74 = *(_BYTE *)(v72 + v82 + 9);
                  v98 = *(_BYTE *)(v72 + v82 + 8);
                }
              }
            }
            else
            {
              v68 = v82 + 40;
              if ( v82 + 40 <= v81 )
              {
                if ( *(_BYTE *)(v72 + v82 + 10) )
                  v79 = (char *)(v82 + v72 + 24);
                v73 = *(_BYTE **)(v72 + v82 + 16);
                goto LABEL_194;
              }
            }
            if ( v102 )
              break;
          }
        }
        ++v80;
      }
      while ( v80 < v104 );
      v84 = v98;
LABEL_203:
      if ( !v79 )
        goto LABEL_235;
      v85 = *v79;
      v78 = 0;
    }
    else
    {
      v85 = *(_BYTE *)(v72 + 72);
      v73 = *(_BYTE **)(v72 + 32);
      v74 = *(_BYTE *)(v72 + 11);
      v84 = *(_BYTE *)(v72 + 4);
      if ( *(_BYTE *)(v72 + 2) )
        goto LABEL_235;
    }
    LOBYTE(v68) = v85 - 8;
    if ( (v68 & 0x5D) != 0 )
      goto LABEL_235;
    v86 = *(_BYTE *)(v72 + 3);
    if ( v86 == 1 || !v73 || !v74 )
    {
LABEL_228:
      if ( byte_140173441 < 0 )
      {
        if ( !v78 )
        {
          v77 = 0;
          v76 = 0;
          v75 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v68, v72, &v107, a2, *(_DWORD *)(a2 + 48), v86, v84, v75, v76, v77, a2);
      }
      goto LABEL_235;
    }
    v87 = *v73 & 0x7F;
    if ( v87 == 114 || v87 == 115 )
    {
      v68 = (unsigned __int64)&v73[v74];
      LOBYTE(v72) = 0;
      if ( (unsigned __int64)(v73 + 8) > v68 )
        goto LABEL_226;
      v76 = v73[2];
      v75 = v73[1] & 0xF;
      v77 = v73[3];
    }
    else
    {
      v68 = (unsigned __int64)&v73[v74];
      LOBYTE(v72) = 0;
      if ( (unsigned __int64)(v73 + 8) > v68 )
        goto LABEL_226;
      v88 = v73 + 13;
      v75 = v73[2] & 0xF;
      v89 = v74;
      if ( (unsigned int)(unsigned __int8)v73[7] + 8 <= v74 )
        v89 = (unsigned __int8)v73[7] + 8;
      v68 = (unsigned __int64)&v73[v89];
      if ( (unsigned __int64)v88 <= v68 )
        v76 = v73[12];
      if ( (unsigned __int64)(v73 + 14) > v68 )
        v77 = 0;
      else
        v77 = *v88;
    }
    LOBYTE(v72) = 1;
LABEL_226:
    if ( (_BYTE)v72 )
      v78 = 1;
    goto LABEL_228;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v68 = *(unsigned int *)(a2 + 48);
    v71 = &EventNonReadWriteRequestComplete;
    v92 = *(_DWORD *)(a2 + 48);
    goto LABEL_234;
  }
LABEL_235:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225485LL;
}
