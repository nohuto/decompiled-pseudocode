/*
 * XREFs of sub_1401ABCFC @ 0x1401ABCFC
 * Callers:
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AC100 @ 0x1401AC100 (sub_1401AC100.c)
 */

__int64 __fastcall sub_1401ABCFC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // r13d
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  const GUID *v12; // r8
  const EVENT_DESCRIPTOR *v13; // rdx
  int *v14; // rax
  int *v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rax
  char v18; // si
  unsigned int v19; // eax
  char v20; // r12
  char v21; // r11
  char v22; // al
  const GUID *v23; // r8
  char v24; // si
  char v25; // al
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // r12
  char v29; // r11
  const GUID *v30; // r8
  char v31; // r15
  _BYTE *v32; // r9
  unsigned __int8 v33; // r10
  char *v34; // r11
  unsigned int v35; // eax
  unsigned int v36; // r8d
  unsigned int *v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  char v40; // cl
  char v41; // r8
  char v42; // r15
  _BYTE *v43; // r9
  unsigned __int8 v44; // r10
  char *v45; // r11
  unsigned int v46; // eax
  unsigned int v47; // r8d
  unsigned int *v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // r14
  char v51; // cl
  char v52; // r8
  char v53; // [rsp+28h] [rbp-51h]
  char v54; // [rsp+30h] [rbp-49h]
  char v55; // [rsp+38h] [rbp-41h]
  char v56; // [rsp+40h] [rbp-39h]
  char v57; // [rsp+48h] [rbp-31h]
  __int64 v58; // [rsp+50h] [rbp-29h]
  char v59; // [rsp+60h] [rbp-19h]
  char v60; // [rsp+60h] [rbp-19h]
  char v61; // [rsp+61h] [rbp-18h]
  char v62; // [rsp+61h] [rbp-18h]
  unsigned int v63; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-11h]
  unsigned __int64 v65; // [rsp+70h] [rbp-9h]
  __int128 v66; // [rsp+78h] [rbp-1h] BYREF
  __int128 v67; // [rsp+88h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v63 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = byte_140168DAA == 0;
    v7 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v8 )
      goto LABEL_9;
    v66 = 0LL;
    IoGetActivityIdIrp(a2, &v66);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 != 14 )
    {
      if ( *(_BYTE *)v10 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_9;
        v16 = *(_QWORD *)(v10 + 8);
        v31 = 0;
        v32 = 0LL;
        v59 = 0;
        v33 = 0;
        v18 = 0;
        v21 = 0;
        v20 = 0;
        if ( *(_BYTE *)(v16 + 2) != 40 )
        {
          v40 = *(_BYTE *)(v16 + 72);
          v32 = *(_BYTE **)(v16 + 32);
          v33 = *(_BYTE *)(v16 + 11);
          v31 = *(_BYTE *)(v16 + 4);
          if ( *(_BYTE *)(v16 + 2) )
            goto LABEL_9;
          goto LABEL_113;
        }
        v34 = 0LL;
        v61 = 0;
        if ( *(_DWORD *)(v16 + 20) )
          goto LABEL_9;
        v35 = *(_DWORD *)(v16 + 56);
        v9 = 0LL;
        v63 = 0;
        v64 = v35;
        if ( !v35 )
          goto LABEL_110;
        v36 = v64;
        v37 = (unsigned int *)(v16 + 120);
        v65 = v16 + 120;
        while ( 1 )
        {
          v38 = *v37;
          if ( (unsigned int)v38 >= 0x80 )
          {
            v39 = *(unsigned int *)(v16 + 16);
            if ( (unsigned int)v38 < (unsigned int)v39 )
            {
              if ( *(_DWORD *)(v38 + v16) == 64 )
              {
                v9 = v38 + 40;
                if ( v38 + 40 <= v39 )
                {
                  if ( *(_BYTE *)(v38 + v16 + 10) )
                    v34 = (char *)(v38 + v16 + 24);
                  v32 = *(_BYTE **)(v38 + v16 + 16);
LABEL_109:
                  v33 = *(_BYTE *)(v38 + v16 + 9);
                  v31 = *(_BYTE *)(v38 + v16 + 8);
LABEL_110:
                  if ( !v34 )
                    goto LABEL_9;
                  v40 = *v34;
                  v21 = 0;
LABEL_113:
                  LOBYTE(v9) = v40 - 8;
                  if ( (v9 & 0x5D) != 0 )
                    goto LABEL_9;
                  v41 = *(_BYTE *)(v16 + 3);
                  if ( v41 == 1 || !v32 || !v33 )
                    goto LABEL_50;
                  LOBYTE(v16) = 0;
                  v9 = (unsigned __int64)&v32[v33];
                  v17 = v32 + 8;
                  if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v17 <= v9 )
                    {
                      LOBYTE(v16) = 1;
                      v21 = v32[2];
                      v18 = v32[1] & 0xF;
                      v20 = v32[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v17 <= v9 )
                    {
                      v18 = v32[2] & 0xF;
                      v19 = v33;
                      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
                        v19 = (unsigned __int8)v32[7] + 8;
                      v9 = (unsigned __int64)(v32 + 13);
                      v16 = (unsigned __int64)&v32[v19];
                      if ( (unsigned __int64)(v32 + 13) > v16 )
                        v59 = 0;
                      else
                        v59 = v32[12];
                      if ( (unsigned __int64)(v32 + 14) <= v16 )
                        v20 = *(_BYTE *)v9;
                      LOBYTE(v16) = 1;
                    }
                    v21 = v59;
                  }
                  if ( (_BYTE)v16 )
                  {
                    LOBYTE(v5) = v21;
                    v22 = v20;
                  }
                  else
                  {
LABEL_50:
                    v18 = 0;
                    v22 = 0;
                  }
                  v58 = a2;
                  v57 = v22;
                  v56 = v5;
                  v55 = v18;
                  v54 = v31;
                  v53 = v41;
                  v23 = (const GUID *)&v66;
LABEL_54:
                  sub_140052E64(v9, v16, v23, a2, *(_DWORD *)(a2 + 48), v53, v54, v55, v56, v57, v58);
                  goto LABEL_9;
                }
              }
              else
              {
                v9 = (unsigned int)(*(_DWORD *)(v38 + v16) - 65);
                if ( *(_DWORD *)(v38 + v16) == 65 )
                {
                  v9 = v38 + 56;
                  if ( v38 + 56 <= v39 )
                  {
                    v61 = 1;
                    if ( *(_BYTE *)(v38 + v16 + 10) )
                      v34 = (char *)(v38 + v16 + 24);
                    v31 = *(_BYTE *)(v38 + v16 + 8);
                    v32 = *(_BYTE **)(v38 + v16 + 16);
                    v33 = *(_BYTE *)(v38 + v16 + 9);
                  }
                }
                else if ( *(_DWORD *)(v38 + v16) == 66 )
                {
                  v9 = v38 + 40;
                  if ( v38 + 40 <= v39 )
                  {
                    if ( *(_DWORD *)(v38 + v16 + 12) )
                      v34 = (char *)(v38 + v16 + 32);
                    v32 = *(_BYTE **)(v38 + v16 + 24);
                    goto LABEL_109;
                  }
                }
              }
              if ( v61 )
                goto LABEL_110;
              LODWORD(v9) = v63;
              v36 = v64;
            }
          }
          v9 = (unsigned int)(v9 + 1);
          v37 = (unsigned int *)(v65 + 4);
          v63 = v9;
          v65 += 4LL;
          if ( (unsigned int)v9 >= v36 )
            goto LABEL_110;
        }
      }
      if ( *(_BYTE *)v10 != 27 )
        goto LABEL_9;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_9;
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v5 = *v15;
        v30 = (const GUID *)&v66;
        goto LABEL_83;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_9;
      v12 = (const GUID *)&v66;
      goto LABEL_21;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_9;
    v12 = (const GUID *)&v66;
