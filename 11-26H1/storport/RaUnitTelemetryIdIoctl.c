/*
 * XREFs of RaUnitTelemetryIdIoctl @ 0x140048110
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitTelemetryIdIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  int v11; // eax
  int *v12; // rax
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
  int v36; // ebx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  int *v43; // rax
  void *v44; // rdx
  __int64 v45; // rdx
  _BYTE *v46; // r9
  unsigned __int8 v47; // r14
  char v48; // r11
  char v49; // si
  char v50; // r10
  char v51; // r15
  char *v52; // r15
  unsigned int v53; // r13d
  unsigned __int64 v54; // r12
  __int64 v55; // r8
  int v56; // ecx
  char v57; // r12
  char v58; // cl
  char v59; // r8
  char v60; // al
  char *v61; // r10
  unsigned int v62; // eax
  int v63; // ebx
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  int *v66; // rax
  __int64 v67; // rdx
  _BYTE *v68; // r9
  unsigned __int8 v69; // r14
  char v70; // r11
  char v71; // si
  char v72; // r10
  char v73; // r15
  char *v74; // r15
  unsigned int v75; // r13d
  unsigned __int64 v76; // r12
  __int64 v77; // r8
  int v78; // ecx
  char v79; // r12
  char v80; // cl
  char v81; // r8
  char v82; // al
  char *v83; // r10
  unsigned int v84; // eax
  ULONG v85; // [rsp+20h] [rbp-E0h]
  char v86; // [rsp+60h] [rbp-A0h] BYREF
  char v87; // [rsp+61h] [rbp-9Fh] BYREF
  char v88; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v89; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v90; // [rsp+68h] [rbp-98h]
  __int128 v91; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+80h] [rbp-80h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-60h]
  __int64 v94; // [rsp+A8h] [rbp-58h]
  __int64 v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h]
  unsigned int *v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+C8h] [rbp-38h]
  char *v99; // [rsp+D0h] [rbp-30h]
  __int64 v100; // [rsp+D8h] [rbp-28h]
  char *v101; // [rsp+E0h] [rbp-20h]
  __int64 v102; // [rsp+E8h] [rbp-18h]
  char *v103; // [rsp+F0h] [rbp-10h]
  __int64 v104; // [rsp+F8h] [rbp-8h]

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(unsigned int *)(v2 + 8);
  if ( *(_DWORD *)(v2 + 16) < 0x28u )
  {
    LOBYTE(v7) = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v8 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v90 = -1073741820;
    *(_DWORD *)(a2 + 48) = -1073741820;
    if ( v8 )
      goto LABEL_93;
    v91 = 0LL;
    IoGetActivityIdIrp(a2, &v91);
    v10 = *(unsigned __int8 **)(a2 + 184);
    if ( *v10 != 14 )
    {
      v11 = *v10 - 15;
      if ( *v10 != 15 )
        goto LABEL_5;
      if ( byte_140173441 >= 0 )
        goto LABEL_93;
      v13 = *((_QWORD *)v10 + 1);
      v14 = 0LL;
      v86 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = *(unsigned __int8 *)(v13 + 2);
      if ( (_BYTE)v20 == 40 )
      {
        v21 = 0LL;
        v87 = 0;
        if ( !*(_DWORD *)(v13 + 20) )
        {
          v22 = 0;
          v89 = *(_DWORD *)(v13 + 56);
          if ( v89 )
          {
            while ( 1 )
            {
              v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
              if ( (unsigned int)v9 >= 0x80 )
              {
                v23 = *(unsigned int *)(v13 + 16);
                if ( (unsigned int)v9 < (unsigned int)v23 )
                {
                  v24 = (unsigned int)v9;
                  v25 = *(_DWORD *)(v9 + v13) - 64;
                  if ( v25 )
                  {
                    LODWORD(v9) = v25 - 1;
                    if ( (_DWORD)v9 )
                    {
                      if ( (_DWORD)v9 == 1 )
                      {
                        LODWORD(v9) = v24 + 40;
                        if ( v24 + 40 <= v23 )
                          goto LABEL_24;
                      }
                    }
                    else
                    {
                      LODWORD(v9) = v24 + 56;
                      if ( v24 + 56 <= v23 )
                      {
                        v87 = 1;
                        if ( *(_BYTE *)(v24 + v13 + 10) )
                          v21 = (char *)(v24 + v13 + 24);
                        v14 = *(_BYTE **)(v24 + v13 + 16);
                        v15 = *(_BYTE *)(v24 + v13 + 9);
                        v86 = *(_BYTE *)(v24 + v13 + 8);
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v9) = v24 + 40;
                    if ( v24 + 40 <= v23 )
                      goto LABEL_38;
                  }
                  if ( v87 )
                    goto LABEL_35;
                }
              }
              if ( ++v22 >= v89 )
                goto LABEL_35;
            }
          }
        }
        goto LABEL_93;
      }
      goto LABEL_41;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_93;
    v85 = *(_DWORD *)(a2 + 48);
    goto LABEL_92;
  }
  if ( (unsigned int)v6 < 0x28 )
  {
    LOBYTE(v7) = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v8 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v90 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    if ( v8 )
      goto LABEL_93;
    v91 = 0LL;
    IoGetActivityIdIrp(a2, &v91);
    v10 = *(unsigned __int8 **)(a2 + 184);
    if ( *v10 != 14 )
    {
      v11 = *v10 - 15;
      if ( *v10 != 15 )
      {
LABEL_5:
        if ( v11 == 12 )
        {
          if ( v10[1] != 7 || *((_DWORD *)v10 + 2) )
          {
            if ( (byte_140173442 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v9, &EventPnpRequestComplete, &v91, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( (byte_140173442 & 0x40) != 0 )
          {
            v12 = *(int **)(a2 + 56);
            if ( v12 )
              v7 = *v12;
            McTemplateK0pqd_EtwWriteTransfer(v9, (_DWORD)v10, (unsigned int)&v91, a2, v7, *(_DWORD *)(a2 + 48));
          }
        }
        goto LABEL_93;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_93;
      v13 = *((_QWORD *)v10 + 1);
      v14 = 0LL;
      v86 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = *(unsigned __int8 *)(v13 + 2);
      if ( (_BYTE)v20 == 40 )
      {
        v21 = 0LL;
        v87 = 0;
        if ( *(_DWORD *)(v13 + 20) )
          goto LABEL_93;
        v32 = 0;
        v89 = *(_DWORD *)(v13 + 56);
        if ( !v89 )
          goto LABEL_93;
        do
        {
          v9 = *(unsigned int *)(v13 + 4LL * v32 + 120);
          if ( (unsigned int)v9 >= 0x80 )
          {
            v33 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v9 < (unsigned int)v33 )
            {
              v24 = (unsigned int)v9;
              v34 = *(_DWORD *)(v9 + v13) - 64;
              if ( v34 )
              {
                LODWORD(v9) = v34 - 1;
                if ( (_DWORD)v9 )
                {
                  if ( (_DWORD)v9 == 1 )
                  {
                    LODWORD(v9) = v24 + 40;
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
                  LODWORD(v9) = v24 + 56;
                  if ( v24 + 56 <= v33 )
                  {
                    v87 = 1;
                    if ( *(_BYTE *)(v24 + v13 + 10) )
                      v21 = (char *)(v24 + v13 + 24);
                    v14 = *(_BYTE **)(v24 + v13 + 16);
                    v15 = *(_BYTE *)(v24 + v13 + 9);
                    v86 = *(_BYTE *)(v24 + v13 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v9) = v24 + 40;
                if ( v24 + 40 <= v33 )
                {
LABEL_38:
                  if ( *(_BYTE *)(v24 + v13 + 10) )
                    v21 = (char *)(v24 + v13 + 24);
                  v14 = *(_BYTE **)(v24 + v13 + 16);
                  goto LABEL_27;
                }
              }
              if ( v87 )
                break;
            }
          }
          ++v32;
        }
        while ( v32 < v89 );
LABEL_35:
        v26 = v86;
LABEL_36:
        if ( !v21 )
          goto LABEL_93;
        v27 = *v21;
        v19 = 0;
LABEL_42:
        LOBYTE(v9) = v27 - 8;
        if ( (v9 & 0x5D) == 0 )
        {
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
              McTemplateK0pduuuuup_EtwWriteTransfer(
                v9,
                v13,
                (unsigned int)&v91,
                a2,
                *(_DWORD *)(a2 + 48),
                v28,
                v26,
                v16,
                v17,
                v18,
                a2);
            }
            goto LABEL_93;
          }
          v29 = *v14 & 0x7F;
          if ( v29 == 114 || v29 == 115 )
          {
            v9 = (unsigned __int64)&v14[v15];
            LOBYTE(v13) = 0;
            if ( (unsigned __int64)(v14 + 8) > v9 )
              goto LABEL_59;
            v18 = v14[3];
            v16 = v14[1] & 0xF;
            v17 = v14[2];
          }
          else
          {
            v9 = (unsigned __int64)&v14[v15];
            LOBYTE(v13) = 0;
            if ( (unsigned __int64)(v14 + 8) > v9 )
              goto LABEL_59;
            v30 = v14 + 13;
            v16 = v14[2] & 0xF;
            v31 = v15;
            if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
              v31 = (unsigned __int8)v14[7] + 8;
            v9 = (unsigned __int64)&v14[v31];
            if ( (unsigned __int64)v30 <= v9 )
              v17 = v14[12];
            if ( (unsigned __int64)(v14 + 14) > v9 )
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
LABEL_93:
        IofCompleteRequest((PIRP)a2, 0);
        return v90;
      }
LABEL_41:
      v26 = *(_BYTE *)(v13 + 4);
      v15 = *(_BYTE *)(v13 + 11);
      v14 = *(_BYTE **)(v13 + 32);
      v27 = *(_BYTE *)(v13 + 72);
      if ( v20 )
        goto LABEL_93;
      goto LABEL_42;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_93;
    v85 = *(_DWORD *)(a2 + 48);
LABEL_92:
    McTemplateK0pd_EtwWriteTransfer(v9, &EventNonReadWriteRequestComplete, &v91, a2, v85);
    goto LABEL_93;
  }
  if ( *(_DWORD *)v5 == 40 && *(_DWORD *)(v5 + 4) == 40 )
  {
    LOBYTE(v36) = 0;
    *(_OWORD *)(a1 + 2104) = *(_OWORD *)(v5 + 8);
    *(_DWORD *)v5 = 40;
    *(_DWORD *)(v5 + 4) = 40;
    *(_OWORD *)(v5 + 24) = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 5128LL);
    *(_QWORD *)(a2 + 56) = 40LL;
    if ( (unsigned int)dword_140172178 > 5 && (unsigned __int8)tlgKeywordOn(v6, 0x400000000000LL) )
    {
      v40 = *(_QWORD *)(v38 + 24);
      v94 = 16LL;
      v95 = v39;
      v96 = 16LL;
      v93 = v40 + 5128;
      v89 = *(_DWORD *)(v40 + 56);
      v97 = &v89;
      v88 = *(_BYTE *)(v38 + 104);
      v99 = &v88;
      v87 = *(_BYTE *)(v38 + 105);
      v101 = &v87;
      v86 = *(_BYTE *)(v38 + 106);
      v103 = &v86;
      v98 = 4LL;
      v100 = 1LL;
      v102 = 1LL;
      v104 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(v40, (unsigned __int8 *)dword_14016065A, v37, v38, 8u, &v92);
    }
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_165;
    v91 = 0LL;
    IoGetActivityIdIrp(a2, &v91);
    v42 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v42 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v44 = &EventNonReadWriteRequestComplete;
        goto LABEL_164;
      }
LABEL_165:
      IofCompleteRequest((PIRP)a2, 0);
      return 0LL;
    }
    if ( *(_BYTE *)v42 != 15 )
    {
      if ( *(_BYTE *)v42 == 27 )
      {
        if ( *(_BYTE *)(v42 + 1) == 7 && !*(_DWORD *)(v42 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v43 = *(int **)(a2 + 56);
            if ( v43 )
              v36 = *v43;
            McTemplateK0pqd_EtwWriteTransfer(v41, v42, (unsigned int)&v91, a2, v36, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_165;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v44 = &EventPnpRequestComplete;
LABEL_164:
          McTemplateK0pd_EtwWriteTransfer(v41, v44, &v91, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_165;
        }
      }
      goto LABEL_165;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_165;
    v45 = *(_QWORD *)(v42 + 8);
    v46 = 0LL;
    v86 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    if ( *(_BYTE *)(v45 + 2) == 40 )
    {
      v52 = 0LL;
      v87 = 0;
      if ( *(_DWORD *)(v45 + 20) )
        goto LABEL_165;
      v53 = 0;
      v89 = *(_DWORD *)(v45 + 56);
      if ( !v89 )
        goto LABEL_165;
      do
      {
        v41 = *(unsigned int *)(v45 + 4LL * v53 + 120);
        if ( (unsigned int)v41 >= 0x80 )
        {
          v54 = *(unsigned int *)(v45 + 16);
          if ( (unsigned int)v41 < (unsigned int)v54 )
          {
            v55 = (unsigned int)v41;
            v56 = *(_DWORD *)(v41 + v45) - 64;
            if ( v56 )
            {
              LODWORD(v41) = v56 - 1;
              if ( (_DWORD)v41 )
              {
                if ( (_DWORD)v41 == 1 )
                {
                  LODWORD(v41) = v55 + 40;
                  if ( v55 + 40 <= v54 )
                  {
                    if ( *(_DWORD *)(v55 + v45 + 12) )
                      v52 = (char *)(v55 + v45 + 32);
                    v46 = *(_BYTE **)(v55 + v45 + 24);
LABEL_124:
                    v57 = *(_BYTE *)(v55 + v45 + 8);
                    v47 = *(_BYTE *)(v55 + v45 + 9);
                    goto LABEL_133;
                  }
                }
              }
              else
              {
                LODWORD(v41) = v55 + 56;
                if ( v55 + 56 <= v54 )
                {
                  v87 = 1;
                  if ( *(_BYTE *)(v55 + v45 + 10) )
                    v52 = (char *)(v55 + v45 + 24);
                  v46 = *(_BYTE **)(v55 + v45 + 16);
                  v47 = *(_BYTE *)(v55 + v45 + 9);
                  v86 = *(_BYTE *)(v55 + v45 + 8);
                }
              }
            }
            else
            {
              LODWORD(v41) = v55 + 40;
              if ( v55 + 40 <= v54 )
              {
                if ( *(_BYTE *)(v55 + v45 + 10) )
                  v52 = (char *)(v55 + v45 + 24);
                v46 = *(_BYTE **)(v55 + v45 + 16);
                goto LABEL_124;
              }
            }
            if ( v87 )
              break;
          }
        }
        ++v53;
      }
      while ( v53 < v89 );
      v57 = v86;
LABEL_133:
      if ( !v52 )
        goto LABEL_165;
      v58 = *v52;
      v51 = 0;
    }
    else
    {
      v58 = *(_BYTE *)(v45 + 72);
      v46 = *(_BYTE **)(v45 + 32);
      v47 = *(_BYTE *)(v45 + 11);
      v57 = *(_BYTE *)(v45 + 4);
      if ( *(_BYTE *)(v45 + 2) )
        goto LABEL_165;
    }
    LOBYTE(v41) = v58 - 8;
    if ( (v41 & 0x5D) != 0 )
      goto LABEL_165;
    v59 = *(_BYTE *)(v45 + 3);
    if ( v59 == 1 || !v46 || !v47 )
    {
LABEL_158:
      if ( byte_140173441 < 0 )
      {
        if ( !v51 )
        {
          v50 = 0;
          v49 = 0;
          v48 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v41,
          v45,
          (unsigned int)&v91,
          a2,
          *(_DWORD *)(a2 + 48),
          v59,
          v57,
          v48,
          v49,
          v50,
          a2);
      }
      goto LABEL_165;
    }
    v60 = *v46 & 0x7F;
    if ( v60 == 114 || v60 == 115 )
    {
      v41 = (unsigned __int64)&v46[v47];
      LOBYTE(v45) = 0;
      if ( (unsigned __int64)(v46 + 8) > v41 )
        goto LABEL_156;
      v49 = v46[2];
      v48 = v46[1] & 0xF;
      v50 = v46[3];
    }
    else
    {
      v41 = (unsigned __int64)&v46[v47];
      LOBYTE(v45) = 0;
      if ( (unsigned __int64)(v46 + 8) > v41 )
        goto LABEL_156;
      v61 = v46 + 13;
      v48 = v46[2] & 0xF;
      v62 = v47;
      if ( (unsigned int)(unsigned __int8)v46[7] + 8 <= v47 )
        v62 = (unsigned __int8)v46[7] + 8;
      v41 = (unsigned __int64)&v46[v62];
      if ( (unsigned __int64)v61 <= v41 )
        v49 = v46[12];
      if ( (unsigned __int64)(v46 + 14) > v41 )
        v50 = 0;
      else
        v50 = *v61;
    }
    LOBYTE(v45) = 1;
LABEL_156:
    if ( (_BYTE)v45 )
      v51 = 1;
    goto LABEL_158;
  }
  LOBYTE(v63) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( !v8 )
  {
    v91 = 0LL;
    IoGetActivityIdIrp(a2, &v91);
    v65 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v65 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(
          *(unsigned int *)(a2 + 48),
          &EventNonReadWriteRequestComplete,
          &v91,
          a2,
          *(_DWORD *)(a2 + 48));
      goto LABEL_231;
    }
    if ( *(_BYTE *)v65 != 15 )
    {
      if ( *(_BYTE *)v65 == 27 )
      {
        if ( *(_BYTE *)(v65 + 1) != 7 || *(_DWORD *)(v65 + 8) )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v64, &EventPnpRequestComplete, &v91, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          v66 = *(int **)(a2 + 56);
          if ( v66 )
            v63 = *v66;
          McTemplateK0pqd_EtwWriteTransfer(v64, v65, (unsigned int)&v91, a2, v63, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_231;
    }
    if ( byte_140173441 < 0 )
    {
      v67 = *(_QWORD *)(v65 + 8);
      v68 = 0LL;
      v86 = 0;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      if ( *(_BYTE *)(v67 + 2) == 40 )
      {
        v74 = 0LL;
        v87 = 0;
        if ( *(_DWORD *)(v67 + 20) )
          goto LABEL_231;
        v75 = 0;
        v89 = *(_DWORD *)(v67 + 56);
        if ( !v89 )
          goto LABEL_231;
        do
        {
          v64 = *(unsigned int *)(v67 + 4LL * v75 + 120);
          if ( (unsigned int)v64 >= 0x80 )
          {
            v76 = *(unsigned int *)(v67 + 16);
            if ( (unsigned int)v64 < (unsigned int)v76 )
            {
              v77 = (unsigned int)v64;
              v78 = *(_DWORD *)(v67 + v64) - 64;
              if ( v78 )
              {
                LODWORD(v64) = v78 - 1;
                if ( (_DWORD)v64 )
                {
                  if ( (_DWORD)v64 == 1 )
                  {
                    LODWORD(v64) = v77 + 40;
                    if ( v77 + 40 <= v76 )
                    {
                      if ( *(_DWORD *)(v67 + v77 + 12) )
                        v74 = (char *)(v77 + v67 + 32);
                      v68 = *(_BYTE **)(v67 + v77 + 24);
LABEL_191:
                      v79 = *(_BYTE *)(v67 + v77 + 8);
                      v69 = *(_BYTE *)(v67 + v77 + 9);
                      goto LABEL_200;
                    }
                  }
                }
                else
                {
                  LODWORD(v64) = v77 + 56;
                  if ( v77 + 56 <= v76 )
                  {
                    v87 = 1;
                    if ( *(_BYTE *)(v67 + v77 + 10) )
                      v74 = (char *)(v77 + v67 + 24);
                    v68 = *(_BYTE **)(v67 + v77 + 16);
                    v69 = *(_BYTE *)(v67 + v77 + 9);
                    v86 = *(_BYTE *)(v67 + v77 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v64) = v77 + 40;
                if ( v77 + 40 <= v76 )
                {
                  if ( *(_BYTE *)(v67 + v77 + 10) )
                    v74 = (char *)(v77 + v67 + 24);
                  v68 = *(_BYTE **)(v67 + v77 + 16);
                  goto LABEL_191;
                }
              }
              if ( v87 )
                break;
            }
          }
          ++v75;
        }
        while ( v75 < v89 );
        v79 = v86;
LABEL_200:
        if ( !v74 )
          goto LABEL_231;
        v80 = *v74;
        v73 = 0;
      }
      else
      {
        v80 = *(_BYTE *)(v67 + 72);
        v68 = *(_BYTE **)(v67 + 32);
        v69 = *(_BYTE *)(v67 + 11);
        v79 = *(_BYTE *)(v67 + 4);
        if ( *(_BYTE *)(v67 + 2) )
          goto LABEL_231;
      }
      LOBYTE(v64) = v80 - 8;
      if ( (v64 & 0x5D) == 0 )
      {
        v81 = *(_BYTE *)(v67 + 3);
        if ( v81 == 1 || !v68 || !v69 )
        {
LABEL_225:
          if ( byte_140173441 < 0 )
          {
            if ( !v73 )
            {
              v72 = 0;
              v71 = 0;
              v70 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v64,
              v67,
              (unsigned int)&v91,
              a2,
              *(_DWORD *)(a2 + 48),
              v81,
              v79,
              v70,
              v71,
              v72,
              a2);
          }
          goto LABEL_231;
        }
        v82 = *v68 & 0x7F;
        if ( v82 == 114 || v82 == 115 )
        {
          v64 = (unsigned __int64)&v68[v69];
          LOBYTE(v67) = 0;
          if ( (unsigned __int64)(v68 + 8) > v64 )
            goto LABEL_223;
          v71 = v68[2];
          v70 = v68[1] & 0xF;
          v72 = v68[3];
        }
        else
        {
          v64 = (unsigned __int64)&v68[v69];
          LOBYTE(v67) = 0;
          if ( (unsigned __int64)(v68 + 8) > v64 )
            goto LABEL_223;
          v83 = v68 + 13;
          v70 = v68[2] & 0xF;
          v84 = v69;
          if ( (unsigned int)(unsigned __int8)v68[7] + 8 <= v69 )
            v84 = (unsigned __int8)v68[7] + 8;
          v64 = (unsigned __int64)&v68[v84];
          if ( (unsigned __int64)v83 <= v64 )
            v71 = v68[12];
          if ( (unsigned __int64)(v68 + 14) > v64 )
            v72 = 0;
          else
            v72 = *v83;
        }
        LOBYTE(v67) = 1;
LABEL_223:
        if ( (_BYTE)v67 )
          v73 = 1;
        goto LABEL_225;
      }
    }
  }
LABEL_231:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225485LL;
}
