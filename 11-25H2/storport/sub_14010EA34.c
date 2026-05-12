/*
 * XREFs of sub_14010EA34 @ 0x14010EA34
 * Callers:
 *     sub_14006BBD0 @ 0x14006BBD0 (sub_14006BBD0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14010EA34(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
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
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  const GUID *v28; // r8
  int *v29; // rax
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
  _BYTE *v42; // rax
  unsigned int v43; // eax
  char v44; // al
  int v46; // [rsp+28h] [rbp-49h]
  char v47; // [rsp+30h] [rbp-41h]
  char v48; // [rsp+38h] [rbp-39h]
  char v49; // [rsp+40h] [rbp-31h]
  char v50; // [rsp+48h] [rbp-29h]
  char v51; // [rsp+50h] [rbp-21h]
  __int64 v52; // [rsp+58h] [rbp-19h]
  char v53; // [rsp+68h] [rbp-9h]
  char v54; // [rsp+68h] [rbp-9h]
  char v55; // [rsp+69h] [rbp-8h]
  char v56; // [rsp+69h] [rbp-8h]
  int v57; // [rsp+6Ch] [rbp-5h]
  int v58; // [rsp+6Ch] [rbp-5h]
  unsigned int v59; // [rsp+70h] [rbp-1h]
  unsigned int v60; // [rsp+70h] [rbp-1h]
  unsigned int v61; // [rsp+74h] [rbp+3h]
  __int128 v62; // [rsp+78h] [rbp+7h] BYREF
  __int128 v63; // [rsp+88h] [rbp+17h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  *(_BYTE *)(a2 + 141) = -84;
  if ( (v4 & 2) == 0 )
  {
    v5 = byte_140168DAA == 0;
    v61 = -1073741823;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v5 )
      goto LABEL_137;
    v63 = 0LL;
    IoGetActivityIdIrp(a2, &v63);
    v7 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v7 != 14 )
    {
      if ( *(_BYTE *)v7 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_137;
        v12 = *(_QWORD *)(v7 + 8);
        v30 = 0;
        v31 = 0LL;
        v54 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        if ( *(_BYTE *)(v12 + 2) != 40 )
        {
          v40 = *(_BYTE *)(v12 + 72);
          v31 = *(_BYTE **)(v12 + 32);
          v32 = *(_BYTE *)(v12 + 11);
          v30 = *(_BYTE *)(v12 + 4);
          if ( *(_BYTE *)(v12 + 2) )
            goto LABEL_137;
          goto LABEL_112;
        }
        v36 = 0LL;
        v56 = 0;
        if ( *(_DWORD *)(v12 + 20) )
          goto LABEL_137;
        v6 = 0LL;
        v58 = 0;
        v60 = *(_DWORD *)(v12 + 56);
        if ( !v60 )
          goto LABEL_109;
        v37 = (unsigned int *)(v12 + 120);
        while ( 1 )
        {
          v38 = *v37;
          if ( (unsigned int)v38 >= 0x80 )
          {
            v39 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v38 < (unsigned int)v39 )
            {
              if ( *(_DWORD *)(v38 + v12) == 64 )
              {
                v6 = v38 + 40;
                if ( v38 + 40 <= v39 )
                {
                  if ( *(_BYTE *)(v38 + v12 + 10) )
                    v36 = (char *)(v38 + v12 + 24);
                  v31 = *(_BYTE **)(v38 + v12 + 16);
LABEL_108:
                  v32 = *(_BYTE *)(v38 + v12 + 9);
                  v30 = *(_BYTE *)(v38 + v12 + 8);
LABEL_109:
                  if ( !v36 )
                    goto LABEL_137;
                  v40 = *v36;
                  v34 = 0;
LABEL_112:
                  LOBYTE(v6) = v40 - 8;
                  if ( (v6 & 0x5D) != 0 )
                    goto LABEL_137;
                  v41 = *(_BYTE *)(v12 + 3);
                  if ( v41 == 1 || !v31 || !v32 )
                    goto LABEL_131;
                  LOBYTE(v12) = 0;
                  v6 = (unsigned __int64)&v31[v32];
                  v42 = v31 + 8;
                  if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v42 <= v6 )
                    {
                      LOBYTE(v12) = 1;
                      v34 = v31[2];
                      v33 = v31[1] & 0xF;
                      v35 = v31[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v42 <= v6 )
                    {
                      v33 = v31[2] & 0xF;
                      v43 = v32;
                      if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
                        v43 = (unsigned __int8)v31[7] + 8;
                      v6 = (unsigned __int64)(v31 + 13);
                      v12 = (unsigned __int64)&v31[v43];
                      if ( (unsigned __int64)(v31 + 13) > v12 )
                        v54 = 0;
                      else
                        v54 = v31[12];
                      if ( (unsigned __int64)(v31 + 14) <= v12 )
                        v35 = *(_BYTE *)v6;
                      LOBYTE(v12) = 1;
                    }
                    v34 = v54;
                  }
                  if ( (_BYTE)v12 )
                  {
                    LOBYTE(v2) = v34;
                    v44 = v35;
                  }
                  else
                  {
LABEL_131:
                    v33 = 0;
                    v44 = 0;
                  }
                  v52 = a2;
                  v51 = v44;
                  v50 = v2;
                  v49 = v33;
                  v48 = v30;
                  v47 = v41;
                  v28 = (const GUID *)&v63;
LABEL_67:
                  sub_140052E64(v6, v12, v28, a2, *(_DWORD *)(a2 + 48), v47, v48, v49, v50, v51, v52);
                  goto LABEL_137;
                }
              }
              else
              {
                v6 = (unsigned int)(*(_DWORD *)(v38 + v12) - 65);
                if ( *(_DWORD *)(v38 + v12) == 65 )
                {
                  v6 = v38 + 56;
                  if ( v38 + 56 <= v39 )
                  {
                    v56 = 1;
                    if ( *(_BYTE *)(v38 + v12 + 10) )
                      v36 = (char *)(v38 + v12 + 24);
                    v30 = *(_BYTE *)(v38 + v12 + 8);
                    v31 = *(_BYTE **)(v38 + v12 + 16);
                    v32 = *(_BYTE *)(v38 + v12 + 9);
                  }
                }
                else if ( *(_DWORD *)(v38 + v12) == 66 )
                {
                  v6 = v38 + 40;
                  if ( v38 + 40 <= v39 )
                  {
                    if ( *(_DWORD *)(v38 + v12 + 12) )
                      v36 = (char *)(v38 + v12 + 32);
                    v31 = *(_BYTE **)(v38 + v12 + 24);
                    goto LABEL_108;
                  }
                }
              }
              if ( v56 )
                goto LABEL_109;
              LODWORD(v6) = v58;
            }
          }
          v6 = (unsigned int)(v6 + 1);
          ++v37;
          v58 = v6;
          if ( (unsigned int)v6 >= v60 )
            goto LABEL_109;
        }
      }
      if ( *(_BYTE *)v7 != 27 )
        goto LABEL_137;
      if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_137;
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v2 = *v29;
        v9 = (const GUID *)&v63;
        goto LABEL_12;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_137;
      v10 = (const GUID *)&v63;
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_137;
    v10 = (const GUID *)&v63;
    v46 = *(_DWORD *)(a2 + 48);
LABEL_135:
    v11 = &stru_140148B18;
    goto LABEL_136;
  }
  v5 = byte_140168DAA == 0;
  v61 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v5 )
    goto LABEL_137;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_137;
    v10 = (const GUID *)&v62;
    v46 = *(_DWORD *)(a2 + 48);
    goto LABEL_135;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_137;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_137;
      v8 = *(int **)(a2 + 56);
      if ( v8 )
        v2 = *v8;
      v9 = (const GUID *)&v62;
LABEL_12:
      sub_140056AB0(v6, v7, v9, a2, v2, *(_DWORD *)(a2 + 48));
      goto LABEL_137;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_137;
    v10 = (const GUID *)&v62;
LABEL_15:
    v11 = &stru_140149FE8;
    v46 = *(_DWORD *)(a2 + 48);
LABEL_136:
    sub_140052F3C(v6, v11, v10, a2, v46);
    goto LABEL_137;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_137;
  v12 = *(_QWORD *)(v7 + 8);
  v13 = 0;
  v14 = 0LL;
  v53 = 0;
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
      goto LABEL_137;
LABEL_46:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_137;
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
          v53 = 0;
        else
          v53 = v14[12];
        if ( (unsigned __int64)(v14 + 14) <= v12 )
          v18 = *(_BYTE *)v6;
        LOBYTE(v12) = 1;
      }
      v17 = v53;
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
    v52 = a2;
    v51 = v27;
    v50 = v2;
    v49 = v16;
    v48 = v13;
    v47 = v24;
    v28 = (const GUID *)&v62;
    goto LABEL_67;
  }
  v19 = 0LL;
  v55 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_137;
  v6 = 0LL;
  v57 = 0;
  v59 = *(_DWORD *)(v12 + 56);
  if ( !v59 )
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
    v57 = v6;
    if ( (unsigned int)v6 >= v59 )
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
        v55 = 1;
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
    if ( v55 )
      goto LABEL_43;
    LODWORD(v6) = v57;
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
LABEL_137:
  IofCompleteRequest((PIRP)a2, 0);
  return v61;
}
