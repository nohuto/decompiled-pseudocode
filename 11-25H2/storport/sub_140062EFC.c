/*
 * XREFs of sub_140062EFC @ 0x140062EFC
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140066C6C @ 0x140066C6C (sub_140066C6C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140183DC4 @ 0x140183DC4 (sub_140183DC4.c)
 *     sub_140185AA8 @ 0x140185AA8 (sub_140185AA8.c)
 *     sub_140185CF0 @ 0x140185CF0 (sub_140185CF0.c)
 *     sub_140185F6C @ 0x140185F6C (sub_140185F6C.c)
 *     sub_140186130 @ 0x140186130 (sub_140186130.c)
 *     sub_1401867AC @ 0x1401867AC (sub_1401867AC.c)
 *     sub_140186AFC @ 0x140186AFC (sub_140186AFC.c)
 *     sub_140186D04 @ 0x140186D04 (sub_140186D04.c)
 *     sub_1401870D8 @ 0x1401870D8 (sub_1401870D8.c)
 *     sub_1401873E4 @ 0x1401873E4 (sub_1401873E4.c)
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 *     sub_1401879D4 @ 0x1401879D4 (sub_1401879D4.c)
 *     sub_1401A89F4 @ 0x1401A89F4 (sub_1401A89F4.c)
 */

