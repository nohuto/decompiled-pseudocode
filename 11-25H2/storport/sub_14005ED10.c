/*
 * XREFs of sub_14005ED10 @ 0x14005ED10
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005ED10(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v5; // zf
  unsigned int v6; // esi
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
  unsigned int *v19; // r13
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int *v30; // rax
  __int64 v31; // rcx
  const EVENT_DESCRIPTOR *v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // r15
  _BYTE *v35; // r9
  unsigned __int8 v36; // r10
  char v37; // si
  char v38; // r13
  unsigned __int8 v39; // r12
  char *v40; // r11
  unsigned int v41; // ecx
  unsigned int v42; // r8d
  unsigned int *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // r14
  char v46; // cl
  char v47; // r8
  _BYTE *v48; // rcx
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // rcx
  char v54; // [rsp+68h] [rbp-9h]
  char v55; // [rsp+68h] [rbp-9h]
  char v56; // [rsp+69h] [rbp-8h]
  int v57; // [rsp+6Ch] [rbp-5h]
  unsigned int v58; // [rsp+6Ch] [rbp-5h]
  unsigned int v59; // [rsp+70h] [rbp-1h]
  unsigned int v60; // [rsp+70h] [rbp-1h]
  GUID v61; // [rsp+78h] [rbp+7h] BYREF
  GUID v62; // [rsp+88h] [rbp+17h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= 0x18u )
  {
    v5 = byte_140168DAA == 0;
    v27 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)v27 = 24;
    *(_DWORD *)(v27 + 4) = *(_DWORD *)(a1 + 408);
    *(_DWORD *)(v27 + 8) = *(_DWORD *)(a1 + 412);
    *(_DWORD *)(v27 + 12) = 0;
    *(_DWORD *)(v27 + 16) = *(_DWORD *)(a1 + 432);
    *(_BYTE *)(v27 + 20) = 1;
    *(_BYTE *)(v27 + 21) = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(v27 + 22) = 0;
    *(_QWORD *)(a2 + 56) = 24LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v5 )
      goto LABEL_134;
    v62 = 0LL;
    IoGetActivityIdIrp(a2, &v62);
    v29 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v29 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_134;
      v32 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_133;
    }
    if ( *(_BYTE *)v29 != 15 )
    {
      if ( *(_BYTE *)v29 != 27 )
        goto LABEL_134;
      if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v30 = *(unsigned int **)(a2 + 56);
          if ( v30 )
            v31 = *v30;
          else
            v31 = 0LL;
          sub_140056AB0(v31, v29, &v62, a2, v31, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_134;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
      {
LABEL_134:
        v6 = 0;
        goto LABEL_135;
      }
      v32 = &stru_140149FE8;
LABEL_133:
      sub_140052F3C(v28, v32, &v62, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_134;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_134;
    v33 = *(_QWORD *)(v29 + 8);
    v34 = 0;
    v35 = 0LL;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    if ( *(_BYTE *)(v33 + 2) == 40 )
    {
      v40 = 0LL;
      v55 = 0;
      if ( *(_DWORD *)(v33 + 20) )
        goto LABEL_134;
      v41 = 0;
      v60 = 0;
      v58 = *(_DWORD *)(v33 + 56);
      if ( !v58 )
        goto LABEL_109;
      v42 = *(_DWORD *)(v33 + 56);
      v43 = (unsigned int *)(v33 + 120);
      *(_QWORD *)&v61.Data1 = v33 + 120;
      while ( 1 )
      {
        v44 = *v43;
        if ( (unsigned int)v44 >= 0x80 )
        {
          v45 = *(unsigned int *)(v33 + 16);
          if ( (unsigned int)v44 < (unsigned int)v45 )
          {
            if ( *(_DWORD *)(v44 + v33) == 64 )
            {
              if ( v44 + 40 <= v45 )
              {
                if ( *(_BYTE *)(v44 + v33 + 10) )
                  v40 = (char *)(v44 + v33 + 24);
                v35 = *(_BYTE **)(v44 + v33 + 16);
LABEL_108:
                v36 = *(_BYTE *)(v44 + v33 + 9);
                v34 = *(_BYTE *)(v44 + v33 + 8);
LABEL_109:
                if ( v40 )
                {
                  v46 = *v40;
                  goto LABEL_112;
                }
                goto LABEL_134;
              }
            }
            else if ( *(_DWORD *)(v44 + v33) == 65 )
            {
              if ( v44 + 56 <= v45 )
              {
                v55 = 1;
                if ( *(_BYTE *)(v44 + v33 + 10) )
                  v40 = (char *)(v44 + v33 + 24);
                v34 = *(_BYTE *)(v44 + v33 + 8);
                v35 = *(_BYTE **)(v44 + v33 + 16);
                v36 = *(_BYTE *)(v44 + v33 + 9);
              }
            }
            else if ( *(_DWORD *)(v44 + v33) == 66 && v44 + 40 <= v45 )
            {
              if ( *(_DWORD *)(v44 + v33 + 12) )
                v40 = (char *)(v44 + v33 + 32);
              v35 = *(_BYTE **)(v44 + v33 + 24);
              goto LABEL_108;
            }
            if ( v55 )
              goto LABEL_109;
            v41 = v60;
            v42 = v58;
          }
        }
        ++v41;
        v43 = (unsigned int *)(*(_QWORD *)&v61.Data1 + 4LL);
        v60 = v41;
        *(_QWORD *)&v61.Data1 += 4LL;
        if ( v41 >= v42 )
          goto LABEL_109;
      }
    }
    v46 = *(_BYTE *)(v33 + 72);
    v35 = *(_BYTE **)(v33 + 32);
    v36 = *(_BYTE *)(v33 + 11);
    v34 = *(_BYTE *)(v33 + 4);
    if ( *(_BYTE *)(v33 + 2) )
      goto LABEL_134;
LABEL_112:
    if ( ((v46 - 8) & 0x5D) != 0 )
      goto LABEL_134;
    v47 = *(_BYTE *)(v33 + 3);
    if ( v47 == 1 || !v35 || !v36 )
      goto LABEL_129;
    LOBYTE(v33) = 0;
    v48 = &v35[v36];
    v49 = v35 + 8;
    if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
    {
      if ( v49 > v48 )
        goto LABEL_127;
      v38 = v35[2];
      v37 = v35[1] & 0xF;
      v39 = v35[3];
    }
    else
    {
      if ( v49 > v48 )
        goto LABEL_127;
      v37 = v35[2] & 0xF;
      v50 = v36;
      if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
        v50 = (unsigned __int8)v35[7] + 8;
      v33 = (unsigned __int64)&v35[v50];
      if ( (unsigned __int64)(v35 + 13) <= v33 )
        v38 = v35[12];
      if ( (unsigned __int64)(v35 + 14) <= v33 )
        v39 = v35[13];
    }
    LOBYTE(v33) = 1;
LABEL_127:
    if ( (_BYTE)v33 )
    {
      v51 = v38;
      v52 = v39;
LABEL_130:
      sub_140052E64(v52, v33, &v62, a2, *(_DWORD *)(a2 + 48), v47, v34, v37, v51, v52, a2);
      goto LABEL_134;
    }
LABEL_129:
    v37 = 0;
    v51 = 0;
    v52 = 0LL;
    goto LABEL_130;
  }
  v5 = byte_140168DAA == 0;
  v6 = -1073741789;
  *(_DWORD *)(a2 + 48) = -1073741789;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v5 )
    goto LABEL_135;
  v61 = 0LL;
  IoGetActivityIdIrp(a2, &v61);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_135;
    v10 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_135;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v3 = *v9;
        sub_140056AB0(v7, v8, &v61, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_135;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_135;
    v10 = &stru_140149FE8;
LABEL_14:
    sub_140052F3C(v7, v10, &v61, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_135;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_135;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v56 = 0;
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
      goto LABEL_45;
    goto LABEL_66;
  }
  v18 = 0LL;
  v54 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_66;
  v7 = 0LL;
  v57 = 0;
  v59 = *(_DWORD *)(v11 + 56);
  if ( !v59 )
    goto LABEL_42;
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
LABEL_36:
    v7 = (unsigned int)(v7 + 1);
    ++v19;
    v57 = v7;
    if ( (unsigned int)v7 >= v59 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v20 + v11) != 64 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v20 + v11) - 65);
    if ( *(_DWORD *)(v20 + v11) == 65 )
    {
      v7 = v20 + 56;
      if ( v20 + 56 <= v21 )
      {
        v54 = 1;
        if ( *(_BYTE *)(v20 + v11 + 10) )
          v18 = (char *)(v20 + v11 + 24);
        v12 = *(_BYTE *)(v20 + v11 + 8);
        v13 = *(_BYTE **)(v20 + v11 + 16);
        v14 = *(_BYTE *)(v20 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + v11) == 66 )
    {
      v7 = v20 + 40;
      if ( v20 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v20 + v11 + 12) )
          v18 = (char *)(v20 + v11 + 32);
        v13 = *(_BYTE **)(v20 + v11 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_34;
  }
  v7 = v20 + 40;
  if ( v20 + 40 > v21 )
  {
LABEL_34:
    if ( v54 )
      goto LABEL_42;
    LODWORD(v7) = v57;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v20 + v11 + 10) )
    v18 = (char *)(v20 + v11 + 24);
  v13 = *(_BYTE **)(v20 + v11 + 16);
LABEL_41:
  v14 = *(_BYTE *)(v20 + v11 + 9);
  v12 = *(_BYTE *)(v20 + v11 + 8);
LABEL_42:
  if ( v18 )
  {
    v22 = *v18;
    v16 = 0;
LABEL_45:
    LOBYTE(v7) = v22 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v11 + 3);
      if ( v23 == 1 || !v13 || !v14 )
        goto LABEL_64;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v24 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v24 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v24 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v25 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v25 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v11 = (unsigned __int64)&v13[v25];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v56 = 0;
          else
            v56 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *(_BYTE *)v7;
          LOBYTE(v11) = 1;
        }
        v16 = v56;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v26 = v17;
      }
      else
      {
LABEL_64:
        v15 = 0;
        v26 = 0;
      }
      sub_140052E64(v7, v11, &v61, a2, *(_DWORD *)(a2 + 48), v23, v12, v15, v3, v26, a2);
    }
  }
LABEL_66:
  v6 = -1073741789;
LABEL_135:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
