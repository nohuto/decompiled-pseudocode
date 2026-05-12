/*
 * XREFs of sub_14004093C @ 0x14004093C
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14004093C(CMSPAddress *a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  char *v5; // rcx
  unsigned __int8 *v6; // rdx
  int *v7; // rax
  __int128 *v8; // r8
  __int128 *v9; // r8
  void *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r15
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r12
  char *v18; // r11
  unsigned int *v19; // r13
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char v22; // cl
  char v23; // r8
  char *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  struct tagVARIANT *v27; // rdx
  int *v28; // rax
  unsigned __int64 v29; // rdx
  char v30; // r15
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char v33; // si
  char v34; // r11
  char v35; // r12
  char *v36; // r11
  unsigned int *v37; // r13
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  char v40; // cl
  char v41; // r8
  char *v42; // rax
  unsigned int v43; // eax
  char v44; // al
  char v46; // [rsp+60h] [rbp-19h]
  char v47; // [rsp+60h] [rbp-19h]
  char v48; // [rsp+61h] [rbp-18h]
  char v49; // [rsp+61h] [rbp-18h]
  int v50; // [rsp+64h] [rbp-15h]
  int v51; // [rsp+64h] [rbp-15h]
  unsigned int v52; // [rsp+68h] [rbp-11h]
  unsigned int v53; // [rsp+68h] [rbp-11h]
  unsigned int DynamicTerminalClasses; // [rsp+6Ch] [rbp-Dh]
  __int128 v55; // [rsp+70h] [rbp-9h] BYREF
  __int128 v56; // [rsp+80h] [rbp+7h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
  {
    v27 = *(struct tagVARIANT **)(a2 + 24);
    LOBYTE(v27) = *(_BYTE *)v27;
    LOBYTE(v3) = 0;
    DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(a1, v27);
    v4 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = DynamicTerminalClasses;
    if ( v4 )
      goto LABEL_137;
    v56 = 0LL;
    IoGetActivityIdIrp(a2, &v56);
    v6 = *(unsigned __int8 **)(a2 + 184);
    v5 = (char *)((unsigned int)*v6 - 14);
    if ( *v6 != 14 )
    {
      v5 = (char *)((unsigned int)*v6 - 15);
      if ( *v6 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_137;
        v29 = *((_QWORD *)v6 + 1);
        v30 = 0;
        v31 = 0LL;
        v47 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        if ( *(_BYTE *)(v29 + 2) == 40 )
        {
          v36 = 0LL;
          v49 = 0;
          if ( *(_DWORD *)(v29 + 20) )
            goto LABEL_137;
          LODWORD(v5) = 0;
          v51 = 0;
          v53 = *(_DWORD *)(v29 + 56);
          if ( !v53 )
            goto LABEL_109;
          v37 = (unsigned int *)(v29 + 120);
          while ( 1 )
          {
            v38 = *v37;
            if ( (unsigned int)v38 >= 0x80 )
            {
              v39 = *(unsigned int *)(v29 + 16);
              if ( (unsigned int)v38 < (unsigned int)v39 )
              {
                if ( *(_DWORD *)(v38 + v29) == 64 )
                {
                  LODWORD(v5) = v38 + 40;
                  if ( v38 + 40 <= v39 )
                  {
                    if ( *(_BYTE *)(v38 + v29 + 10) )
                      v36 = (char *)(v38 + v29 + 24);
                    v31 = *(_BYTE **)(v38 + v29 + 16);
LABEL_108:
                    v32 = *(_BYTE *)(v38 + v29 + 9);
                    v30 = *(_BYTE *)(v38 + v29 + 8);
LABEL_109:
                    if ( !v36 )
                      goto LABEL_137;
                    v40 = *v36;
                    v34 = 0;
LABEL_112:
                    LOBYTE(v5) = v40 - 8;
                    if ( ((unsigned __int8)v5 & 0x5D) == 0 )
                    {
                      v41 = *(_BYTE *)(v29 + 3);
                      if ( v41 == 1 || !v31 || !v32 )
                        goto LABEL_131;
                      LOBYTE(v29) = 0;
                      v5 = &v31[v32];
                      v42 = v31 + 8;
                      if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
                      {
                        if ( v42 <= v5 )
                        {
                          LOBYTE(v29) = 1;
                          v34 = v31[2];
                          v33 = v31[1] & 0xF;
                          v35 = v31[3];
                        }
                      }
                      else
                      {
                        if ( v42 <= v5 )
                        {
                          v33 = v31[2] & 0xF;
                          v43 = v32;
                          if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
                            v43 = (unsigned __int8)v31[7] + 8;
                          v5 = v31 + 13;
                          v29 = (unsigned __int64)&v31[v43];
                          if ( (unsigned __int64)(v31 + 13) > v29 )
                            v47 = 0;
                          else
                            v47 = v31[12];
                          if ( (unsigned __int64)(v31 + 14) <= v29 )
                            v35 = *v5;
                          LOBYTE(v29) = 1;
                        }
                        v34 = v47;
                      }
                      if ( (_BYTE)v29 )
                      {
                        LOBYTE(v3) = v34;
                        v44 = v35;
                      }
                      else
                      {
LABEL_131:
                        v33 = 0;
                        v44 = 0;
                      }
                      sub_140052E64(
                        (_DWORD)v5,
                        v29,
                        (unsigned int)&v56,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v41,
                        v30,
                        v33,
                        v3,
                        v44,
                        a2);
                    }
                    goto LABEL_137;
                  }
                }
                else
                {
                  LODWORD(v5) = *(_DWORD *)(v38 + v29) - 65;
                  if ( *(_DWORD *)(v38 + v29) == 65 )
                  {
                    LODWORD(v5) = v38 + 56;
                    if ( v38 + 56 <= v39 )
                    {
                      v49 = 1;
                      if ( *(_BYTE *)(v38 + v29 + 10) )
                        v36 = (char *)(v38 + v29 + 24);
                      v30 = *(_BYTE *)(v38 + v29 + 8);
                      v31 = *(_BYTE **)(v38 + v29 + 16);
                      v32 = *(_BYTE *)(v38 + v29 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v38 + v29) == 66 )
                  {
                    LODWORD(v5) = v38 + 40;
                    if ( v38 + 40 <= v39 )
                    {
                      if ( *(_DWORD *)(v38 + v29 + 12) )
                        v36 = (char *)(v38 + v29 + 32);
                      v31 = *(_BYTE **)(v38 + v29 + 24);
                      goto LABEL_108;
                    }
                  }
                }
                if ( v49 )
                  goto LABEL_109;
                LODWORD(v5) = v51;
              }
            }
            LODWORD(v5) = (_DWORD)v5 + 1;
            ++v37;
            v51 = (int)v5;
            if ( (unsigned int)v5 >= v53 )
              goto LABEL_109;
          }
        }
        v40 = *(_BYTE *)(v29 + 72);
        v31 = *(_BYTE **)(v29 + 32);
        v32 = *(_BYTE *)(v29 + 11);
        v30 = *(_BYTE *)(v29 + 4);
        if ( *(_BYTE *)(v29 + 2) )
          goto LABEL_137;
        goto LABEL_112;
      }
      if ( *v6 != 27 )
        goto LABEL_137;
      if ( v6[1] == 7 && !*((_DWORD *)v6 + 2) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_137;
        v28 = *(int **)(a2 + 56);
        if ( v28 )
          v3 = *v28;
        v8 = &v56;
        goto LABEL_12;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_137;
      v9 = &v56;
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_137;
    v9 = &v56;
LABEL_135:
    v10 = &unk_140148B18;
    goto LABEL_136;
  }
  *(_BYTE *)(a2 + 141) = -84;
  LOBYTE(v3) = 0;
  DynamicTerminalClasses = -1073741811;
  v4 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v4 )
    goto LABEL_137;
  v55 = 0LL;
  IoGetActivityIdIrp(a2, &v55);
  v6 = *(unsigned __int8 **)(a2 + 184);
  if ( *v6 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_137;
    v9 = &v55;
    goto LABEL_135;
  }
  if ( *v6 != 15 )
  {
    if ( *v6 != 27 )
      goto LABEL_137;
    if ( v6[1] == 7 && !*((_DWORD *)v6 + 2) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_137;
      v7 = *(int **)(a2 + 56);
      if ( v7 )
        v3 = *v7;
      v8 = &v55;
LABEL_12:
      sub_140056AB0((_DWORD)v5, (_DWORD)v6, (_DWORD)v8, a2, v3, *(_DWORD *)(a2 + 48));
      goto LABEL_137;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_137;
    v9 = &v55;
LABEL_15:
    v10 = &unk_140149FE8;
LABEL_136:
    sub_140052F3C(v5, v10, v9, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_137;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_137;
  v11 = *((_QWORD *)v6 + 1);
  v12 = 0;
  v13 = 0LL;
  v46 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_46;
    goto LABEL_137;
  }
  v18 = 0LL;
  v48 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_137;
  LODWORD(v5) = 0;
  v50 = 0;
  v52 = *(_DWORD *)(v11 + 56);
  if ( !v52 )
    goto LABEL_43;
  v19 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_37:
    LODWORD(v5) = (_DWORD)v5 + 1;
    ++v19;
    v50 = (int)v5;
    if ( (unsigned int)v5 >= v52 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v20 + v11) != 64 )
  {
    LODWORD(v5) = *(_DWORD *)(v20 + v11) - 65;
    if ( *(_DWORD *)(v20 + v11) == 65 )
    {
      LODWORD(v5) = v20 + 56;
      if ( v20 + 56 <= v21 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v20 + v11 + 10) )
          v18 = (char *)(v20 + v11 + 24);
        v12 = *(_BYTE *)(v20 + v11 + 8);
        v13 = *(_BYTE **)(v20 + v11 + 16);
        v14 = *(_BYTE *)(v20 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + v11) == 66 )
    {
      LODWORD(v5) = v20 + 40;
      if ( v20 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v20 + v11 + 12) )
          v18 = (char *)(v20 + v11 + 32);
        v13 = *(_BYTE **)(v20 + v11 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_35;
  }
  LODWORD(v5) = v20 + 40;
  if ( v20 + 40 > v21 )
  {
LABEL_35:
    if ( v48 )
      goto LABEL_43;
    LODWORD(v5) = v50;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v20 + v11 + 10) )
    v18 = (char *)(v20 + v11 + 24);
  v13 = *(_BYTE **)(v20 + v11 + 16);
LABEL_42:
  v14 = *(_BYTE *)(v20 + v11 + 9);
  v12 = *(_BYTE *)(v20 + v11 + 8);
LABEL_43:
  if ( v18 )
  {
    v22 = *v18;
    v16 = 0;
LABEL_46:
    LOBYTE(v5) = v22 - 8;
    if ( ((unsigned __int8)v5 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v11 + 3);
      if ( v23 == 1 || !v13 || !v14 )
        goto LABEL_65;
      LOBYTE(v11) = 0;
      v5 = &v13[v14];
      v24 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( v24 <= v5 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( v24 <= v5 )
        {
          v15 = v13[2] & 0xF;
          v25 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v25 = (unsigned __int8)v13[7] + 8;
          v5 = v13 + 13;
          v11 = (unsigned __int64)&v13[v25];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v46 = 0;
          else
            v46 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *v5;
          LOBYTE(v11) = 1;
        }
        v16 = v46;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v26 = v17;
      }
      else
      {
LABEL_65:
        v15 = 0;
        v26 = 0;
      }
      sub_140052E64((_DWORD)v5, v11, (unsigned int)&v55, a2, *(_DWORD *)(a2 + 48), v23, v12, v15, v3, v26, a2);
    }
  }
LABEL_137:
  IofCompleteRequest((PIRP)a2, 0);
  return DynamicTerminalClasses;
}