__int64 __fastcall sub_140062EFC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int *v5; // r15
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  int v10; // ebx
  int v11; // ecx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r15
  int v22; // eax
  char v23; // r11
  char *v24; // r11
  unsigned int v25; // r12d
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  int v28; // ecx
  const EVENT_DESCRIPTOR *v29; // rdx
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // edx
  _BYTE *v46; // r9
  unsigned __int8 v47; // r10
  char v48; // r11
  char v49; // r15
  char v50; // si
  char *v51; // rsi
  unsigned int v52; // r12d
  unsigned __int64 v53; // r15
  __int64 v54; // r8
  int v55; // ecx
  char v56; // cl
  char v57; // r8
  _BYTE *v58; // rax
  unsigned int v59; // eax
  char v60; // al
  int *v61; // rax
  unsigned int v62; // r12d
  unsigned __int64 v63; // r15
  int v64; // ecx
  char v65; // cl
  _BYTE *v66; // rax
  unsigned int v67; // eax
  char v68; // al
  char v70; // [rsp+38h] [rbp-31h]
  char v71; // [rsp+40h] [rbp-29h]
  char v72; // [rsp+48h] [rbp-21h]
  __int64 v73; // [rsp+50h] [rbp-19h]
  char v74; // [rsp+60h] [rbp-9h]
  char v75; // [rsp+60h] [rbp-9h]
  char v76; // [rsp+61h] [rbp-8h]
  char v77; // [rsp+61h] [rbp-8h]
  char v78; // [rsp+62h] [rbp-7h]
  char v79; // [rsp+62h] [rbp-7h]
  char v80; // [rsp+62h] [rbp-7h]
  __int64 v81; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v82; // [rsp+70h] [rbp+7h]
  GUID v83; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(unsigned int **)(a2 + 24);
  v8 = -1073741811;
  v9 = *(_DWORD *)(v3 + 16);
  v81 = *(unsigned int *)(v3 + 8);
  v10 = 0;
  if ( (unsigned int)sub_1400566F8() )
  {
    if ( !v5 || v9 < 8 || *v5 > 0x1C || (v30 = 294108946, !_bittest(&v30, *v5)) )
    {
      v12 = byte_140168DAA == 0;
      v8 = -1073741808;
      *(_DWORD *)(a2 + 48) = -1073741808;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v12 )
        goto LABEL_192;
      v83 = 0LL;
      IoGetActivityIdIrp(a2, &v83);
      v14 = *(unsigned __int8 **)(a2 + 184);
      if ( *v14 != 14 )
      {
        v15 = *v14 - 15;
        if ( *v14 == 15 )
        {
          if ( byte_1401694F1 >= 0 )
            goto LABEL_192;
          v16 = *((_QWORD *)v14 + 1);
          v17 = 0;
          v18 = 0LL;
          v74 = 0;
          v19 = 0;
          v76 = 0;
          v20 = 0;
          v21 = 0;
          v22 = *(unsigned __int8 *)(v16 + 2);
          v23 = 0;
          if ( (_BYTE)v22 == 40 )
          {
            v24 = 0LL;
            v80 = 0;
            if ( *(_DWORD *)(v16 + 20) )
              goto LABEL_192;
            v62 = 0;
            v82 = *(_DWORD *)(v16 + 56);
            if ( !v82 )
              goto LABEL_163;
            while ( 1 )
            {
              v13 = *(unsigned int *)(v16 + 4LL * v62 + 120);
              if ( (unsigned int)v13 >= 0x80 )
              {
                v63 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v13 < (unsigned int)v63 )
                {
                  v27 = (unsigned int)v13;
                  v64 = *(_DWORD *)(v13 + v16) - 64;
                  if ( v64 )
                  {
                    v13 = (unsigned int)(v64 - 1);
                    if ( (_DWORD)v13 )
                    {
                      if ( (_DWORD)v13 == 1 )
                      {
                        v13 = v27 + 40;
                        if ( v27 + 40 <= v63 )
                        {
LABEL_19:
                          if ( *(_DWORD *)(v27 + v16 + 12) )
                            v24 = (char *)(v27 + v16 + 32);
                          v18 = *(_BYTE **)(v27 + v16 + 24);
LABEL_161:
                          v19 = *(_BYTE *)(v27 + v16 + 9);
                          v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_162:
                          v21 = 0;
LABEL_163:
                          if ( !v24 )
                            goto LABEL_192;
                          v65 = *v24;
                          v23 = 0;
LABEL_166:
                          LOBYTE(v13) = v65 - 8;
                          if ( (v13 & 0x5D) != 0 )
                            goto LABEL_192;
                          v57 = *(_BYTE *)(v16 + 3);
                          if ( v57 == 1 || !v18 || !v19 )
                            goto LABEL_186;
                          LOBYTE(v16) = 0;
                          v13 = (unsigned __int64)&v18[v19];
                          v66 = v18 + 8;
                          if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v66 <= v13 )
                            {
                              LOBYTE(v16) = 1;
                              v21 = v18[2];
                              v20 = v18[1] & 0xF;
                              v23 = v18[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v66 <= v13 )
                            {
                              v20 = v18[2] & 0xF;
                              v67 = v19;
                              if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
                                v67 = (unsigned __int8)v18[7] + 8;
                              v13 = (unsigned __int64)(v18 + 13);
                              v16 = (unsigned __int64)&v18[v67];
                              if ( (unsigned __int64)(v18 + 13) > v16 )
                                v74 = 0;
                              else
                                v74 = v18[12];
                              if ( (unsigned __int64)(v18 + 14) > v16 )
                                v76 = 0;
                              else
                                v76 = *(_BYTE *)v13;
                              LOBYTE(v16) = 1;
                            }
                            v21 = v74;
                            v23 = v76;
                          }
                          if ( (_BYTE)v16 )
                          {
                            LOBYTE(v10) = v21;
                            v68 = v23;
                          }
                          else
                          {
LABEL_186:
                            v20 = 0;
                            v68 = 0;
                          }
                          v73 = a2;
                          v72 = v68;
                          v71 = v10;
                          v70 = v20;
LABEL_188:
                          sub_140052E64(v13, v16, &v83, a2, *(_DWORD *)(a2 + 48), v57, v17, v70, v71, v72, v73);
                          goto LABEL_192;
                        }
                      }
                    }
                    else
                    {
                      v13 = v27 + 56;
                      if ( v27 + 56 <= v63 )
                      {
                        v80 = 1;
                        if ( *(_BYTE *)(v27 + v16 + 10) )
                          v24 = (char *)(v27 + v16 + 24);
                        v17 = *(_BYTE *)(v27 + v16 + 8);
                        v18 = *(_BYTE **)(v27 + v16 + 16);
                        v19 = *(_BYTE *)(v27 + v16 + 9);
                      }
                    }
                  }
                  else
                  {
                    v13 = v27 + 40;
                    if ( v27 + 40 <= v63 )
                    {
LABEL_158:
                      if ( *(_BYTE *)(v27 + v16 + 10) )
                        v24 = (char *)(v27 + v16 + 24);
                      v18 = *(_BYTE **)(v27 + v16 + 16);
                      goto LABEL_161;
                    }
                  }
                  if ( v80 )
                    goto LABEL_162;
                }
              }
              if ( ++v62 >= v82 )
                goto LABEL_162;
            }
          }
LABEL_165:
          v65 = *(_BYTE *)(v16 + 72);
          v18 = *(_BYTE **)(v16 + 32);
          v19 = *(_BYTE *)(v16 + 11);
          v17 = *(_BYTE *)(v16 + 4);
          if ( v22 )
            goto LABEL_192;
          goto LABEL_166;
        }
        goto LABEL_132;
      }
      goto LABEL_189;
    }
  }
  else if ( !v5 || v9 < 8 || *v5 > 0x18 || (v11 = 25673490, !_bittest(&v11, *v5)) )
  {
    v12 = byte_140168DAA == 0;
    v8 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v12 )
      goto LABEL_192;
    v83 = 0LL;
    IoGetActivityIdIrp(a2, &v83);
    v14 = *(unsigned __int8 **)(a2 + 184);
    if ( *v14 != 14 )
    {
      v15 = *v14 - 15;
      if ( *v14 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_192;
        v16 = *((_QWORD *)v14 + 1);
        v17 = 0;
        v18 = 0LL;
        v74 = 0;
        v19 = 0;
        v76 = 0;
        v20 = 0;
        v21 = 0;
        v22 = *(unsigned __int8 *)(v16 + 2);
        v23 = 0;
        if ( (_BYTE)v22 == 40 )
        {
          v24 = 0LL;
          v78 = 0;
          if ( *(_DWORD *)(v16 + 20) )
            goto LABEL_192;
          v25 = 0;
          v82 = *(_DWORD *)(v16 + 56);
          if ( v82 )
          {
            while ( 1 )
            {
              v13 = *(unsigned int *)(v16 + 4LL * v25 + 120);
              if ( (unsigned int)v13 >= 0x80 )
              {
                v26 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v13 < (unsigned int)v26 )
                {
                  v27 = (unsigned int)v13;
                  v28 = *(_DWORD *)(v13 + v16) - 64;
                  if ( v28 )
                  {
                    v13 = (unsigned int)(v28 - 1);
                    if ( (_DWORD)v13 )
                    {
                      if ( (_DWORD)v13 == 1 )
                      {
                        v13 = v27 + 40;
                        if ( v27 + 40 <= v26 )
                          goto LABEL_19;
                      }
                    }
                    else
                    {
                      v13 = v27 + 56;
                      if ( v27 + 56 <= v26 )
                      {
                        v78 = 1;
                        if ( *(_BYTE *)(v27 + v16 + 10) )
                          v24 = (char *)(v27 + v16 + 24);
                        v17 = *(_BYTE *)(v27 + v16 + 8);
                        v18 = *(_BYTE **)(v27 + v16 + 16);
                        v19 = *(_BYTE *)(v27 + v16 + 9);
                      }
                    }
                  }
                  else
                  {
                    v13 = v27 + 40;
                    if ( v27 + 40 <= v26 )
                      goto LABEL_158;
                  }
                  if ( v78 )
                    goto LABEL_162;
                }
              }
              if ( ++v25 >= v82 )
                goto LABEL_162;
            }
          }
          goto LABEL_163;
        }
        goto LABEL_165;
      }
      goto LABEL_132;
    }