LABEL_24:
    v13 = &stru_140148B18;
    goto LABEL_25;
  }
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 )
  {
    if ( v6 == 1 )
      v7 = 0;
    else
      v7 = -1073741637;
  }
  else
  {
    v7 = sub_1401AC100(a1, v4, &v63);
    if ( v7 < 0 )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      *(_QWORD *)(a2 + 56) = v63;
  }
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v8 )
    goto LABEL_9;
  v67 = 0LL;
  IoGetActivityIdIrp(a2, &v67);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_9;
    v12 = (const GUID *)&v67;
    goto LABEL_24;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_9;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_9;
      v14 = *(int **)(a2 + 56);
      if ( v14 )
        v5 = *v14;
      v30 = (const GUID *)&v67;
LABEL_83:
      sub_140056AB0(v9, v10, v30, a2, v5, *(_DWORD *)(a2 + 48));
      goto LABEL_9;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_9;
    v12 = (const GUID *)&v67;
LABEL_21:
    v13 = &stru_140149FE8;
LABEL_25:
    sub_140052F3C(v9, v13, v12, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_9;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_9;
  v16 = *(_QWORD *)(v10 + 8);
  v42 = 0;
  v43 = 0LL;
  v60 = 0;
  v44 = 0;
  v24 = 0;
  v29 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v51 = *(_BYTE *)(v16 + 72);
    v43 = *(_BYTE **)(v16 + 32);
    v44 = *(_BYTE *)(v16 + 11);
    v42 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_9;
LABEL_146:
    LOBYTE(v9) = v51 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_9;
    v52 = *(_BYTE *)(v16 + 3);
    if ( v52 == 1 || !v43 || !v44 )
      goto LABEL_52;
    LOBYTE(v16) = 0;
    v9 = (unsigned __int64)&v43[v44];
    v26 = v43 + 8;
    if ( (unsigned __int8)((*v43 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v26 <= v9 )
      {
        LOBYTE(v16) = 1;
        v29 = v43[2];
        v24 = v43[1] & 0xF;
        v28 = v43[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v26 <= v9 )
      {
        v24 = v43[2] & 0xF;
        v27 = v44;
        if ( (unsigned int)(unsigned __int8)v43[7] + 8 <= v44 )
          v27 = (unsigned __int8)v43[7] + 8;
        v9 = (unsigned __int64)(v43 + 13);
        v16 = (unsigned __int64)&v43[v27];
        if ( (unsigned __int64)(v43 + 13) > v16 )
          v60 = 0;
        else
          v60 = v43[12];
        if ( (unsigned __int64)(v43 + 14) <= v16 )
          v28 = *(_BYTE *)v9;
        LOBYTE(v16) = 1;
      }
      v29 = v60;
    }
    if ( (_BYTE)v16 )
    {
      LOBYTE(v5) = v29;
      v25 = v28;
    }
    else
    {
LABEL_52:
      v24 = 0;
      v25 = 0;
    }
    v58 = a2;
    v57 = v25;
    v56 = v5;
    v55 = v24;
    v54 = v42;
    v53 = v52;
    v23 = (const GUID *)&v67;
    goto LABEL_54;
  }
  v45 = 0LL;
  v62 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_9;
  v46 = *(_DWORD *)(v16 + 56);
  v9 = 0LL;
  v64 = 0;
  v63 = v46;
  if ( !v46 )
    goto LABEL_143;
  v47 = v63;
  v48 = (unsigned int *)(v16 + 120);
  v65 = v16 + 120;
  while ( 1 )
  {
    v49 = *v48;
    if ( (unsigned int)v49 >= 0x80 )
    {
      v50 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v49 < (unsigned int)v50 )
        break;
    }
LABEL_136:
    v9 = (unsigned int)(v9 + 1);
    v48 = (unsigned int *)(v65 + 4);
    v64 = v9;
    v65 += 4LL;
    if ( (unsigned int)v9 >= v47 )
      goto LABEL_143;
  }
  if ( *(_DWORD *)(v49 + v16) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v49 + v16) - 65);
    if ( *(_DWORD *)(v49 + v16) == 65 )
    {
      v9 = v49 + 56;
      if ( v49 + 56 <= v50 )
      {
        v62 = 1;
        if ( *(_BYTE *)(v49 + v16 + 10) )
          v45 = (char *)(v49 + v16 + 24);
        v42 = *(_BYTE *)(v49 + v16 + 8);
        v43 = *(_BYTE **)(v49 + v16 + 16);
        v44 = *(_BYTE *)(v49 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v49 + v16) == 66 )
    {
      v9 = v49 + 40;
      if ( v49 + 40 <= v50 )
      {
        if ( *(_DWORD *)(v49 + v16 + 12) )
          v45 = (char *)(v49 + v16 + 32);
        v43 = *(_BYTE **)(v49 + v16 + 24);
        goto LABEL_142;
      }
    }
    goto LABEL_134;
  }
  v9 = v49 + 40;
  if ( v49 + 40 > v50 )
  {
LABEL_134:
    if ( v62 )
      goto LABEL_143;
    LODWORD(v9) = v64;
    v47 = v63;
    goto LABEL_136;
  }
  if ( *(_BYTE *)(v49 + v16 + 10) )
    v45 = (char *)(v49 + v16 + 24);
  v43 = *(_BYTE **)(v49 + v16 + 16);
LABEL_142:
  v44 = *(_BYTE *)(v49 + v16 + 9);
  v42 = *(_BYTE *)(v49 + v16 + 8);
LABEL_143:
  if ( v45 )
  {
    v51 = *v45;
    v29 = 0;
    goto LABEL_146;
  }
LABEL_9:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
