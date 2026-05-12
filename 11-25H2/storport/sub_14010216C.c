/*
 * XREFs of sub_14010216C @ 0x14010216C
 * Callers:
 *     sub_140018EE0 @ 0x140018EE0 (sub_140018EE0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056A18 @ 0x140056A18 (sub_140056A18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     sub_1400FB018 @ 0x1400FB018 (sub_1400FB018.c)
 *     sub_1401062FC @ 0x1401062FC (sub_1401062FC.c)
 *     sub_1401085A8 @ 0x1401085A8 (sub_1401085A8.c)
 *     sub_140108958 @ 0x140108958 (sub_140108958.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14017C99C @ 0x14017C99C (sub_14017C99C.c)
 *     sub_140181DD4 @ 0x140181DD4 (sub_140181DD4.c)
 *     sub_1401978C4 @ 0x1401978C4 (sub_1401978C4.c)
 *     sub_14019985C @ 0x14019985C (sub_14019985C.c)
 *     sub_14019C090 @ 0x14019C090 (sub_14019C090.c)
 *     sub_14019C784 @ 0x14019C784 (sub_14019C784.c)
 *     sub_14019CB58 @ 0x14019CB58 (sub_14019CB58.c)
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 *     sub_14019D9F8 @ 0x14019D9F8 (sub_14019D9F8.c)
 *     sub_14019DD7C @ 0x14019DD7C (sub_14019DD7C.c)
 *     sub_14019E114 @ 0x14019E114 (sub_14019E114.c)
 *     sub_14019EDA4 @ 0x14019EDA4 (sub_14019EDA4.c)
 *     sub_14019F2C0 @ 0x14019F2C0 (sub_14019F2C0.c)
 *     sub_1401A6E7C @ 0x1401A6E7C (sub_1401A6E7C.c)
 */

