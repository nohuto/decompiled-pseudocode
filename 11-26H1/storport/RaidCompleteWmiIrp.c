/*
 * XREFs of RaidCompleteWmiIrp @ 0x14004E19C
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaidCompleteWmiIrp(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v2; // rcx
  int v4; // eax
  int v5; // ebx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
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
  unsigned __int64 v30; // rcx
  unsigned __int8 *v31; // rdx
  int v32; // eax
  int *v33; // rax
  void *v34; // rdx
  __int64 v35; // rdx
  _BYTE *v36; // r9
  unsigned __int8 v37; // r14
  char v38; // r11
  char v39; // si
  char v40; // r10
  char v41; // r15
  int v42; // eax
  char *v43; // r15
  unsigned int v44; // r13d
  unsigned __int64 v45; // r12
  __int64 v46; // r8
  int v47; // ecx
  char v48; // r12
  char v49; // cl
  char v50; // r8
  char v51; // al
  char *v52; // r10
  unsigned int v53; // eax
  unsigned int v54; // r13d
  unsigned __int64 v55; // r12
  int v56; // ecx
  unsigned int v57; // r13d
  unsigned __int64 v58; // r12
  __int64 v59; // r8
  int v60; // ecx
  __int64 v61; // rax
  char v62; // [rsp+60h] [rbp-9h]
  char v63; // [rsp+60h] [rbp-9h]
  char v64; // [rsp+61h] [rbp-8h]
  char v65; // [rsp+61h] [rbp-8h]
  char v66; // [rsp+61h] [rbp-8h]
  char v67; // [rsp+61h] [rbp-8h]
  unsigned int v68; // [rsp+64h] [rbp-5h]
  int v69; // [rsp+64h] [rbp-5h]
  unsigned int v70; // [rsp+68h] [rbp-1h]
  unsigned int v71; // [rsp+68h] [rbp-1h]
  unsigned int v72; // [rsp+68h] [rbp-1h]
  __int128 v73; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(PDEVICE_OBJECT **)(a1 + 64);
  v4 = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 == 1094997074 || v4 == 1314275652 )
  {
    v61 = *(_QWORD *)(a2 + 184);
    *(_OWORD *)(v61 - 72) = *(_OWORD *)v61;
    *(_OWORD *)(v61 - 56) = *(_OWORD *)(v61 + 16);
    *(_OWORD *)(v61 - 40) = *(_OWORD *)(v61 + 32);
    *(_QWORD *)(v61 - 24) = *(_QWORD *)(v61 + 48);
    *(_BYTE *)(v61 - 69) = 0;
    return IofCallDriver(v2[3], (PIRP)a2);
  }
  LOBYTE(v5) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  switch ( v4 )
  {
    case 1314278989:
      v6 = StorEtwLoggingEnabled == 0;
      v69 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 48) = v69;
      if ( v6 )
        goto LABEL_139;
      v73 = 0LL;
      IoGetActivityIdIrp(a2, &v73);
      v31 = *(unsigned __int8 **)(a2 + 184);
      if ( *v31 == 14 )
        goto LABEL_136;
      v32 = *v31 - 15;
      if ( *v31 != 15 )
        goto LABEL_76;
      if ( byte_140173441 >= 0 )
        goto LABEL_139;
      v35 = *((_QWORD *)v31 + 1);
      v36 = 0LL;
      v63 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = *(unsigned __int8 *)(v35 + 2);
      if ( (_BYTE)v42 == 40 )
      {
        v43 = 0LL;
        v67 = 0;
        if ( *(_DWORD *)(v35 + 20) )
          goto LABEL_139;
        v57 = 0;
        v72 = *(_DWORD *)(v35 + 56);
        if ( !v72 )
          goto LABEL_139;
        while ( 1 )
        {
          v30 = *(unsigned int *)(v35 + 4LL * v57 + 120);
          if ( (unsigned int)v30 >= 0x80 )
          {
            v58 = *(unsigned int *)(v35 + 16);
            if ( (unsigned int)v30 < (unsigned int)v58 )
            {
              v59 = (unsigned int)v30;
              v60 = *(_DWORD *)(v35 + v30) - 64;
              if ( v60 )
              {
                LODWORD(v30) = v60 - 1;
                if ( (_DWORD)v30 )
                {
                  if ( (_DWORD)v30 == 1 )
                  {
                    LODWORD(v30) = v59 + 40;
                    if ( v59 + 40 <= v58 )
                    {
                      if ( *(_DWORD *)(v35 + v59 + 12) )
                        v43 = (char *)(v59 + v35 + 32);
                      v36 = *(_BYTE **)(v35 + v59 + 24);
LABEL_178:
                      v48 = *(_BYTE *)(v35 + v59 + 8);
                      v37 = *(_BYTE *)(v35 + v59 + 9);
                      goto LABEL_107;
                    }
                  }
                }
                else
                {
                  LODWORD(v30) = v59 + 56;
                  if ( v59 + 56 <= v58 )
                  {
                    v67 = 1;
                    if ( *(_BYTE *)(v35 + v59 + 10) )
                      v43 = (char *)(v59 + v35 + 24);
                    v36 = *(_BYTE **)(v35 + v59 + 16);
                    v37 = *(_BYTE *)(v35 + v59 + 9);
                    v63 = *(_BYTE *)(v35 + v59 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v30) = v59 + 40;
                if ( v59 + 40 <= v58 )
                {
                  if ( *(_BYTE *)(v35 + v59 + 10) )
                    v43 = (char *)(v59 + v35 + 24);
                  v36 = *(_BYTE **)(v35 + v59 + 16);
                  goto LABEL_178;
                }
              }
              if ( v67 )
                goto LABEL_106;
            }
          }
          if ( ++v57 >= v72 )
          {
LABEL_106:
            v48 = v63;
            goto LABEL_107;
          }
        }
      }
      break;
    case 1396916560:
      v6 = StorEtwLoggingEnabled == 0;
      v69 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 48) = v69;
      if ( v6 )
        goto LABEL_139;
      v73 = 0LL;
      IoGetActivityIdIrp(a2, &v73);
      v31 = *(unsigned __int8 **)(a2 + 184);
      if ( *v31 == 14 )
        goto LABEL_136;
      v32 = *v31 - 15;
      if ( *v31 != 15 )
        goto LABEL_76;
      if ( byte_140173441 >= 0 )
        goto LABEL_139;
      v35 = *((_QWORD *)v31 + 1);
      v36 = 0LL;
      v63 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = *(unsigned __int8 *)(v35 + 2);
      if ( (_BYTE)v42 == 40 )
      {
        v43 = 0LL;
        v66 = 0;
        if ( *(_DWORD *)(v35 + 20) )
          goto LABEL_139;
        v54 = 0;
        v71 = *(_DWORD *)(v35 + 56);
        if ( !v71 )
          goto LABEL_139;
        while ( 1 )
        {
          v30 = *(unsigned int *)(v35 + 4LL * v54 + 120);
          if ( (unsigned int)v30 >= 0x80 )
          {
            v55 = *(unsigned int *)(v35 + 16);
            if ( (unsigned int)v30 < (unsigned int)v55 )
            {
              v46 = (unsigned int)v30;
              v56 = *(_DWORD *)(v30 + v35) - 64;
              if ( v56 )
              {
                LODWORD(v30) = v56 - 1;
                if ( (_DWORD)v30 )
                {
                  if ( (_DWORD)v30 == 1 )
                  {
                    LODWORD(v30) = v46 + 40;
                    if ( v46 + 40 <= v55 )
                    {
LABEL_95:
                      if ( *(_DWORD *)(v46 + v35 + 12) )
                        v43 = (char *)(v46 + v35 + 32);
                      v36 = *(_BYTE **)(v46 + v35 + 24);
                      goto LABEL_98;
                    }
                  }
                }
                else
                {
                  LODWORD(v30) = v46 + 56;
                  if ( v46 + 56 <= v55 )
                  {
                    v66 = 1;
                    if ( *(_BYTE *)(v46 + v35 + 10) )
                      v43 = (char *)(v46 + v35 + 24);
                    v36 = *(_BYTE **)(v46 + v35 + 16);
                    v37 = *(_BYTE *)(v46 + v35 + 9);
                    v63 = *(_BYTE *)(v46 + v35 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v30) = v46 + 40;
                if ( v46 + 40 <= v55 )
                {
LABEL_109:
                  if ( *(_BYTE *)(v46 + v35 + 10) )
                    v43 = (char *)(v46 + v35 + 24);
                  v36 = *(_BYTE **)(v46 + v35 + 16);
LABEL_98:
                  v48 = *(_BYTE *)(v46 + v35 + 8);
                  v37 = *(_BYTE *)(v46 + v35 + 9);
LABEL_107:
                  if ( v43 )
                  {
                    v49 = *v43;
                    v41 = 0;
                    goto LABEL_113;
                  }
                  goto LABEL_139;
                }
              }
              if ( v66 )
                goto LABEL_106;
            }
          }
          if ( ++v54 >= v71 )
            goto LABEL_106;
        }
      }
      break;
    case 1431193940:
      v6 = StorEtwLoggingEnabled == 0;
      v69 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 48) = v69;
      if ( v6 )
        goto LABEL_139;
      v73 = 0LL;
      IoGetActivityIdIrp(a2, &v73);
      v31 = *(unsigned __int8 **)(a2 + 184);
      if ( *v31 != 14 )
      {
        v32 = *v31 - 15;
        if ( *v31 != 15 )
        {
LABEL_76:
          if ( v32 != 12 )
            goto LABEL_139;
          if ( v31[1] == 7 && !*((_DWORD *)v31 + 2) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v33 = *(int **)(a2 + 56);
              if ( v33 )
                v5 = *v33;
              McTemplateK0pqd_EtwWriteTransfer(v30, (_DWORD)v31, (unsigned int)&v73, a2, v5, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_139;
          }
          if ( (byte_140173442 & 0x20) == 0 )
            goto LABEL_139;
          v34 = &EventPnpRequestComplete;
LABEL_138:
          McTemplateK0pd_EtwWriteTransfer(v30, v34, &v73, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_139;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_139;
        v35 = *((_QWORD *)v31 + 1);
        v36 = 0LL;
        v63 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v42 = *(unsigned __int8 *)(v35 + 2);
        if ( (_BYTE)v42 == 40 )
        {
          v43 = 0LL;
          v65 = 0;
          if ( !*(_DWORD *)(v35 + 20) )
          {
            v44 = 0;
            v70 = *(_DWORD *)(v35 + 56);
            if ( v70 )
            {
              while ( 1 )
              {
                v30 = *(unsigned int *)(v35 + 4LL * v44 + 120);
                if ( (unsigned int)v30 >= 0x80 )
                {
                  v45 = *(unsigned int *)(v35 + 16);
                  if ( (unsigned int)v30 < (unsigned int)v45 )
                  {
                    v46 = (unsigned int)v30;
                    v47 = *(_DWORD *)(v30 + v35) - 64;
                    if ( v47 )
                    {
                      LODWORD(v30) = v47 - 1;
                      if ( (_DWORD)v30 )
                      {
                        if ( (_DWORD)v30 == 1 )
                        {
                          LODWORD(v30) = v46 + 40;
                          if ( v46 + 40 <= v45 )
                            goto LABEL_95;
                        }
                      }
                      else
                      {
                        LODWORD(v30) = v46 + 56;
                        if ( v46 + 56 <= v45 )
                        {
                          v65 = 1;
                          if ( *(_BYTE *)(v46 + v35 + 10) )
                            v43 = (char *)(v46 + v35 + 24);
                          v36 = *(_BYTE **)(v46 + v35 + 16);
                          v37 = *(_BYTE *)(v46 + v35 + 9);
                          v63 = *(_BYTE *)(v46 + v35 + 8);
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v30) = v46 + 40;
                      if ( v46 + 40 <= v45 )
                        goto LABEL_109;
                    }
                    if ( v65 )
                      goto LABEL_106;
                  }
                }
                if ( ++v44 >= v70 )
                  goto LABEL_106;
              }
            }
          }
          goto LABEL_139;
        }
        break;
      }
LABEL_136:
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_139;
      v34 = &EventNonReadWriteRequestComplete;
      goto LABEL_138;
    default:
      v6 = StorEtwLoggingEnabled == 0;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v6 )
        goto LABEL_72;
      v73 = 0LL;
      IoGetActivityIdIrp(a2, &v73);
      v8 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v8 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
        {
          v10 = &EventNonReadWriteRequestComplete;
          goto LABEL_71;
        }
LABEL_72:
        IofCompleteRequest((PIRP)a2, 0);
        return -1073741811;
      }
      if ( *(_BYTE *)v8 != 15 )
      {
        if ( *(_BYTE *)v8 == 27 )
        {
          if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v9 = *(int **)(a2 + 56);
              if ( v9 )
                v5 = *v9;
              McTemplateK0pqd_EtwWriteTransfer(v7, v8, (unsigned int)&v73, a2, v5, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_72;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v10 = &EventPnpRequestComplete;
LABEL_71:
            McTemplateK0pd_EtwWriteTransfer(v7, v10, &v73, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_72;
          }
        }
        goto LABEL_72;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_72;
      v11 = *(_QWORD *)(v8 + 8);
      v12 = 0LL;
      v62 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      if ( *(_BYTE *)(v11 + 2) == 40 )
      {
        v18 = 0LL;
        v64 = 0;
        if ( *(_DWORD *)(v11 + 20) )
          goto LABEL_72;
        v19 = 0;
        v68 = *(_DWORD *)(v11 + 56);
        if ( !v68 )
          goto LABEL_72;
        do
        {
          v7 = *(unsigned int *)(v11 + 4LL * v19 + 120);
          if ( (unsigned int)v7 >= 0x80 )
          {
            v20 = *(unsigned int *)(v11 + 16);
            if ( (unsigned int)v7 < (unsigned int)v20 )
            {
              v21 = (unsigned int)v7;
              v22 = *(_DWORD *)(v11 + v7) - 64;
              if ( v22 )
              {
                LODWORD(v7) = v22 - 1;
                if ( (_DWORD)v7 )
                {
                  if ( (_DWORD)v7 == 1 )
                  {
                    LODWORD(v7) = v21 + 40;
                    if ( v21 + 40 <= v20 )
                    {
                      if ( *(_DWORD *)(v11 + v21 + 12) )
                        v18 = (char *)(v21 + v11 + 32);
                      v12 = *(_BYTE **)(v11 + v21 + 24);
LABEL_31:
                      v23 = *(_BYTE *)(v11 + v21 + 8);
                      v13 = *(_BYTE *)(v11 + v21 + 9);
                      goto LABEL_40;
                    }
                  }
                }
                else
                {
                  LODWORD(v7) = v21 + 56;
                  if ( v21 + 56 <= v20 )
                  {
                    v64 = 1;
                    if ( *(_BYTE *)(v11 + v21 + 10) )
                      v18 = (char *)(v21 + v11 + 24);
                    v12 = *(_BYTE **)(v11 + v21 + 16);
                    v13 = *(_BYTE *)(v11 + v21 + 9);
                    v62 = *(_BYTE *)(v11 + v21 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v7) = v21 + 40;
                if ( v21 + 40 <= v20 )
                {
                  if ( *(_BYTE *)(v11 + v21 + 10) )
                    v18 = (char *)(v21 + v11 + 24);
                  v12 = *(_BYTE **)(v11 + v21 + 16);
                  goto LABEL_31;
                }
              }
              if ( v64 )
                break;
            }
          }
          ++v19;
        }
        while ( v19 < v68 );
        v23 = v62;
LABEL_40:
        if ( !v18 )
          goto LABEL_72;
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
          goto LABEL_72;
      }
      LOBYTE(v7) = v24 - 8;
      if ( (v7 & 0x5D) != 0 )
        goto LABEL_72;
      v25 = *(_BYTE *)(v11 + 3);
      if ( v25 == 1 || !v12 || !v13 )
      {
LABEL_65:
        if ( byte_140173441 < 0 )
        {
          if ( !v17 )
          {
            v16 = 0;
            v15 = 0;
            v14 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v7,
            v11,
            (unsigned int)&v73,
            a2,
            *(_DWORD *)(a2 + 48),
            v25,
            v23,
            v14,
            v15,
            v16,
            a2);
        }
        goto LABEL_72;
      }
      v26 = *v12 & 0x7F;
      if ( v26 == 114 || v26 == 115 )
      {
        v7 = (unsigned __int64)&v12[v13];
        LOBYTE(v11) = 0;
        if ( (unsigned __int64)(v12 + 8) > v7 )
          goto LABEL_63;
        v15 = v12[2];
        v14 = v12[1] & 0xF;
        v16 = v12[3];
      }
      else
      {
        v7 = (unsigned __int64)&v12[v13];
        LOBYTE(v11) = 0;
        if ( (unsigned __int64)(v12 + 8) > v7 )
          goto LABEL_63;
        v27 = v12 + 13;
        v14 = v12[2] & 0xF;
        v28 = v13;
        if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
          v28 = (unsigned __int8)v12[7] + 8;
        v7 = (unsigned __int64)&v12[v28];
        if ( (unsigned __int64)v27 <= v7 )
          v15 = v12[12];
        if ( (unsigned __int64)(v12 + 14) > v7 )
          v16 = 0;
        else
          v16 = *v27;
      }
      LOBYTE(v11) = 1;
LABEL_63:
      if ( (_BYTE)v11 )
        v17 = 1;
      goto LABEL_65;
  }
  v49 = *(_BYTE *)(v35 + 72);
  v36 = *(_BYTE **)(v35 + 32);
  v37 = *(_BYTE *)(v35 + 11);
  v48 = *(_BYTE *)(v35 + 4);
  if ( v42 )
    goto LABEL_139;
LABEL_113:
  LOBYTE(v30) = v49 - 8;
  if ( (v30 & 0x5D) == 0 )
  {
    v50 = *(_BYTE *)(v35 + 3);
    if ( v50 == 1 || !v36 || !v37 )
    {
LABEL_132:
      if ( byte_140173441 < 0 )
      {
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v30,
          v35,
          (unsigned int)&v73,
          a2,
          *(_DWORD *)(a2 + 48),
          v50,
          v48,
          v38,
          v39,
          v40,
          a2);
      }
      goto LABEL_139;
    }
    v51 = *v36 & 0x7F;
    if ( v51 == 114 || v51 == 115 )
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_130;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_130;
      v52 = v36 + 13;
      v38 = v36[2] & 0xF;
      v53 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v53 = (unsigned __int8)v36[7] + 8;
      v30 = (unsigned __int64)&v36[v53];
      if ( (unsigned __int64)v52 <= v30 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v30 )
        v40 = 0;
      else
        v40 = *v52;
    }
    LOBYTE(v35) = 1;
LABEL_130:
    if ( (_BYTE)v35 )
      v41 = 1;
    goto LABEL_132;
  }
LABEL_139:
  IofCompleteRequest((PIRP)a2, 0);
  return v69;
}
