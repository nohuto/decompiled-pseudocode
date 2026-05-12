/*
 * XREFs of sub_1401A6470 @ 0x1401A6470
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140121C6C @ 0x140121C6C (sub_140121C6C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1401A6470(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  _DWORD *v6; // r8
  __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r12
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r13
  char *v21; // r11
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  NTSTATUS result; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  int *v34; // rax
  const EVENT_DESCRIPTOR *v35; // rdx
  unsigned __int64 v36; // rdx
  char v37; // r12
  _BYTE *v38; // r9
  unsigned __int8 v39; // r10
  char v40; // si
  char v41; // r11
  char v42; // r13
  char *v43; // r11
  unsigned int v44; // r15d
  unsigned __int64 v45; // r14
  __int64 v46; // r8
  int v47; // ecx
  char v48; // cl
  char v49; // r8
  _BYTE *v50; // rax
  unsigned int v51; // eax
  char v52; // al
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  int *v55; // rax
  const EVENT_DESCRIPTOR *v56; // rdx
  unsigned __int64 v57; // rdx
  char v58; // r12
  _BYTE *v59; // r9
  unsigned __int8 v60; // r10
  char v61; // si
  char v62; // r11
  char v63; // r13
  char *v64; // r11
  unsigned int v65; // r15d
  unsigned __int64 v66; // r14
  __int64 v67; // r8
  int v68; // ecx
  char v69; // cl
  char v70; // r8
  _BYTE *v71; // rax
  unsigned int v72; // eax
  char v73; // al
  int v74; // [rsp+20h] [rbp-49h]
  int v75; // [rsp+20h] [rbp-49h]
  char v76; // [rsp+60h] [rbp-9h]
  char v77; // [rsp+60h] [rbp-9h]
  char v78; // [rsp+60h] [rbp-9h]
  char v79; // [rsp+61h] [rbp-8h]
  char v80; // [rsp+61h] [rbp-8h]
  char v81; // [rsp+61h] [rbp-8h]
  unsigned int v82; // [rsp+64h] [rbp-5h]
  unsigned int v83; // [rsp+64h] [rbp-5h]
  NTSTATUS v84; // [rsp+68h] [rbp-1h]
  unsigned int v85; // [rsp+68h] [rbp-1h]
  GUID v86; // [rsp+70h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  *a3 = 1;
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  if ( !v6 || *(_DWORD *)(v3 + 16) < 8u )
  {
    v9 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v9 )
      goto LABEL_204;
    v86 = 0LL;
    IoGetActivityIdIrp(a2, &v86);
    v54 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v54 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_204;
        v53 = *(unsigned int *)(a2 + 48);
        v56 = &stru_140148B18;
        v75 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_204;
        v57 = *(_QWORD *)(v54 + 8);
        v58 = 0;
        v59 = 0LL;
        v78 = 0;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        if ( *(_BYTE *)(v57 + 2) != 40 )
        {
          v69 = *(_BYTE *)(v57 + 72);
          v59 = *(_BYTE **)(v57 + 32);
          v60 = *(_BYTE *)(v57 + 11);
          v58 = *(_BYTE *)(v57 + 4);
          if ( !*(_BYTE *)(v57 + 2) )
            goto LABEL_180;
          goto LABEL_204;
        }
        v64 = 0LL;
        v81 = 0;
        if ( *(_DWORD *)(v57 + 20) )
          goto LABEL_204;
        v65 = 0;
        v85 = *(_DWORD *)(v57 + 56);
        if ( !v85 )
          goto LABEL_177;
        while ( 1 )
        {
          v53 = *(unsigned int *)(v57 + 4LL * v65 + 120);
          if ( (unsigned int)v53 >= 0x80 )
          {
            v66 = *(unsigned int *)(v57 + 16);
            if ( (unsigned int)v53 < (unsigned int)v66 )
            {
              v67 = (unsigned int)v53;
              v68 = *(_DWORD *)(v53 + v57) - 64;
              if ( v68 )
              {
                v53 = (unsigned int)(v68 - 1);
                if ( (_DWORD)v53 )
                {
                  if ( (_DWORD)v53 == 1 )
                  {
                    v53 = v67 + 40;
                    if ( v67 + 40 <= v66 )
                    {
                      if ( *(_DWORD *)(v67 + v57 + 12) )
                        v64 = (char *)(v67 + v57 + 32);
                      v59 = *(_BYTE **)(v67 + v57 + 24);
                      goto LABEL_176;
                    }
                  }
                }
                else
                {
                  v53 = v67 + 56;
                  if ( v67 + 56 <= v66 )
                  {
                    v81 = 1;
                    if ( *(_BYTE *)(v67 + v57 + 10) )
                      v64 = (char *)(v67 + v57 + 24);
                    v58 = *(_BYTE *)(v67 + v57 + 8);
                    v59 = *(_BYTE **)(v67 + v57 + 16);
                    v60 = *(_BYTE *)(v67 + v57 + 9);
                  }
                }
              }
              else
              {
                v53 = v67 + 40;
                if ( v67 + 40 <= v66 )
                {
                  if ( *(_BYTE *)(v67 + v57 + 10) )
                    v64 = (char *)(v67 + v57 + 24);
                  v59 = *(_BYTE **)(v67 + v57 + 16);
LABEL_176:
                  v60 = *(_BYTE *)(v67 + v57 + 9);
                  v58 = *(_BYTE *)(v67 + v57 + 8);
LABEL_177:
                  if ( v64 )
                  {
                    v69 = *v64;
                    v62 = 0;
LABEL_180:
                    LOBYTE(v53) = v69 - 8;
                    if ( (v53 & 0x5D) == 0 )
                    {
                      v70 = *(_BYTE *)(v57 + 3);
                      if ( v70 == 1 || !v59 || !v60 )
                        goto LABEL_199;
                      LOBYTE(v57) = 0;
                      v53 = (unsigned __int64)&v59[v60];
                      v71 = v59 + 8;
                      if ( (unsigned __int8)((*v59 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v71 <= v53 )
                        {
                          LOBYTE(v57) = 1;
                          v62 = v59[2];
                          v61 = v59[1] & 0xF;
                          v63 = v59[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v71 <= v53 )
                        {
                          v61 = v59[2] & 0xF;
                          v72 = v60;
                          if ( (unsigned int)(unsigned __int8)v59[7] + 8 <= v60 )
                            v72 = (unsigned __int8)v59[7] + 8;
                          v53 = (unsigned __int64)(v59 + 13);
                          v57 = (unsigned __int64)&v59[v72];
                          if ( (unsigned __int64)(v59 + 13) > v57 )
                            v78 = 0;
                          else
                            v78 = v59[12];
                          if ( (unsigned __int64)(v59 + 14) <= v57 )
                            v63 = *(_BYTE *)v53;
                          LOBYTE(v57) = 1;
                        }
                        v62 = v78;
                      }
                      if ( (_BYTE)v57 )
                      {
                        LOBYTE(v5) = v62;
                        v73 = v63;
                      }
                      else
                      {
LABEL_199:
                        v61 = 0;
                        v73 = 0;
                      }
                      sub_140052E64(v53, v57, &v86, a2, *(_DWORD *)(a2 + 48), v70, v58, v61, v5, v73, a2);
                    }
                  }
                  goto LABEL_204;
                }
              }
              if ( v81 )
                goto LABEL_177;
            }
          }
          if ( ++v65 >= v85 )
            goto LABEL_177;
        }
      case 0x1B:
        if ( *(_BYTE *)(v54 + 1) == 7 && !*(_DWORD *)(v54 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v55 = *(int **)(a2 + 56);
            if ( v55 )
              v5 = *v55;
            sub_140056AB0(v53, v54, &v86, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_204;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_204:
          IofCompleteRequest((PIRP)a2, 0);
          return -1073741811;
        }
        v56 = &stru_140149FE8;
        v75 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_204;
    }
    sub_140052F3C(v53, v56, &v86, a2, v75);
    goto LABEL_204;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v8 + 136) & 2) == 0 || *(_DWORD *)(v8 + 568) == 2 )
  {
    if ( *v6 != 50 && *v6 != 68 )
    {
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
    }
    result = sub_140121C6C(*(_QWORD *)(a1 + 8), (_QWORD *)a2, a3);
    v84 = result;
    if ( result == 259 )
    {
      *a3 = 0;
      return result;
    }
    v9 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = result;
    if ( v9 )
      goto LABEL_139;
    v86 = 0LL;
    IoGetActivityIdIrp(a2, &v86);
    v33 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v33 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_139;
        v35 = &stru_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_139;
        v36 = *(_QWORD *)(v33 + 8);
        v37 = 0;
        v38 = 0LL;
        v77 = 0;
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        if ( *(_BYTE *)(v36 + 2) != 40 )
        {
          v48 = *(_BYTE *)(v36 + 72);
          v38 = *(_BYTE **)(v36 + 32);
          v39 = *(_BYTE *)(v36 + 11);
          v37 = *(_BYTE *)(v36 + 4);
          if ( !*(_BYTE *)(v36 + 2) )
            goto LABEL_115;
          goto LABEL_139;
        }
        v43 = 0LL;
        v80 = 0;
        if ( *(_DWORD *)(v36 + 20) )
          goto LABEL_139;
        v44 = 0;
        v83 = *(_DWORD *)(v36 + 56);
        if ( !v83 )
          goto LABEL_112;
        while ( 1 )
        {
          v32 = *(unsigned int *)(v36 + 4LL * v44 + 120);
          if ( (unsigned int)v32 >= 0x80 )
          {
            v45 = *(unsigned int *)(v36 + 16);
            if ( (unsigned int)v32 < (unsigned int)v45 )
            {
              v46 = (unsigned int)v32;
              v47 = *(_DWORD *)(v32 + v36) - 64;
              if ( v47 )
              {
                v32 = (unsigned int)(v47 - 1);
                if ( (_DWORD)v32 )
                {
                  if ( (_DWORD)v32 == 1 )
                  {
                    v32 = v46 + 40;
                    if ( v46 + 40 <= v45 )
                    {
                      if ( *(_DWORD *)(v46 + v36 + 12) )
                        v43 = (char *)(v46 + v36 + 32);
                      v38 = *(_BYTE **)(v46 + v36 + 24);
                      goto LABEL_111;
                    }
                  }
                }
                else
                {
                  v32 = v46 + 56;
                  if ( v46 + 56 <= v45 )
                  {
                    v80 = 1;
                    if ( *(_BYTE *)(v46 + v36 + 10) )
                      v43 = (char *)(v46 + v36 + 24);
                    v37 = *(_BYTE *)(v46 + v36 + 8);
                    v38 = *(_BYTE **)(v46 + v36 + 16);
                    v39 = *(_BYTE *)(v46 + v36 + 9);
                  }
                }
              }
              else
              {
                v32 = v46 + 40;
                if ( v46 + 40 <= v45 )
                {
                  if ( *(_BYTE *)(v46 + v36 + 10) )
                    v43 = (char *)(v46 + v36 + 24);
                  v38 = *(_BYTE **)(v46 + v36 + 16);
LABEL_111:
                  v39 = *(_BYTE *)(v46 + v36 + 9);
                  v37 = *(_BYTE *)(v46 + v36 + 8);
LABEL_112:
                  if ( v43 )
                  {
                    v48 = *v43;
                    v41 = 0;
LABEL_115:
                    LOBYTE(v32) = v48 - 8;
                    if ( (v32 & 0x5D) == 0 )
                    {
                      v49 = *(_BYTE *)(v36 + 3);
                      if ( v49 == 1 || !v38 || !v39 )
                        goto LABEL_134;
                      LOBYTE(v36) = 0;
                      v32 = (unsigned __int64)&v38[v39];
                      v50 = v38 + 8;
                      if ( (unsigned __int8)((*v38 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v50 <= v32 )
                        {
                          LOBYTE(v36) = 1;
                          v41 = v38[2];
                          v40 = v38[1] & 0xF;
                          v42 = v38[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v50 <= v32 )
                        {
                          v40 = v38[2] & 0xF;
                          v51 = v39;
                          if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
                            v51 = (unsigned __int8)v38[7] + 8;
                          v32 = (unsigned __int64)(v38 + 13);
                          v36 = (unsigned __int64)&v38[v51];
                          if ( (unsigned __int64)(v38 + 13) > v36 )
                            v77 = 0;
                          else
                            v77 = v38[12];
                          if ( (unsigned __int64)(v38 + 14) <= v36 )
                            v42 = *(_BYTE *)v32;
                          LOBYTE(v36) = 1;
                        }
                        v41 = v77;
                      }
                      if ( (_BYTE)v36 )
                      {
                        LOBYTE(v5) = v41;
                        v52 = v42;
                      }
                      else
                      {
LABEL_134:
                        v40 = 0;
                        v52 = 0;
                      }
                      sub_140052E64(v32, v36, &v86, a2, *(_DWORD *)(a2 + 48), v49, v37, v40, v5, v52, a2);
                    }
                  }
                  goto LABEL_139;
                }
              }
              if ( v80 )
                goto LABEL_112;
            }
          }
          if ( ++v44 >= v83 )
            goto LABEL_112;
        }
      case 0x1B:
        if ( *(_BYTE *)(v33 + 1) == 7 && !*(_DWORD *)(v33 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v34 = *(int **)(a2 + 56);
            if ( v34 )
              v5 = *v34;
            sub_140056AB0(v32, v33, &v86, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_139;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_139:
          IofCompleteRequest((PIRP)a2, 0);
          return v84;
        }
        v35 = &stru_140149FE8;
        break;
      default:
        goto LABEL_139;
    }
    sub_140052F3C(v32, v35, &v86, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_139;
  }
  v9 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741300;
  if ( v9 )
    goto LABEL_69;
  v86 = 0LL;
  IoGetActivityIdIrp(a2, &v86);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v10 = *(unsigned int *)(a2 + 48);
    v13 = &stru_140148B18;
    v74 = *(_DWORD *)(a2 + 48);
    goto LABEL_68;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v5 = *v12;
        sub_140056AB0(v10, v11, &v86, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v13 = &stru_140149FE8;
    v74 = *(_DWORD *)(a2 + 48);
LABEL_68:
    sub_140052F3C(v10, v13, &v86, a2, v74);
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v76 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v21 = 0LL;
  v79 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_69;
  v22 = 0;
  v82 = *(_DWORD *)(v14 + 56);
  if ( !v82 )
    goto LABEL_42;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v23 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v10 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    if ( ++v22 >= v82 )
      goto LABEL_42;
  }
  v24 = (unsigned int)v10;
  v25 = *(_DWORD *)(v10 + v14) - 64;
  if ( v25 )
  {
    v10 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v14 + 12) )
            v21 = (char *)(v24 + v14 + 32);
          v16 = *(_BYTE **)(v24 + v14 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v10 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v79 = 1;
        if ( *(_BYTE *)(v24 + v14 + 10) )
          v21 = (char *)(v24 + v14 + 24);
        v15 = *(_BYTE *)(v24 + v14 + 8);
        v16 = *(_BYTE **)(v24 + v14 + 16);
        v17 = *(_BYTE *)(v24 + v14 + 9);
      }
    }
    goto LABEL_35;
  }
  v10 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_35:
    if ( v79 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v24 + v14 + 10) )
    v21 = (char *)(v24 + v14 + 24);
  v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_41:
  v17 = *(_BYTE *)(v24 + v14 + 9);
  v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_42:
  if ( v21 )
  {
    v26 = *v21;
    v19 = 0;
LABEL_45:
    LOBYTE(v10) = v26 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v14 + 3);
      if ( v27 == 1 || !v16 || !v17 )
        goto LABEL_64;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v28 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v29 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v29 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v29];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v76 = 0;
          else
            v76 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v19 = v76;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v5) = v19;
        v30 = v20;
      }
      else
      {
LABEL_64:
        v18 = 0;
        v30 = 0;
      }
      sub_140052E64(v10, v14, &v86, a2, *(_DWORD *)(a2 + 48), v27, v15, v18, v5, v30, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return -1073741300;
}
