/*
 * XREFs of sub_1400624CC @ 0x1400624CC
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008F5F4 @ 0x14008F5F4 (sub_14008F5F4.c)
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400624CC(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r8
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r11
  char v17; // si
  char v18; // r12
  char *v19; // rsi
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  const GUID *v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rsi
  int v31; // eax
  int *v32; // rax
  char v33; // r15
  _BYTE *v34; // r9
  unsigned __int8 v35; // r10
  char v36; // r11
  char v37; // si
  char v38; // r12
  char *v39; // rsi
  unsigned int *v40; // r13
  __int64 v41; // rax
  unsigned __int64 v42; // r14
  char v43; // cl
  char v44; // r8
  _BYTE *v45; // rax
  unsigned int v46; // eax
  char v47; // al
  char v49; // [rsp+28h] [rbp-51h]
  char v50; // [rsp+30h] [rbp-49h]
  char v51; // [rsp+38h] [rbp-41h]
  char v52; // [rsp+40h] [rbp-39h]
  char v53; // [rsp+48h] [rbp-31h]
  __int64 v54; // [rsp+50h] [rbp-29h]
  char v55; // [rsp+60h] [rbp-19h]
  char v56; // [rsp+60h] [rbp-19h]
  char v57; // [rsp+61h] [rbp-18h]
  char v58; // [rsp+61h] [rbp-18h]
  unsigned int v59; // [rsp+64h] [rbp-15h]
  unsigned int v60; // [rsp+64h] [rbp-15h]
  int v61; // [rsp+68h] [rbp-11h]
  int v62; // [rsp+68h] [rbp-11h]
  unsigned int v63; // [rsp+6Ch] [rbp-Dh]
  unsigned int v64; // [rsp+6Ch] [rbp-Dh]
  __int128 v65; // [rsp+70h] [rbp-9h] BYREF
  __int128 v66; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  HIBYTE(v59) = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v29 = *(_QWORD *)(a2 + 24);
    LOWORD(v59) = *(_WORD *)(v29 + 5);
    BYTE2(v59) = *(_BYTE *)(v29 + 7);
    v30 = sub_14001F350(a1, v59);
    if ( v30 )
    {
      sub_14008F5F4(a1, v59, 2147745910LL, 4LL);
      ++*(_DWORD *)(v30[3] + 4704);
      v31 = sub_14009F5C4(v30);
    }
    else
    {
      v31 = -1073741810;
    }
    v5 = byte_140168DAA == 0;
    v60 = v31;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v31;
    if ( v5 )
      goto LABEL_140;
    v66 = 0LL;
    IoGetActivityIdIrp(a2, &v66);
    v7 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v7 != 14 )
    {
      if ( *(_BYTE *)v7 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_140;
        v12 = *(_QWORD *)(v7 + 8);
        v33 = 0;
        v34 = 0LL;
        v56 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        if ( *(_BYTE *)(v12 + 2) != 40 )
        {
          v43 = *(_BYTE *)(v12 + 72);
          v34 = *(_BYTE **)(v12 + 32);
          v35 = *(_BYTE *)(v12 + 11);
          v33 = *(_BYTE *)(v12 + 4);
          if ( *(_BYTE *)(v12 + 2) )
            goto LABEL_140;
          goto LABEL_115;
        }
        v39 = 0LL;
        v58 = 0;
        if ( *(_DWORD *)(v12 + 20) )
          goto LABEL_140;
        v6 = 0LL;
        v62 = 0;
        v64 = *(_DWORD *)(v12 + 56);
        if ( !v64 )
          goto LABEL_112;
        v40 = (unsigned int *)(v12 + 120);
        while ( 1 )
        {
          v41 = *v40;
          if ( (unsigned int)v41 >= 0x80 )
          {
            v42 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v41 < (unsigned int)v42 )
            {
              if ( *(_DWORD *)(v41 + v12) == 64 )
              {
                v6 = v41 + 40;
                if ( v41 + 40 <= v42 )
                {
                  if ( *(_BYTE *)(v41 + v12 + 10) )
                    v39 = (char *)(v41 + v12 + 24);
                  v34 = *(_BYTE **)(v41 + v12 + 16);
LABEL_111:
                  v35 = *(_BYTE *)(v41 + v12 + 9);
                  v33 = *(_BYTE *)(v41 + v12 + 8);
LABEL_112:
                  if ( !v39 )
                    goto LABEL_140;
                  v43 = *v39;
                  v37 = 0;
LABEL_115:
                  LOBYTE(v6) = v43 - 8;
                  if ( (v6 & 0x5D) != 0 )
                    goto LABEL_140;
                  v44 = *(_BYTE *)(v12 + 3);
                  if ( v44 == 1 || !v34 || !v35 )
                    goto LABEL_134;
                  LOBYTE(v12) = 0;
                  v6 = (unsigned __int64)&v34[v35];
                  v45 = v34 + 8;
                  if ( (unsigned __int8)((*v34 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v45 <= v6 )
                    {
                      LOBYTE(v12) = 1;
                      v37 = v34[2];
                      v36 = v34[1] & 0xF;
                      v38 = v34[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v45 <= v6 )
                    {
                      v36 = v34[2] & 0xF;
                      v46 = v35;
                      if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
                        v46 = (unsigned __int8)v34[7] + 8;
                      v6 = (unsigned __int64)(v34 + 13);
                      v12 = (unsigned __int64)&v34[v46];
                      if ( (unsigned __int64)(v34 + 13) > v12 )
                        v56 = 0;
                      else
                        v56 = v34[12];
                      if ( (unsigned __int64)(v34 + 14) <= v12 )
                        v38 = *(_BYTE *)v6;
                      LOBYTE(v12) = 1;
                    }
                    v37 = v56;
                  }
                  if ( (_BYTE)v12 )
                  {
                    LOBYTE(v2) = v37;
                    v47 = v38;
                  }
                  else
                  {
LABEL_134:
                    v36 = 0;
                    v47 = 0;
                  }
                  v54 = a2;
                  v53 = v47;
                  v52 = v2;
                  v51 = v36;
                  v50 = v33;
                  v49 = v44;
                  v28 = (const GUID *)&v66;
LABEL_67:
                  sub_140052E64(v6, v12, v28, a2, *(_DWORD *)(a2 + 48), v49, v50, v51, v52, v53, v54);
                  goto LABEL_140;
                }
              }
              else
              {
                v6 = (unsigned int)(*(_DWORD *)(v41 + v12) - 65);
                if ( *(_DWORD *)(v41 + v12) == 65 )
                {
                  v6 = v41 + 56;
                  if ( v41 + 56 <= v42 )
                  {
                    v58 = 1;
                    if ( *(_BYTE *)(v41 + v12 + 10) )
                      v39 = (char *)(v41 + v12 + 24);
                    v33 = *(_BYTE *)(v41 + v12 + 8);
                    v34 = *(_BYTE **)(v41 + v12 + 16);
                    v35 = *(_BYTE *)(v41 + v12 + 9);
                  }
                }
                else if ( *(_DWORD *)(v41 + v12) == 66 )
                {
                  v6 = v41 + 40;
                  if ( v41 + 40 <= v42 )
                  {
                    if ( *(_DWORD *)(v41 + v12 + 12) )
                      v39 = (char *)(v41 + v12 + 32);
                    v34 = *(_BYTE **)(v41 + v12 + 24);
                    goto LABEL_111;
                  }
                }
              }
              if ( v58 )
                goto LABEL_112;
              LODWORD(v6) = v62;
            }
          }
          v6 = (unsigned int)(v6 + 1);
          ++v40;
          v62 = v6;
          if ( (unsigned int)v6 >= v64 )
            goto LABEL_112;
        }
      }
      if ( *(_BYTE *)v7 != 27 )
        goto LABEL_140;
      if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_140;
        v32 = *(int **)(a2 + 56);
        if ( v32 )
          v2 = *v32;
        v9 = (const GUID *)&v66;
        goto LABEL_12;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_140;
      v10 = (const GUID *)&v66;
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_140;
    v10 = (const GUID *)&v66;
LABEL_138:
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_139;
  }
  v5 = byte_140168DAA == 0;
  v60 = -1073741811;
  *(_DWORD *)(a2 + 48) = -1073741811;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v5 )
    goto LABEL_140;
  v65 = 0LL;
  IoGetActivityIdIrp(a2, &v65);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_140;
    v10 = (const GUID *)&v65;
    goto LABEL_138;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_140;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_140;
      v8 = *(int **)(a2 + 56);
      if ( v8 )
        v2 = *v8;
      v9 = (const GUID *)&v65;
LABEL_12:
      sub_140056AB0(v6, v7, v9, a2, v2, *(_DWORD *)(a2 + 48));
      goto LABEL_140;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_140;
    v10 = (const GUID *)&v65;
LABEL_15:
    v11 = &stru_140149FE8;
LABEL_139:
    sub_140052F3C(v6, v11, v10, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_140;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_140;
  v12 = *(_QWORD *)(v7 + 8);
  v13 = 0;
  v14 = 0LL;
  v55 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_140;
LABEL_46:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_140;
    v24 = *(_BYTE *)(v12 + 3);
    if ( v24 == 1 || !v14 || !v15 )
      goto LABEL_65;
    LOBYTE(v12) = 0;
    v6 = (unsigned __int64)&v14[v15];
    v25 = v14 + 8;
    if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v25 <= v6 )
      {
        LOBYTE(v12) = 1;
        v17 = v14[2];
        v16 = v14[1] & 0xF;
        v18 = v14[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v25 <= v6 )
      {
        v16 = v14[2] & 0xF;
        v26 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v26 = (unsigned __int8)v14[7] + 8;
        v6 = (unsigned __int64)(v14 + 13);
        v12 = (unsigned __int64)&v14[v26];
        if ( (unsigned __int64)(v14 + 13) > v12 )
          v55 = 0;
        else
          v55 = v14[12];
        if ( (unsigned __int64)(v14 + 14) <= v12 )
          v18 = *(_BYTE *)v6;
        LOBYTE(v12) = 1;
      }
      v17 = v55;
    }
    if ( (_BYTE)v12 )
    {
      LOBYTE(v2) = v17;
      v27 = v18;
    }
    else
    {
LABEL_65:
      v16 = 0;
      v27 = 0;
    }
    v54 = a2;
    v53 = v27;
    v52 = v2;
    v51 = v16;
    v50 = v13;
    v49 = v24;
    v28 = (const GUID *)&v65;
    goto LABEL_67;
  }
  v19 = 0LL;
  v57 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_140;
  v6 = 0LL;
  v61 = 0;
  v63 = *(_DWORD *)(v12 + 56);
  if ( !v63 )
    goto LABEL_43;
  v20 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_37:
    v6 = (unsigned int)(v6 + 1);
    ++v20;
    v61 = v6;
    if ( (unsigned int)v6 >= v63 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v21 + v12) != 64 )
  {
    v6 = (unsigned int)(*(_DWORD *)(v21 + v12) - 65);
    if ( *(_DWORD *)(v21 + v12) == 65 )
    {
      v6 = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v57 = 1;
        if ( *(_BYTE *)(v21 + v12 + 10) )
          v19 = (char *)(v21 + v12 + 24);
        v13 = *(_BYTE *)(v21 + v12 + 8);
        v14 = *(_BYTE **)(v21 + v12 + 16);
        v15 = *(_BYTE *)(v21 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v12) == 66 )
    {
      v6 = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v12 + 12) )
          v19 = (char *)(v21 + v12 + 32);
        v14 = *(_BYTE **)(v21 + v12 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_35;
  }
  v6 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_35:
    if ( v57 )
      goto LABEL_43;
    LODWORD(v6) = v61;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v21 + v12 + 10) )
    v19 = (char *)(v21 + v12 + 24);
  v14 = *(_BYTE **)(v21 + v12 + 16);
LABEL_42:
  v15 = *(_BYTE *)(v21 + v12 + 9);
  v13 = *(_BYTE *)(v21 + v12 + 8);
LABEL_43:
  if ( v19 )
  {
    v23 = *v19;
    v17 = 0;
    goto LABEL_46;
  }
LABEL_140:
  IofCompleteRequest((PIRP)a2, 0);
  return v60;
}