LABEL_189:
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_192;
    v29 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_191;
  }
  v31 = v5[1];
  if ( v31 )
  {
    if ( v31 == 1 )
    {
      v8 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      v8 = -1073741808;
    }
    goto LABEL_75;
  }
  v32 = *v5;
  if ( (int)*v5 > 13 )
  {
    v40 = v32 - 15;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( v43 )
          {
            v44 = v43 - 5;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                if ( v45 != 4 )
                  goto LABEL_55;
                if ( !(unsigned int)sub_1400566F8() )
                {
                  v8 = -1073741637;
                  goto LABEL_55;
                }
                v39 = sub_1401A89F4(a1, a2, &v81);
              }
              else
              {
                v39 = sub_1401867AC(a1, a2, &v81);
              }
            }
            else
            {
              v39 = sub_140186AFC(a1, a2, &v81);
            }
          }
          else
          {
            v39 = sub_140186D04(a1, a2, &v81);
          }
        }
        else
        {
          v39 = sub_1401875C8(a1, a2, &v81);
        }
      }
      else
      {
        v39 = sub_1401873E4(a1, a2, &v81);
      }
    }
    else
    {
      v39 = sub_140185CF0(a1, a2, &v81);
    }
LABEL_74:
    v8 = v39;
    *(_QWORD *)(a2 + 56) = v81;
    goto LABEL_75;
  }
  if ( v32 == 13 )
  {
    v39 = sub_1401870D8(a1, a2, &v81);
    goto LABEL_74;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v39 = sub_140183DC4(a1, a2, &v81);
    goto LABEL_74;
  }
  v34 = v33 - 3;
  if ( !v34 )
  {
    v8 = -1073741808;
    goto LABEL_55;
  }
  v35 = v34 - 4;
  if ( !v35 )
  {
    v39 = sub_140066C6C(a1, a2, &v81, a3);
    goto LABEL_74;
  }
  v36 = v35 - 1;
  if ( !v36 )
  {
    v39 = sub_140186130(a1, a2, &v81);
    goto LABEL_74;
  }
  v37 = v36 - 1;
  if ( !v37 )
  {
    v39 = sub_140185AA8(a1, a2, &v81);
    goto LABEL_74;
  }
  v38 = v37 - 1;
  if ( !v38 )
  {
    v39 = sub_1401879D4(a1, a2, &v81);
    goto LABEL_74;
  }
  if ( v38 != 1 )
  {
LABEL_55:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_75;
  }
  v8 = sub_140185F6C(a1, a2, &v81);
  *(_QWORD *)(a2 + 56) = v81;