__int64 __fastcall sub_14010216C(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // r13
  unsigned int v9; // ebx
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // bl
  char v21; // r14
  char v22; // r11
  char *v23; // r11
  unsigned int v24; // r12d
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v34; // r15
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // [rsp+20h] [rbp-59h]
  __int64 v42; // [rsp+28h] [rbp-51h]
  __int64 v43; // [rsp+30h] [rbp-49h]
  char v44; // [rsp+60h] [rbp-19h] BYREF
  char v45; // [rsp+61h] [rbp-18h]
  char v46; // [rsp+62h] [rbp-17h]
  unsigned int v47; // [rsp+64h] [rbp-15h]
  unsigned int v48; // [rsp+68h] [rbp-11h]
  GUID v49; // [rsp+70h] [rbp-9h] BYREF
  GUID v50; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  v50 = 0LL;
  v44 = 0;
  v47 = sub_1400F8C38(a1, a2);
  v7 = v47;
  if ( v47 == -1073741738 && *(_DWORD *)(a1 + 96) == 7 )
  {
    ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    v7 = sub_1400F8C38(a1, a2);
    v47 = v7;
  }
  v8 = *(_QWORD *)(a2 + 184);
  v9 = *(unsigned __int8 *)(v8 + 1);
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v50);
    if ( v9 > 0x16 || (v10 = 4718720, !_bittest(&v10, v9)) )
    {
      if ( (byte_1401694F2 & 0x20) != 0 )
        sub_140056A18(v6, v5, &v50, a2, v9, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v7 >= 0 )
  {
    v34 = 1;
    v44 = 1;
    if ( v9 > 0xC )
    {
      if ( v9 > 0x13 )
      {
        if ( v9 == 20 )
        {
          v39 = sub_14019D9F8(a1, a2);
          goto LABEL_129;
        }
        if ( v9 != 21 )
        {
          switch ( v9 )
          {
            case 0x16u:
              if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
              {
                LODWORD(v42) = *(_DWORD *)(v8 + 16);
                LODWORD(v41) = v9;
                sub_140056A18(v6, v5, &v50, a2, v41, v42, *(_QWORD *)(a1 + 8));
              }
              v39 = sub_1400FB018(a1, a2);
              goto LABEL_129;
            case 0x17u:
              return (unsigned int)sub_1401A6E7C(a1, a2);
            case 0x19u:
              v39 = sub_14019985C(a1, a2);
              goto LABEL_129;
          }
        }
      }
      else if ( v9 == 19 )
      {
        if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
        {
          LODWORD(v42) = *(_DWORD *)(v8 + 8);
          LODWORD(v41) = 19;
          sub_140056A18(v6, v5, &v50, a2, v41, v42, *(_QWORD *)(a1 + 8));
        }
        v39 = sub_14019D5FC(a1, a2);
        goto LABEL_129;
      }
    }
    else
    {
      if ( v9 == 12 )
      {
        v39 = sub_14019CB58(a1, a2);
        goto LABEL_129;
      }
      if ( v9 > 6 )
      {
        switch ( v9 )
        {
          case 7u:
            if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
            {
              LODWORD(v42) = *(_DWORD *)(v8 + 8);
              LODWORD(v41) = 7;
              sub_140056A18(v6, v5, &v50, a2, v41, v42, *(_QWORD *)(a1 + 8));
            }
            v39 = sub_14019C784(a1, a2);
            goto LABEL_129;
          case 8u:
            v39 = sub_1401062FC(a1, a2);
            goto LABEL_129;
          case 9u:
            v39 = sub_14019C090(a1, a2);
            goto LABEL_129;
        }
        if ( v9 - 10 <= 1 )
        {
          v39 = sub_140181DD4(v6, a2);
          goto LABEL_129;
        }
      }
      else
      {
        if ( v9 == 6 )
          goto LABEL_91;
        if ( !v9 )
        {
          v39 = sub_14019EDA4(a1, a2);
          goto LABEL_129;
        }
        v35 = v9 - 1;
        if ( !v35 )
        {
          v39 = sub_14019DD7C(a1, a2);
          goto LABEL_129;
        }
        v36 = v35 - 1;
        if ( !v36 )
          goto LABEL_92;
        v37 = v36 - 1;
        if ( !v37 )
        {
LABEL_91:
          v39 = sub_1401978C4(a1, a2);
          goto LABEL_129;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
          v39 = sub_14019F2C0(a1, a2);
          goto LABEL_129;
        }
        if ( v38 == 1 )
        {
          v39 = sub_14019E114(a1, a2);
          goto LABEL_129;
        }
      }
    }
    v39 = sub_14017C99C(v6, a2);
    goto LABEL_129;
  }
  if ( v9 == 2 && ((*(_DWORD *)(a1 + 96) - 5) & 0xFFFFFFFD) == 0 )
  {
LABEL_92:
    if ( byte_1401687D0 )
    {
      v39 = sub_140108958(a1, a2, &v44);
      v34 = v44;
    }
    else
    {
      v34 = 0;
      v39 = sub_1401085A8(a1, a2);
    }
LABEL_129:
    v40 = v39;
    if ( v34 )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    return v40;
  }
  v11 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v11 )
    goto LABEL_78;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_78;
    v15 = &stru_140148B18;
    goto LABEL_77;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_78;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        LODWORD(v42) = *(_DWORD *)(a2 + 48);
        LODWORD(v41) = v2;
        sub_140056AB0(v12, v13, &v49, a2, v41, v42);
      }
      goto LABEL_78;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_78;
    v15 = &stru_140149FE8;
LABEL_77:
    LODWORD(v41) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v12, v15, &v49, a2, v41);
    goto LABEL_78;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_78;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v45 = 0;
  v19 = 0;
  v44 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_53;
    goto LABEL_78;
  }
  v23 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_78;
  v24 = 0;
  v48 = *(_DWORD *)(v16 + 56);
  if ( !v48 )
    goto LABEL_50;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v25 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v25 )
        break;
    }
LABEL_43:
    if ( ++v24 >= v48 )
      goto LABEL_49;
  }
  v26 = (unsigned int)v12;
  v27 = *(_DWORD *)(v12 + v16) - 64;
  if ( v27 )
  {
    v12 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v16 + 12) )
            v23 = (char *)(v26 + v16 + 32);
          v18 = *(_BYTE **)(v26 + v16 + 24);
          goto LABEL_48;
        }
      }
    }
    else
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    goto LABEL_42;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_42:
    if ( v46 )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_48:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_49:
  v21 = 0;
LABEL_50:
  if ( v23 )
  {
    v28 = *v23;
    v22 = 0;
LABEL_53:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_73;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v31 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v31 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v45 = 0;
          else
            v45 = v18[12];
          if ( (unsigned __int64)(v18 + 14) > v16 )
            v44 = 0;
          else
            v44 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v22 = v44;
        v21 = v45;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v2) = v21;
        v32 = v22;
      }
      else
      {
LABEL_73:
        v20 = 0;
        v32 = 0;
      }
      LOBYTE(v43) = v17;
      LOBYTE(v42) = v29;
      LODWORD(v41) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v12, v16, &v49, a2, v41, v42, v43, v20, v2, v32, a2);
    }
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return v47;
}
