/*
 * XREFs of sub_140197C28 @ 0x140197C28
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400FBDFC @ 0x1400FBDFC (sub_1400FBDFC.c)
 *     sub_1400FC314 @ 0x1400FC314 (sub_1400FC314.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140197C28(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r8
  unsigned __int64 v4; // r10
  int v5; // ebx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r15
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r12
  char *v18; // r11
  unsigned int v19; // r8d
  unsigned int *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  int v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // eax
  int v32; // ebx
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  unsigned __int64 v37; // rdx
  char v38; // r12
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // r14
  char v42; // r11
  char v43; // r13
  char *v44; // r11
  unsigned int v45; // r8d
  unsigned int *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r15
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  char v53; // al
  int v54; // ebx
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  int *v57; // rax
  const EVENT_DESCRIPTOR *v58; // rdx
  unsigned __int64 v59; // rdx
  char v60; // r15
  _BYTE *v61; // r9
  unsigned __int8 v62; // r10
  char v63; // si
  char v64; // r11
  char v65; // r12
  char *v66; // r11
  unsigned int *v67; // r13
  __int64 v68; // rax
  unsigned __int64 v69; // r14
  char v70; // cl
  char v71; // r8
  _BYTE *v72; // rax
  unsigned int v73; // eax
  char v74; // al
  int v75; // [rsp+20h] [rbp-49h]
  int v76; // [rsp+20h] [rbp-49h]
  char v77; // [rsp+60h] [rbp-9h]
  char v78; // [rsp+60h] [rbp-9h]
  char v79; // [rsp+60h] [rbp-9h]
  char v80; // [rsp+61h] [rbp-8h]
  char v81; // [rsp+61h] [rbp-8h]
  char v82; // [rsp+61h] [rbp-8h]
  int v83; // [rsp+64h] [rbp-5h]
  int v84; // [rsp+64h] [rbp-5h]
  int v85; // [rsp+68h] [rbp-1h]
  unsigned int v86; // [rsp+68h] [rbp-1h]
  unsigned __int64 v87; // [rsp+70h] [rbp+7h]
  unsigned __int64 v88; // [rsp+70h] [rbp+7h]
  GUID v89; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v4 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( (unsigned int)v4 < 0x1C || v4 < (unsigned int)v3[6] + (unsigned __int64)(unsigned int)v3[4] + 28 )
  {
    v54 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v6 = byte_140168DAA == 0;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v6 )
      goto LABEL_212;
    v89 = 0LL;
    IoGetActivityIdIrp(a2, &v89);
    v56 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v56 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_212;
        v55 = *(unsigned int *)(a2 + 48);
        v58 = &stru_140148B18;
        v76 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_212;
        v59 = *(_QWORD *)(v56 + 8);
        v60 = 0;
        v61 = 0LL;
        v79 = 0;
        v62 = 0;
        v63 = 0;
        v64 = 0;
        v65 = 0;
        if ( *(_BYTE *)(v59 + 2) != 40 )
        {
          v70 = *(_BYTE *)(v59 + 72);
          v61 = *(_BYTE **)(v59 + 32);
          v62 = *(_BYTE *)(v59 + 11);
          v60 = *(_BYTE *)(v59 + 4);
          if ( !*(_BYTE *)(v59 + 2) )
            goto LABEL_188;
          goto LABEL_212;
        }
        v66 = 0LL;
        v82 = 0;
        if ( *(_DWORD *)(v59 + 20) )
          goto LABEL_212;
        v55 = 0LL;
        v84 = 0;
        v86 = *(_DWORD *)(v59 + 56);
        if ( !v86 )
          goto LABEL_185;
        v67 = (unsigned int *)(v59 + 120);
        while ( 1 )
        {
          v68 = *v67;
          if ( (unsigned int)v68 >= 0x80 )
          {
            v69 = *(unsigned int *)(v59 + 16);
            if ( (unsigned int)v68 < (unsigned int)v69 )
            {
              if ( *(_DWORD *)(v68 + v59) == 64 )
              {
                v55 = v68 + 40;
                if ( v68 + 40 <= v69 )
                {
                  if ( *(_BYTE *)(v68 + v59 + 10) )
                    v66 = (char *)(v68 + v59 + 24);
                  v61 = *(_BYTE **)(v68 + v59 + 16);
LABEL_184:
                  v62 = *(_BYTE *)(v68 + v59 + 9);
                  v60 = *(_BYTE *)(v68 + v59 + 8);
LABEL_185:
                  if ( v66 )
                  {
                    v70 = *v66;
                    v64 = 0;
LABEL_188:
                    LOBYTE(v55) = v70 - 8;
                    if ( (v55 & 0x5D) == 0 )
                    {
                      v71 = *(_BYTE *)(v59 + 3);
                      if ( v71 == 1 || !v61 || !v62 )
                        goto LABEL_207;
                      LOBYTE(v59) = 0;
                      v55 = (unsigned __int64)&v61[v62];
                      v72 = v61 + 8;
                      if ( (unsigned __int8)((*v61 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v72 <= v55 )
                        {
                          LOBYTE(v59) = 1;
                          v64 = v61[2];
                          v63 = v61[1] & 0xF;
                          v65 = v61[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v72 <= v55 )
                        {
                          v63 = v61[2] & 0xF;
                          v73 = v62;
                          if ( (unsigned int)(unsigned __int8)v61[7] + 8 <= v62 )
                            v73 = (unsigned __int8)v61[7] + 8;
                          v55 = (unsigned __int64)(v61 + 13);
                          v59 = (unsigned __int64)&v61[v73];
                          if ( (unsigned __int64)(v61 + 13) > v59 )
                            v79 = 0;
                          else
                            v79 = v61[12];
                          if ( (unsigned __int64)(v61 + 14) <= v59 )
                            v65 = *(_BYTE *)v55;
                          LOBYTE(v59) = 1;
                        }
                        v64 = v79;
                      }
                      if ( (_BYTE)v59 )
                      {
                        LOBYTE(v54) = v64;
                        v74 = v65;
                      }
                      else
                      {
LABEL_207:
                        v63 = 0;
                        v74 = 0;
                      }
                      sub_140052E64(v55, v59, &v89, a2, *(_DWORD *)(a2 + 48), v71, v60, v63, v54, v74, a2);
                    }
                  }
                  goto LABEL_212;
                }
              }
              else
              {
                v55 = (unsigned int)(*(_DWORD *)(v68 + v59) - 65);
                if ( *(_DWORD *)(v68 + v59) == 65 )
                {
                  v55 = v68 + 56;
                  if ( v68 + 56 <= v69 )
                  {
                    v82 = 1;
                    if ( *(_BYTE *)(v68 + v59 + 10) )
                      v66 = (char *)(v68 + v59 + 24);
                    v60 = *(_BYTE *)(v68 + v59 + 8);
                    v61 = *(_BYTE **)(v68 + v59 + 16);
                    v62 = *(_BYTE *)(v68 + v59 + 9);
                  }
                }
                else if ( *(_DWORD *)(v68 + v59) == 66 )
                {
                  v55 = v68 + 40;
                  if ( v68 + 40 <= v69 )
                  {
                    if ( *(_DWORD *)(v68 + v59 + 12) )
                      v66 = (char *)(v68 + v59 + 32);
                    v61 = *(_BYTE **)(v68 + v59 + 24);
                    goto LABEL_184;
                  }
                }
              }
              if ( v82 )
                goto LABEL_185;
              LODWORD(v55) = v84;
            }
          }
          v55 = (unsigned int)(v55 + 1);
          ++v67;
          v84 = v55;
          if ( (unsigned int)v55 >= v86 )
            goto LABEL_185;
        }
      case 0x1B:
        if ( *(_BYTE *)(v56 + 1) == 7 && !*(_DWORD *)(v56 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v57 = *(int **)(a2 + 56);
            if ( v57 )
              v54 = *v57;
            sub_140056AB0(v55, v56, &v89, a2, v54, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_212;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_212:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225485LL;
        }
        v58 = &stru_140149FE8;
        v76 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_212;
    }
    sub_140052F3C(v55, v58, &v89, a2, v76);
    goto LABEL_212;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
  {
    v29 = v3[1];
    if ( v29 == 1 )
    {
      v31 = sub_1400FBDFC(a1, v3);
    }
    else
    {
      if ( v29 != 25 )
      {
        v30 = -1073741822;
        if ( v29 != -2147483646 )
          v30 = -1073741637;
LABEL_79:
        v32 = 0;
        *(_BYTE *)(a2 + 141) = -84;
        v6 = byte_140168DAA == 0;
        *(_DWORD *)(a2 + 48) = v30;
        if ( v6 )
          goto LABEL_145;
        v89 = 0LL;
        IoGetActivityIdIrp(a2, &v89);
        v34 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v34 )
        {
          case 0xE:
            if ( (byte_1401694F2 & 8) == 0 )
              goto LABEL_145;
            v36 = &stru_140148B18;
            break;
          case 0xF:
            if ( byte_1401694F1 >= 0 )
              goto LABEL_145;
            v37 = *(_QWORD *)(v34 + 8);
            v38 = 0;
            v39 = 0LL;
            v78 = 0;
            v40 = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            if ( *(_BYTE *)(v37 + 2) != 40 )
            {
              v49 = *(_BYTE *)(v37 + 72);
              v39 = *(_BYTE **)(v37 + 32);
              v40 = *(_BYTE *)(v37 + 11);
              v38 = *(_BYTE *)(v37 + 4);
              if ( !*(_BYTE *)(v37 + 2) )
                goto LABEL_121;
              goto LABEL_145;
            }
            v44 = 0LL;
            v81 = 0;
            if ( *(_DWORD *)(v37 + 20) )
              goto LABEL_145;
            v33 = 0LL;
            v85 = 0;
            if ( !*(_DWORD *)(v37 + 56) )
              goto LABEL_118;
            v45 = *(_DWORD *)(v37 + 56);
            v46 = (unsigned int *)(v37 + 120);
            v88 = v37 + 120;
            while ( 1 )
            {
              v47 = *v46;
              if ( (unsigned int)v47 >= 0x80 )
              {
                v48 = *(unsigned int *)(v37 + 16);
                if ( (unsigned int)v47 < (unsigned int)v48 )
                {
                  if ( *(_DWORD *)(v47 + v37) == 64 )
                  {
                    v33 = v47 + 40;
                    if ( v47 + 40 <= v48 )
                    {
                      if ( *(_BYTE *)(v47 + v37 + 10) )
                        v44 = (char *)(v47 + v37 + 24);
                      v39 = *(_BYTE **)(v47 + v37 + 16);
LABEL_117:
                      v40 = *(_BYTE *)(v47 + v37 + 9);
                      v38 = *(_BYTE *)(v47 + v37 + 8);
LABEL_118:
                      if ( v44 )
                      {
                        v49 = *v44;
                        v42 = 0;
LABEL_121:
                        LOBYTE(v33) = v49 - 8;
                        if ( (v33 & 0x5D) == 0 )
                        {
                          v50 = *(_BYTE *)(v37 + 3);
                          if ( v50 == 1 || !v39 || !v40 )
                            goto LABEL_140;
                          LOBYTE(v37) = 0;
                          v33 = (unsigned __int64)&v39[v40];
                          v51 = v39 + 8;
                          if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v51 <= v33 )
                            {
                              LOBYTE(v37) = 1;
                              v42 = v39[2];
                              v41 = v39[1] & 0xF;
                              v43 = v39[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v51 <= v33 )
                            {
                              v41 = v39[2] & 0xF;
                              v52 = v40;
                              if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
                                v52 = (unsigned __int8)v39[7] + 8;
                              v33 = (unsigned __int64)(v39 + 13);
                              v37 = (unsigned __int64)&v39[v52];
                              if ( (unsigned __int64)(v39 + 13) > v37 )
                                v78 = 0;
                              else
                                v78 = v39[12];
                              if ( (unsigned __int64)(v39 + 14) <= v37 )
                                v43 = *(_BYTE *)v33;
                              LOBYTE(v37) = 1;
                            }
                            v42 = v78;
                          }
                          if ( (_BYTE)v37 )
                          {
                            LOBYTE(v32) = v42;
                            v53 = v43;
                          }
                          else
                          {
LABEL_140:
                            v41 = 0;
                            v53 = 0;
                          }
                          sub_140052E64(v33, v37, &v89, a2, *(_DWORD *)(a2 + 48), v50, v38, v41, v32, v53, a2);
                        }
                      }
                      goto LABEL_145;
                    }
                  }
                  else
                  {
                    v33 = (unsigned int)(*(_DWORD *)(v47 + v37) - 65);
                    if ( *(_DWORD *)(v47 + v37) == 65 )
                    {
                      v33 = v47 + 56;
                      if ( v47 + 56 <= v48 )
                      {
                        v81 = 1;
                        if ( *(_BYTE *)(v47 + v37 + 10) )
                          v44 = (char *)(v47 + v37 + 24);
                        v38 = *(_BYTE *)(v47 + v37 + 8);
                        v39 = *(_BYTE **)(v47 + v37 + 16);
                        v40 = *(_BYTE *)(v47 + v37 + 9);
                      }
                    }
                    else if ( *(_DWORD *)(v47 + v37) == 66 )
                    {
                      v33 = v47 + 40;
                      if ( v47 + 40 <= v48 )
                      {
                        if ( *(_DWORD *)(v47 + v37 + 12) )
                          v44 = (char *)(v47 + v37 + 32);
                        v39 = *(_BYTE **)(v47 + v37 + 24);
                        goto LABEL_117;
                      }
                    }
                  }
                  if ( v81 )
                    goto LABEL_118;
                  LODWORD(v33) = v85;
                  v45 = *(_DWORD *)(v37 + 56);
                }
              }
              v33 = (unsigned int)(v33 + 1);
              v46 = (unsigned int *)(v88 + 4);
              v85 = v33;
              v88 += 4LL;
              if ( (unsigned int)v33 >= v45 )
                goto LABEL_118;
            }
          case 0x1B:
            if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
            {
              if ( (byte_1401694F2 & 0x40) != 0 )
              {
                v35 = *(int **)(a2 + 56);
                if ( v35 )
                  v32 = *v35;
                sub_140056AB0(v33, v34, &v89, a2, v32, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_145;
            }
            if ( (byte_1401694F2 & 0x20) == 0 )
            {
LABEL_145:
              IofCompleteRequest((PIRP)a2, 0);
              return v30;
            }
            v36 = &stru_140149FE8;
            break;
          default:
            goto LABEL_145;
        }
        sub_140052F3C(v33, v36, &v89, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_145;
      }
      v31 = sub_1400FC314(a1, (__int64)v3);
    }
    v30 = v31;
    goto LABEL_79;
  }
  v5 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v6 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v6 )
    goto LABEL_70;
  v89 = 0LL;
  IoGetActivityIdIrp(a2, &v89);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_70;
    v7 = *(unsigned int *)(a2 + 48);
    v10 = &stru_140148B18;
    v75 = *(_DWORD *)(a2 + 48);
    goto LABEL_69;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v5 = *v9;
        sub_140056AB0(v7, v8, &v89, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_70;
    v10 = &stru_140149FE8;
    v75 = *(_DWORD *)(a2 + 48);
LABEL_69:
    sub_140052F3C(v7, v10, &v89, a2, v75);
    goto LABEL_70;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_70;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v77 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_46;
    goto LABEL_70;
  }
  v18 = 0LL;
  v80 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_70;
  v7 = 0LL;
  v83 = 0;
  if ( !*(_DWORD *)(v11 + 56) )
    goto LABEL_43;
  v19 = *(_DWORD *)(v11 + 56);
  v20 = (unsigned int *)(v11 + 120);
  v87 = v11 + 120;
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_37:
    v7 = (unsigned int)(v7 + 1);
    v20 = (unsigned int *)(v87 + 4);
    v83 = v7;
    v87 += 4LL;
    if ( (unsigned int)v7 >= v19 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v21 + v11) != 64 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v21 + v11) - 65);
    if ( *(_DWORD *)(v21 + v11) == 65 )
    {
      v7 = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v80 = 1;
        if ( *(_BYTE *)(v21 + v11 + 10) )
          v18 = (char *)(v21 + v11 + 24);
        v12 = *(_BYTE *)(v21 + v11 + 8);
        v13 = *(_BYTE **)(v21 + v11 + 16);
        v14 = *(_BYTE *)(v21 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v11) == 66 )
    {
      v7 = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v11 + 12) )
          v18 = (char *)(v21 + v11 + 32);
        v13 = *(_BYTE **)(v21 + v11 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_35;
  }
  v7 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_35:
    if ( v80 )
      goto LABEL_43;
    LODWORD(v7) = v83;
    v19 = *(_DWORD *)(v11 + 56);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v21 + v11 + 10) )
    v18 = (char *)(v21 + v11 + 24);
  v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_42:
  v14 = *(_BYTE *)(v21 + v11 + 9);
  v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_43:
  if ( v18 )
  {
    v23 = *v18;
    v16 = 0;
LABEL_46:
    LOBYTE(v7) = v23 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v11 + 3);
      if ( v24 == 1 || !v13 || !v14 )
        goto LABEL_65;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v26 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v26 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v11 = (unsigned __int64)&v13[v26];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v77 = 0;
          else
            v77 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *(_BYTE *)v7;
          LOBYTE(v11) = 1;
        }
        v16 = v77;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v5) = v16;
        v27 = v17;
      }
      else
      {
LABEL_65:
        v15 = 0;
        v27 = 0;
      }
      sub_140052E64(v7, v11, &v89, a2, *(_DWORD *)(a2 + 48), v24, v12, v15, v5, v27, a2);
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225659LL;
}
