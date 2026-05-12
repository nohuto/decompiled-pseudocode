/*
 * XREFs of NvmeNamespaceQueryFinalRemovePendingIoctl @ 0x14004D4FC
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceQueryFinalRemovePendingIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v4; // zf
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  unsigned __int8 *v7; // rdx
  int v8; // eax
  int *v9; // rax
  void *v10; // rdx
  __int64 v11; // rdx
  _BYTE *v12; // r9
  unsigned __int8 v13; // r14
  char v14; // r11
  char v15; // si
  char v16; // r10
  char v17; // r15
  char *v18; // r15
  unsigned int v19; // r13d
  unsigned __int64 v20; // r12
  __int64 v21; // r8
  int v22; // ecx
  char v23; // r12
  char v24; // cl
  char v25; // r8
  char v26; // al
  char *v27; // r10
  unsigned int v28; // eax
  __int64 v29; // rdx
  _BYTE *v30; // r9
  unsigned __int8 v31; // r14
  char v32; // r11
  char v33; // si
  char v34; // r10
  char v35; // r15
  char *v36; // r15
  unsigned int v37; // r13d
  unsigned __int64 v38; // r12
  __int64 v39; // r8
  int v40; // ecx
  char v41; // r12
  char v42; // cl
  char v43; // r8
  char v44; // al
  char *v45; // r10
  unsigned int v46; // eax
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  int *v49; // rcx
  int v50; // ecx
  void *v51; // rdx
  __int64 v52; // rdx
  _BYTE *v53; // r9
  unsigned __int8 v54; // r14
  char v55; // r11
  char v56; // si
  char v57; // r10
  char v58; // r15
  char *v59; // r15
  unsigned int v60; // r13d
  unsigned __int64 v61; // r12
  __int64 v62; // r8
  int v63; // ecx
  char v64; // r12
  char v65; // cl
  char v66; // r8
  char v67; // al
  char *v68; // r10
  unsigned int v69; // eax
  char v71; // [rsp+60h] [rbp-20h]
  char v72; // [rsp+60h] [rbp-20h]
  char v73; // [rsp+60h] [rbp-20h]
  char v74; // [rsp+61h] [rbp-1Fh]
  char v75; // [rsp+61h] [rbp-1Fh]
  char v76; // [rsp+61h] [rbp-1Fh]
  unsigned int v77; // [rsp+64h] [rbp-1Ch]
  unsigned int v78; // [rsp+64h] [rbp-1Ch]
  unsigned int v79; // [rsp+64h] [rbp-1Ch]
  __int128 v80; // [rsp+68h] [rbp-18h] BYREF

  LOBYTE(v2) = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v4 = StorEtwLoggingEnabled == 0;
    v5 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v4 )
      goto LABEL_193;
    v80 = 0LL;
    IoGetActivityIdIrp(a2, &v80);
    v7 = *(unsigned __int8 **)(a2 + 184);
    if ( *v7 != 14 )
    {
      v8 = *v7 - 15;
      if ( *v7 != 15 )
        goto LABEL_5;
      if ( byte_140173441 >= 0 )
        goto LABEL_193;
      v11 = *((_QWORD *)v7 + 1);
      v12 = 0LL;
      v71 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      if ( *(_BYTE *)(v11 + 2) == 40 )
      {
        v18 = 0LL;
        v74 = 0;
        if ( *(_DWORD *)(v11 + 20) )
          goto LABEL_66;
        v19 = 0;
        v77 = *(_DWORD *)(v11 + 56);
        if ( !v77 )
          goto LABEL_66;
        do
        {
          v6 = *(unsigned int *)(v11 + 4LL * v19 + 120);
          if ( (unsigned int)v6 >= 0x80 )
          {
            v20 = *(unsigned int *)(v11 + 16);
            if ( (unsigned int)v6 < (unsigned int)v20 )
            {
              v21 = (unsigned int)v6;
              v22 = *(_DWORD *)(v6 + v11) - 64;
              if ( v22 )
              {
                LODWORD(v6) = v22 - 1;
                if ( (_DWORD)v6 )
                {
                  if ( (_DWORD)v6 == 1 )
                  {
                    LODWORD(v6) = v21 + 40;
                    if ( v21 + 40 <= v20 )
                    {
                      if ( *(_DWORD *)(v21 + v11 + 12) )
                        v18 = (char *)(v21 + v11 + 32);
                      v12 = *(_BYTE **)(v21 + v11 + 24);
LABEL_28:
                      v23 = *(_BYTE *)(v21 + v11 + 8);
                      v13 = *(_BYTE *)(v21 + v11 + 9);
                      goto LABEL_37;
                    }
                  }
                }
                else
                {
                  LODWORD(v6) = v21 + 56;
                  if ( v21 + 56 <= v20 )
                  {
                    v74 = 1;
                    if ( *(_BYTE *)(v21 + v11 + 10) )
                      v18 = (char *)(v21 + v11 + 24);
                    v12 = *(_BYTE **)(v21 + v11 + 16);
                    v13 = *(_BYTE *)(v21 + v11 + 9);
                    v71 = *(_BYTE *)(v21 + v11 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v6) = v21 + 40;
                if ( v21 + 40 <= v20 )
                {
                  if ( *(_BYTE *)(v21 + v11 + 10) )
                    v18 = (char *)(v21 + v11 + 24);
                  v12 = *(_BYTE **)(v21 + v11 + 16);
                  goto LABEL_28;
                }
              }
              if ( v74 )
                break;
            }
          }
          ++v19;
        }
        while ( v19 < v77 );
        v23 = v71;
LABEL_37:
        if ( !v18 )
          goto LABEL_66;
        v24 = *v18;
        v17 = 0;
      }
      else
      {
        v24 = *(_BYTE *)(v11 + 72);
        v12 = *(_BYTE **)(v11 + 32);
        v13 = *(_BYTE *)(v11 + 11);
        v23 = *(_BYTE *)(v11 + 4);
        if ( *(_BYTE *)(v11 + 2) )
          goto LABEL_66;
      }
      LOBYTE(v6) = v24 - 8;
      if ( (v6 & 0x5D) == 0 )
      {
        v25 = *(_BYTE *)(v11 + 3);
        if ( v25 == 1 || !v12 || !v13 )
        {
LABEL_62:
          if ( byte_140173441 < 0 )
          {
            if ( !v17 )
            {
              v16 = 0;
              v15 = 0;
              v14 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v6,
              v11,
              (unsigned int)&v80,
              a2,
              *(_DWORD *)(a2 + 48),
              v25,
              v23,
              v14,
              v15,
              v16,
              a2);
          }
          goto LABEL_66;
        }
        v26 = *v12 & 0x7F;
        if ( v26 == 114 || v26 == 115 )
        {
          v6 = (unsigned __int64)&v12[v13];
          LOBYTE(v11) = 0;
          if ( (unsigned __int64)(v12 + 8) > v6 )
            goto LABEL_60;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
        else
        {
          v6 = (unsigned __int64)&v12[v13];
          LOBYTE(v11) = 0;
          if ( (unsigned __int64)(v12 + 8) > v6 )
            goto LABEL_60;
          v27 = v12 + 13;
          v14 = v12[2] & 0xF;
          v28 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v28 = (unsigned __int8)v12[7] + 8;
          v6 = (unsigned __int64)&v12[v28];
          if ( (unsigned __int64)v27 <= v6 )
            v15 = v12[12];
          if ( (unsigned __int64)(v12 + 14) > v6 )
            v16 = 0;
          else
            v16 = *v27;
        }
        LOBYTE(v11) = 1;
LABEL_60:
        if ( (_BYTE)v11 )
          v17 = 1;
        goto LABEL_62;
      }
LABEL_66:
      v5 = -1073741808;
      goto LABEL_193;
    }
LABEL_67:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_193;
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
  {
    v4 = StorEtwLoggingEnabled == 0;
    **(_BYTE **)(a2 + 24) = (*(_BYTE *)(a1 + 112) & 2) == 0;
    *(_QWORD *)(a2 + 56) = 1LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v4 )
      goto LABEL_192;
    v80 = 0LL;
    IoGetActivityIdIrp(a2, &v80);
    v48 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v48 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v51 = &EventNonReadWriteRequestComplete;
        goto LABEL_191;
      }
LABEL_192:
      v5 = 0;
      goto LABEL_193;
    }
    if ( *(_BYTE *)v48 != 15 )
    {
      if ( *(_BYTE *)v48 == 27 )
      {
        if ( *(_BYTE *)(v48 + 1) == 7 && !*(_DWORD *)(v48 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v49 = *(int **)(a2 + 56);
            if ( v49 )
              v50 = *v49;
            else
              v50 = 0;
            McTemplateK0pqd_EtwWriteTransfer(v50, v48, (unsigned int)&v80, a2, v50, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_192;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v51 = &EventPnpRequestComplete;
LABEL_191:
          McTemplateK0pd_EtwWriteTransfer(v47, v51, &v80, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_192;
        }
      }
      goto LABEL_192;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_192;
    v52 = *(_QWORD *)(v48 + 8);
    v53 = 0LL;
    v73 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    if ( *(_BYTE *)(v52 + 2) == 40 )
    {
      v59 = 0LL;
      v76 = 0;
      if ( *(_DWORD *)(v52 + 20) )
        goto LABEL_192;
      v60 = 0;
      v79 = *(_DWORD *)(v52 + 56);
      if ( !v79 )
        goto LABEL_192;
      do
      {
        v47 = *(unsigned int *)(v52 + 4LL * v60 + 120);
        if ( (unsigned int)v47 >= 0x80 )
        {
          v61 = *(unsigned int *)(v52 + 16);
          if ( (unsigned int)v47 < (unsigned int)v61 )
          {
            v62 = (unsigned int)v47;
            v63 = *(_DWORD *)(v47 + v52) - 64;
            if ( v63 )
            {
              LODWORD(v47) = v63 - 1;
              if ( (_DWORD)v47 )
              {
                if ( (_DWORD)v47 == 1 )
                {
                  LODWORD(v47) = v62 + 40;
                  if ( v62 + 40 <= v61 )
                  {
                    if ( *(_DWORD *)(v62 + v52 + 12) )
                      v59 = (char *)(v62 + v52 + 32);
                    v53 = *(_BYTE **)(v62 + v52 + 24);
LABEL_151:
                    v64 = *(_BYTE *)(v62 + v52 + 8);
                    v54 = *(_BYTE *)(v62 + v52 + 9);
                    goto LABEL_160;
                  }
                }
              }
              else
              {
                LODWORD(v47) = v62 + 56;
                if ( v62 + 56 <= v61 )
                {
                  v76 = 1;
                  if ( *(_BYTE *)(v62 + v52 + 10) )
                    v59 = (char *)(v62 + v52 + 24);
                  v53 = *(_BYTE **)(v62 + v52 + 16);
                  v54 = *(_BYTE *)(v62 + v52 + 9);
                  v73 = *(_BYTE *)(v62 + v52 + 8);
                }
              }
            }
            else
            {
              LODWORD(v47) = v62 + 40;
              if ( v62 + 40 <= v61 )
              {
                if ( *(_BYTE *)(v62 + v52 + 10) )
                  v59 = (char *)(v62 + v52 + 24);
                v53 = *(_BYTE **)(v62 + v52 + 16);
                goto LABEL_151;
              }
            }
            if ( v76 )
              break;
          }
        }
        ++v60;
      }
      while ( v60 < v79 );
      v64 = v73;
LABEL_160:
      if ( !v59 )
        goto LABEL_192;
      v65 = *v59;
      v58 = 0;
    }
    else
    {
      v65 = *(_BYTE *)(v52 + 72);
      v53 = *(_BYTE **)(v52 + 32);
      v54 = *(_BYTE *)(v52 + 11);
      v64 = *(_BYTE *)(v52 + 4);
      if ( *(_BYTE *)(v52 + 2) )
        goto LABEL_192;
    }
    LOBYTE(v47) = v65 - 8;
    if ( (v47 & 0x5D) != 0 )
      goto LABEL_192;
    v66 = *(_BYTE *)(v52 + 3);
    if ( v66 == 1 || !v53 || !v54 )
    {
LABEL_185:
      if ( byte_140173441 < 0 )
      {
        if ( !v58 )
        {
          v57 = 0;
          v56 = 0;
          v55 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v47,
          v52,
          (unsigned int)&v80,
          a2,
          *(_DWORD *)(a2 + 48),
          v66,
          v64,
          v55,
          v56,
          v57,
          a2);
      }
      goto LABEL_192;
    }
    v67 = *v53 & 0x7F;
    if ( v67 == 114 || v67 == 115 )
    {
      v47 = (unsigned __int64)&v53[v54];
      LOBYTE(v52) = 0;
      if ( (unsigned __int64)(v53 + 8) > v47 )
        goto LABEL_183;
      v56 = v53[2];
      v55 = v53[1] & 0xF;
      v57 = v53[3];
    }
    else
    {
      v47 = (unsigned __int64)&v53[v54];
      LOBYTE(v52) = 0;
      if ( (unsigned __int64)(v53 + 8) > v47 )
        goto LABEL_183;
      v68 = v53 + 13;
      v55 = v53[2] & 0xF;
      v69 = v54;
      if ( (unsigned int)(unsigned __int8)v53[7] + 8 <= v54 )
        v69 = (unsigned __int8)v53[7] + 8;
      v47 = (unsigned __int64)&v53[v69];
      if ( (unsigned __int64)v68 <= v47 )
        v56 = v53[12];
      if ( (unsigned __int64)(v53 + 14) > v47 )
        v57 = 0;
      else
        v57 = *v68;
    }
    LOBYTE(v52) = 1;
LABEL_183:
    if ( (_BYTE)v52 )
      v58 = 1;
    goto LABEL_185;
  }
  v4 = StorEtwLoggingEnabled == 0;
  v5 = -1073741789;
  *(_DWORD *)(a2 + 48) = -1073741789;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v4 )
    goto LABEL_193;
  v80 = 0LL;
  IoGetActivityIdIrp(a2, &v80);
  v7 = *(unsigned __int8 **)(a2 + 184);
  if ( *v7 == 14 )
    goto LABEL_67;
  v8 = *v7 - 15;
  if ( *v7 == 15 )
  {
    if ( byte_140173441 >= 0 )
      goto LABEL_193;
    v29 = *((_QWORD *)v7 + 1);
    v30 = 0LL;
    v72 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    if ( *(_BYTE *)(v29 + 2) == 40 )
    {
      v36 = 0LL;
      v75 = 0;
      if ( *(_DWORD *)(v29 + 20) )
        goto LABEL_124;
      v37 = 0;
      v78 = *(_DWORD *)(v29 + 56);
      if ( !v78 )
        goto LABEL_124;
      do
      {
        v6 = *(unsigned int *)(v29 + 4LL * v37 + 120);
        if ( (unsigned int)v6 >= 0x80 )
        {
          v38 = *(unsigned int *)(v29 + 16);
          if ( (unsigned int)v6 < (unsigned int)v38 )
          {
            v39 = (unsigned int)v6;
            v40 = *(_DWORD *)(v6 + v29) - 64;
            if ( v40 )
            {
              LODWORD(v6) = v40 - 1;
              if ( (_DWORD)v6 )
              {
                if ( (_DWORD)v6 == 1 )
                {
                  LODWORD(v6) = v39 + 40;
                  if ( v39 + 40 <= v38 )
                  {
                    if ( *(_DWORD *)(v39 + v29 + 12) )
                      v36 = (char *)(v39 + v29 + 32);
                    v30 = *(_BYTE **)(v39 + v29 + 24);
LABEL_86:
                    v41 = *(_BYTE *)(v39 + v29 + 8);
                    v31 = *(_BYTE *)(v39 + v29 + 9);
                    goto LABEL_95;
                  }
                }
              }
              else
              {
                LODWORD(v6) = v39 + 56;
                if ( v39 + 56 <= v38 )
                {
                  v75 = 1;
                  if ( *(_BYTE *)(v39 + v29 + 10) )
                    v36 = (char *)(v39 + v29 + 24);
                  v30 = *(_BYTE **)(v39 + v29 + 16);
                  v31 = *(_BYTE *)(v39 + v29 + 9);
                  v72 = *(_BYTE *)(v39 + v29 + 8);
                }
              }
            }
            else
            {
              LODWORD(v6) = v39 + 40;
              if ( v39 + 40 <= v38 )
              {
                if ( *(_BYTE *)(v39 + v29 + 10) )
                  v36 = (char *)(v39 + v29 + 24);
                v30 = *(_BYTE **)(v39 + v29 + 16);
                goto LABEL_86;
              }
            }
            if ( v75 )
              break;
          }
        }
        ++v37;
      }
      while ( v37 < v78 );
      v41 = v72;
LABEL_95:
      if ( !v36 )
        goto LABEL_124;
      v42 = *v36;
      v35 = 0;
    }
    else
    {
      v42 = *(_BYTE *)(v29 + 72);
      v30 = *(_BYTE **)(v29 + 32);
      v31 = *(_BYTE *)(v29 + 11);
      v41 = *(_BYTE *)(v29 + 4);
      if ( *(_BYTE *)(v29 + 2) )
        goto LABEL_124;
    }
    LOBYTE(v6) = v42 - 8;
    if ( (v6 & 0x5D) == 0 )
    {
      v43 = *(_BYTE *)(v29 + 3);
      if ( v43 == 1 || !v30 || !v31 )
      {
LABEL_120:
        if ( byte_140173441 < 0 )
        {
          if ( !v35 )
          {
            v34 = 0;
            v33 = 0;
            v32 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v6,
            v29,
            (unsigned int)&v80,
            a2,
            *(_DWORD *)(a2 + 48),
            v43,
            v41,
            v32,
            v33,
            v34,
            a2);
        }
        goto LABEL_124;
      }
      v44 = *v30 & 0x7F;
      if ( v44 == 114 || v44 == 115 )
      {
        v6 = (unsigned __int64)&v30[v31];
        LOBYTE(v29) = 0;
        if ( (unsigned __int64)(v30 + 8) > v6 )
          goto LABEL_118;
        v33 = v30[2];
        v32 = v30[1] & 0xF;
        v34 = v30[3];
      }
      else
      {
        v6 = (unsigned __int64)&v30[v31];
        LOBYTE(v29) = 0;
        if ( (unsigned __int64)(v30 + 8) > v6 )
          goto LABEL_118;
        v45 = v30 + 13;
        v32 = v30[2] & 0xF;
        v46 = v31;
        if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
          v46 = (unsigned __int8)v30[7] + 8;
        v6 = (unsigned __int64)&v30[v46];
        if ( (unsigned __int64)v45 <= v6 )
          v33 = v30[12];
        if ( (unsigned __int64)(v30 + 14) > v6 )
          v34 = 0;
        else
          v34 = *v45;
      }
      LOBYTE(v29) = 1;
LABEL_118:
      if ( (_BYTE)v29 )
        v35 = 1;
      goto LABEL_120;
    }
LABEL_124:
    v5 = -1073741789;
    goto LABEL_193;
  }
LABEL_5:
  if ( v8 != 12 )
    goto LABEL_193;
  if ( v7[1] != 7 || *((_DWORD *)v7 + 2) )
  {
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_193;
    v10 = &EventPnpRequestComplete;
LABEL_14:
    McTemplateK0pd_EtwWriteTransfer(v6, v10, &v80, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_193;
  }
  if ( (byte_140173442 & 0x40) != 0 )
  {
    v9 = *(int **)(a2 + 56);
    if ( v9 )
      v2 = *v9;
    McTemplateK0pqd_EtwWriteTransfer(v6, (_DWORD)v7, (unsigned int)&v80, a2, v2, *(_DWORD *)(a2 + 48));
  }
LABEL_193:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
