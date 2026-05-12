/*
 * XREFs of sub_140050A40 @ 0x140050A40
 * Callers:
 *     sub_1401AEE2C @ 0x1401AEE2C (sub_1401AEE2C.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140050A40(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v2; // rcx
  int v4; // eax
  int v5; // ebx
  bool v6; // zf
  char *v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  void *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r12
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // r14
  char v16; // r11
  char v17; // r13
  char *v18; // r11
  unsigned int v19; // r15d
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  char *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  char *v29; // rcx
  unsigned __int8 *v30; // rdx
  int v31; // eax
  int *v32; // rax
  void *v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // r12
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r14
  char v39; // r11
  char v40; // r13
  int v41; // eax
  char *v42; // r11
  unsigned int v43; // r15d
  unsigned __int64 v44; // rsi
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  char *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  unsigned int v52; // r15d
  unsigned __int64 v53; // rsi
  __int64 v54; // r8
  int v55; // ecx
  __int64 v56; // rax
  char v57; // [rsp+60h] [rbp-9h]
  char v58; // [rsp+60h] [rbp-9h]
  char v59; // [rsp+61h] [rbp-8h]
  char v60; // [rsp+61h] [rbp-8h]
  char v61; // [rsp+61h] [rbp-8h]
  unsigned int v62; // [rsp+64h] [rbp-5h]
  int v63; // [rsp+64h] [rbp-5h]
  unsigned int v64; // [rsp+68h] [rbp-1h]
  unsigned int v65; // [rsp+68h] [rbp-1h]
  __int128 v66; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(PDEVICE_OBJECT **)(a1 + 64);
  v4 = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 == 1094997074 || v4 == 1314275652 )
  {
    v56 = *(_QWORD *)(a2 + 184);
    *(_OWORD *)(v56 - 72) = *(_OWORD *)v56;
    *(_OWORD *)(v56 - 56) = *(_OWORD *)(v56 + 16);
    *(_OWORD *)(v56 - 40) = *(_OWORD *)(v56 + 32);
    *(_QWORD *)(v56 - 24) = *(_QWORD *)(v56 + 48);
    *(_BYTE *)(v56 - 69) = 0;
    return IofCallDriver(v2[3], (PIRP)a2);
  }
  LOBYTE(v5) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v4 == 1314278989 )
  {
    v6 = byte_140168DAA == 0;
    v63 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 48) = v63;
    if ( v6 )
      goto LABEL_134;
    v66 = 0LL;
    IoGetActivityIdIrp(a2, &v66);
    v30 = *(unsigned __int8 **)(a2 + 184);
    if ( *v30 != 14 )
    {
      v31 = *v30 - 15;
      if ( *v30 != 15 )
      {
LABEL_73:
        if ( v31 != 12 )
          goto LABEL_134;
        if ( v30[1] == 7 && !*((_DWORD *)v30 + 2) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v32 = *(int **)(a2 + 56);
            if ( v32 )
              v5 = *v32;
            sub_140056AB0((_DWORD)v29, (_DWORD)v30, (unsigned int)&v66, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_134;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_134:
          IofCompleteRequest((PIRP)a2, 0);
          return v63;
        }
        v33 = &unk_140149FE8;
LABEL_133:
        sub_140052F3C(v29, v33, &v66, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_134;
      }
      if ( byte_1401694F1 >= 0 )
        goto LABEL_134;
      v34 = *((_QWORD *)v30 + 1);
      v35 = 0;
      v36 = 0LL;
      v58 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = *(unsigned __int8 *)(v34 + 2);
      if ( (_BYTE)v41 == 40 )
      {
        v42 = 0LL;
        v61 = 0;
        if ( *(_DWORD *)(v34 + 20) )
          goto LABEL_134;
        v52 = 0;
        v65 = *(_DWORD *)(v34 + 56);
        if ( !v65 )
          goto LABEL_107;
        while ( 1 )
        {
          v29 = (char *)*(unsigned int *)(v34 + 4LL * v52 + 120);
          if ( (unsigned int)v29 >= 0x80 )
          {
            v53 = *(unsigned int *)(v34 + 16);
            if ( (unsigned int)v29 < (unsigned int)v53 )
            {
              v54 = (unsigned int)v29;
              v55 = *(_DWORD *)&v29[v34] - 64;
              if ( v55 )
              {
                LODWORD(v29) = v55 - 1;
                if ( (_DWORD)v29 )
                {
                  if ( (_DWORD)v29 == 1 )
                  {
                    LODWORD(v29) = v54 + 40;
                    if ( v54 + 40 <= v53 )
                    {
                      if ( *(_DWORD *)(v34 + v54 + 12) )
                        v42 = (char *)(v54 + v34 + 32);
                      v36 = *(_BYTE **)(v34 + v54 + 24);
LABEL_162:
                      v37 = *(_BYTE *)(v34 + v54 + 9);
                      v35 = *(_BYTE *)(v34 + v54 + 8);
                      goto LABEL_107;
                    }
                  }
                }
                else
                {
                  LODWORD(v29) = v54 + 56;
                  if ( v54 + 56 <= v53 )
                  {
                    v61 = 1;
                    if ( *(_BYTE *)(v34 + v54 + 10) )
                      v42 = (char *)(v54 + v34 + 24);
                    v35 = *(_BYTE *)(v34 + v54 + 8);
                    v36 = *(_BYTE **)(v34 + v54 + 16);
                    v37 = *(_BYTE *)(v34 + v54 + 9);
                  }
                }
              }
              else
              {
                LODWORD(v29) = v54 + 40;
                if ( v54 + 40 <= v53 )
                {
                  if ( *(_BYTE *)(v34 + v54 + 10) )
                    v42 = (char *)(v54 + v34 + 24);
                  v36 = *(_BYTE **)(v34 + v54 + 16);
                  goto LABEL_162;
                }
              }
              if ( v61 )
                goto LABEL_107;
            }
          }
          if ( ++v52 >= v65 )
            goto LABEL_107;
        }
      }
LABEL_109:
      v47 = *(_BYTE *)(v34 + 72);
      v36 = *(_BYTE **)(v34 + 32);
      v37 = *(_BYTE *)(v34 + 11);
      v35 = *(_BYTE *)(v34 + 4);
      if ( !v41 )
        goto LABEL_110;
      goto LABEL_134;
    }
LABEL_131:
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_134;
    v33 = &unk_140148B18;
    goto LABEL_133;
  }
  if ( v4 == 1431193940 )
  {
    v6 = byte_140168DAA == 0;
    v63 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 48) = v63;
    if ( v6 )
      goto LABEL_134;
    v66 = 0LL;
    IoGetActivityIdIrp(a2, &v66);
    v30 = *(unsigned __int8 **)(a2 + 184);
    if ( *v30 != 14 )
    {
      v31 = *v30 - 15;
      if ( *v30 != 15 )
        goto LABEL_73;
      if ( byte_1401694F1 >= 0 )
        goto LABEL_134;
      v34 = *((_QWORD *)v30 + 1);
      v35 = 0;
      v36 = 0LL;
      v58 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = *(unsigned __int8 *)(v34 + 2);
      if ( (_BYTE)v41 == 40 )
      {
        v42 = 0LL;
        v60 = 0;
        if ( *(_DWORD *)(v34 + 20) )
          goto LABEL_134;
        v43 = 0;
        v64 = *(_DWORD *)(v34 + 56);
        if ( !v64 )
          goto LABEL_107;
        while ( 1 )
        {
          v29 = (char *)*(unsigned int *)(v34 + 4LL * v43 + 120);
          if ( (unsigned int)v29 >= 0x80 )
          {
            v44 = *(unsigned int *)(v34 + 16);
            if ( (unsigned int)v29 < (unsigned int)v44 )
            {
              v45 = (unsigned int)v29;
              v46 = *(_DWORD *)&v29[v34] - 64;
              if ( v46 )
              {
                LODWORD(v29) = v46 - 1;
                if ( (_DWORD)v29 )
                {
                  if ( (_DWORD)v29 == 1 )
                  {
                    LODWORD(v29) = v45 + 40;
                    if ( v45 + 40 <= v44 )
                    {
                      if ( *(_DWORD *)(v45 + v34 + 12) )
                        v42 = (char *)(v45 + v34 + 32);
                      v36 = *(_BYTE **)(v45 + v34 + 24);
                      goto LABEL_106;
                    }
                  }
                }
                else
                {
                  LODWORD(v29) = v45 + 56;
                  if ( v45 + 56 <= v44 )
                  {
                    v60 = 1;
                    if ( *(_BYTE *)(v45 + v34 + 10) )
                      v42 = (char *)(v45 + v34 + 24);
                    v35 = *(_BYTE *)(v45 + v34 + 8);
                    v36 = *(_BYTE **)(v45 + v34 + 16);
                    v37 = *(_BYTE *)(v45 + v34 + 9);
                  }
                }
              }
              else
              {
                LODWORD(v29) = v45 + 40;
                if ( v45 + 40 <= v44 )
                {
                  if ( *(_BYTE *)(v45 + v34 + 10) )
                    v42 = (char *)(v45 + v34 + 24);
                  v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_106:
                  v37 = *(_BYTE *)(v45 + v34 + 9);
                  v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_107:
                  if ( v42 )
                  {
                    v47 = *v42;
                    v39 = 0;
LABEL_110:
                    LOBYTE(v29) = v47 - 8;
                    if ( ((unsigned __int8)v29 & 0x5D) == 0 )
                    {
                      v48 = *(_BYTE *)(v34 + 3);
                      if ( v48 == 1 || !v36 || !v37 )
                        goto LABEL_129;
                      LOBYTE(v34) = 0;
                      v29 = &v36[v37];
                      v49 = v36 + 8;
                      if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
                      {
                        if ( v49 <= v29 )
                        {
                          LOBYTE(v34) = 1;
                          v39 = v36[2];
                          v38 = v36[1] & 0xF;
                          v40 = v36[3];
                        }
                      }
                      else
                      {
                        if ( v49 <= v29 )
                        {
                          v38 = v36[2] & 0xF;
                          v50 = v37;
                          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
                            v50 = (unsigned __int8)v36[7] + 8;
                          v29 = v36 + 13;
                          v34 = (unsigned __int64)&v36[v50];
                          if ( (unsigned __int64)(v36 + 13) > v34 )
                            v58 = 0;
                          else
                            v58 = v36[12];
                          if ( (unsigned __int64)(v36 + 14) <= v34 )
                            v40 = *v29;
                          LOBYTE(v34) = 1;
                        }
                        v39 = v58;
                      }
                      if ( (_BYTE)v34 )
                      {
                        LOBYTE(v5) = v39;
                        v51 = v40;
                      }
                      else
                      {
LABEL_129:
                        v38 = 0;
                        v51 = 0;
                      }
                      sub_140052E64(
                        (_DWORD)v29,
                        v34,
                        (unsigned int)&v66,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v48,
                        v35,
                        v38,
                        v5,
                        v51,
                        a2);
                    }
                  }
                  goto LABEL_134;
                }
              }
              if ( v60 )
                goto LABEL_107;
            }
          }
          if ( ++v43 >= v64 )
            goto LABEL_107;
        }
      }
      goto LABEL_109;
    }
    goto LABEL_131;
  }
  v6 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v6 )
    goto LABEL_69;
  v66 = 0LL;
  IoGetActivityIdIrp(a2, &v66);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v10 = &unk_140148B18;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v5 = *v9;
        sub_140056AB0((_DWORD)v7, v8, (unsigned int)&v66, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v10 = &unk_140149FE8;
LABEL_68:
    sub_140052F3C(v7, v10, &v66, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v57 = 0;
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
      goto LABEL_45;
    goto LABEL_69;
  }
  v18 = 0LL;
  v59 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_69;
  v19 = 0;
  v62 = *(_DWORD *)(v11 + 56);
  if ( !v62 )
    goto LABEL_42;
  while ( 1 )
  {
    v7 = (char *)*(unsigned int *)(v11 + 4LL * v19 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v20 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v7 < (unsigned int)v20 )
        break;
    }
LABEL_36:
    if ( ++v19 >= v62 )
      goto LABEL_42;
  }
  v21 = (unsigned int)v7;
  v22 = *(_DWORD *)&v7[v11] - 64;
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
          if ( *(_DWORD *)(v21 + v11 + 12) )
            v18 = (char *)(v21 + v11 + 32);
          v13 = *(_BYTE **)(v21 + v11 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      LODWORD(v7) = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v59 = 1;
        if ( *(_BYTE *)(v21 + v11 + 10) )
          v18 = (char *)(v21 + v11 + 24);
        v12 = *(_BYTE *)(v21 + v11 + 8);
        v13 = *(_BYTE **)(v21 + v11 + 16);
        v14 = *(_BYTE *)(v21 + v11 + 9);
      }
    }
    goto LABEL_35;
  }
  LODWORD(v7) = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_35:
    if ( v59 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v21 + v11 + 10) )
    v18 = (char *)(v21 + v11 + 24);
  v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_41:
  v14 = *(_BYTE *)(v21 + v11 + 9);
  v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_42:
  if ( v18 )
  {
    v23 = *v18;
    v16 = 0;
LABEL_45:
    LOBYTE(v7) = v23 - 8;
    if ( ((unsigned __int8)v7 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v11 + 3);
      if ( v24 == 1 || !v13 || !v14 )
        goto LABEL_64;
      LOBYTE(v11) = 0;
      v7 = &v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( v25 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( v25 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v26 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v26 = (unsigned __int8)v13[7] + 8;
          v7 = v13 + 13;
          v11 = (unsigned __int64)&v13[v26];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v57 = 0;
          else
            v57 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *v7;
          LOBYTE(v11) = 1;
        }
        v16 = v57;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v5) = v16;
        v27 = v17;
      }
      else
      {
LABEL_64:
        v15 = 0;
        v27 = 0;
      }
      sub_140052E64((_DWORD)v7, v11, (unsigned int)&v66, a2, *(_DWORD *)(a2 + 48), v24, v12, v15, v5, v27, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return -1073741811;
}