LABEL_75:
  v12 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v12 )
    goto LABEL_192;
  v83 = 0LL;
  IoGetActivityIdIrp(a2, &v83);
  v14 = *(unsigned __int8 **)(a2 + 184);
  if ( *v14 == 14 )
    goto LABEL_189;
  v15 = *v14 - 15;
  if ( *v14 != 15 )
  {
LABEL_132:
    if ( v15 != 12 )
      goto LABEL_192;
    if ( v14[1] == 7 && !*((_DWORD *)v14 + 2) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v61 = *(int **)(a2 + 56);
        if ( v61 )
          v10 = *v61;
        sub_140056AB0(v13, (__int64)v14, &v83, a2, v10, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_192;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_192;
    v29 = &stru_140149FE8;
LABEL_191:
    sub_140052F3C(v13, v29, &v83, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_192;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_192;
  v16 = *((_QWORD *)v14 + 1);
  v17 = 0;
  v46 = 0LL;
  v75 = 0;
  v47 = 0;
  v77 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v56 = *(_BYTE *)(v16 + 72);
    v46 = *(_BYTE **)(v16 + 32);
    v47 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_192;
LABEL_107:
    LOBYTE(v13) = v56 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_192;
    v57 = *(_BYTE *)(v16 + 3);
    if ( v57 == 1 || !v46 || !v47 )
      goto LABEL_127;
    LOBYTE(v16) = 0;
    v13 = (unsigned __int64)&v46[v47];
    v58 = v46 + 8;
    if ( (unsigned __int8)((*v46 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v58 <= v13 )
      {
        LOBYTE(v16) = 1;
        v49 = v46[2];
        v48 = v46[1] & 0xF;
        v50 = v46[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v58 <= v13 )
      {
        v48 = v46[2] & 0xF;
        v59 = v47;
        if ( (unsigned int)(unsigned __int8)v46[7] + 8 <= v47 )
          v59 = (unsigned __int8)v46[7] + 8;
        v13 = (unsigned __int64)(v46 + 13);
        v16 = (unsigned __int64)&v46[v59];
        if ( (unsigned __int64)(v46 + 13) > v16 )
          v75 = 0;
        else
          v75 = v46[12];
        if ( (unsigned __int64)(v46 + 14) > v16 )
          v77 = 0;
        else
          v77 = *(_BYTE *)v13;
        LOBYTE(v16) = 1;
      }
      v50 = v77;
      v49 = v75;
    }
    if ( (_BYTE)v16 )
    {
      LOBYTE(v10) = v49;
      v60 = v50;
    }
    else
    {
LABEL_127:
      v48 = 0;
      v60 = 0;
    }
    v73 = a2;
    v72 = v60;
    v71 = v10;
    v70 = v48;
    goto LABEL_188;
  }
  v51 = 0LL;
  v79 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_192;
  v52 = 0;
  v82 = *(_DWORD *)(v16 + 56);
  if ( !v82 )
    goto LABEL_104;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v16 + 4LL * v52 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v53 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v13 < (unsigned int)v53 )
        break;
    }
LABEL_97:
    if ( ++v52 >= v82 )
      goto LABEL_103;
  }
  v54 = (unsigned int)v13;
  v55 = *(_DWORD *)(v16 + v13) - 64;
  if ( v55 )
  {
    v13 = (unsigned int)(v55 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v54 + 40;
        if ( v54 + 40 <= v53 )
        {
          if ( *(_DWORD *)(v16 + v54 + 12) )
            v51 = (char *)(v54 + v16 + 32);
          v46 = *(_BYTE **)(v16 + v54 + 24);
          goto LABEL_102;
        }
      }
    }
    else
    {
      v13 = v54 + 56;
      if ( v54 + 56 <= v53 )
      {
        v79 = 1;
        if ( *(_BYTE *)(v16 + v54 + 10) )
          v51 = (char *)(v54 + v16 + 24);
        v17 = *(_BYTE *)(v16 + v54 + 8);
        v46 = *(_BYTE **)(v16 + v54 + 16);
        v47 = *(_BYTE *)(v16 + v54 + 9);
      }
    }
    goto LABEL_96;
  }
  v13 = v54 + 40;
  if ( v54 + 40 > v53 )
  {
LABEL_96:
    if ( v79 )
      goto LABEL_103;
    goto LABEL_97;
  }
  if ( *(_BYTE *)(v16 + v54 + 10) )
    v51 = (char *)(v54 + v16 + 24);
  v46 = *(_BYTE **)(v16 + v54 + 16);
LABEL_102:
  v47 = *(_BYTE *)(v16 + v54 + 9);
  v17 = *(_BYTE *)(v16 + v54 + 8);
LABEL_103:
  v49 = 0;
LABEL_104:
  if ( v51 )
  {
    v56 = *v51;
    v50 = 0;
    goto LABEL_107;
  }
LABEL_192:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
