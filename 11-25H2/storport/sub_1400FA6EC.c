/*
 * XREFs of sub_1400FA6EC @ 0x1400FA6EC
 * Callers:
 *     sub_1401085A8 @ 0x1401085A8 (sub_1401085A8.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BB0A4 @ 0x1400BB0A4 (sub_1400BB0A4.c)
 *     sub_1400F157C @ 0x1400F157C (sub_1400F157C.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 *     sub_140111A1C @ 0x140111A1C (sub_140111A1C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400FA6EC(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v5; // r13d
  __int32 v6; // ebx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bl
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  char v21; // r13
  unsigned int v22; // r14d
  unsigned __int64 v23; // rbp
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  char v32; // [rsp+60h] [rbp-68h]
  unsigned int v33; // [rsp+64h] [rbp-64h]
  __int64 v34; // [rsp+68h] [rbp-60h] BYREF
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v34 = a1;
  v2 = 0;
  v33 = 0;
  v5 = 0;
  v6 = _InterlockedExchange((volatile __int32 *)(a1 + 96), 6);
  sub_1400BB0A4(a1);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  if ( ((v6 - 5) & 0xFFFFFFFD) != 0 )
  {
    v5 = sub_140111A1C(a1);
    v33 = v5;
  }
  sub_1400F157C(*(_QWORD *)(a1 + 16), a1, 1);
  sub_1400F82EC(&v34);
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v8 )
    goto LABEL_67;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_67;
    v12 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        sub_140056AB0(v9, v10, &v35, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_67;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_67;
    v12 = &stru_140149FE8;
LABEL_66:
    sub_140052F3C(v9, v12, &v35, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_67;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_67;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v32 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_43;
    goto LABEL_67;
  }
  v20 = 0LL;
  v21 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_67;
  v22 = 0;
  LODWORD(v34) = *(_DWORD *)(v13 + 56);
  if ( !(_DWORD)v34 )
    goto LABEL_40;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_34:
    if ( ++v22 >= (unsigned int)v34 )
      goto LABEL_40;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v20 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_39;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v21 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v20 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_33;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_33:
    if ( v21 )
      goto LABEL_40;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v20 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_39:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_40:
  if ( v20 )
  {
    v26 = *v20;
    v18 = 0;
LABEL_43:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v15 || !v16 )
        goto LABEL_62;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v28 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v29 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v29 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v29];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v32 = 0;
          else
            v32 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v32;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v2) = v18;
        v30 = v19;
      }
      else
      {
LABEL_62:
        v17 = 0;
        v30 = 0;
      }
      sub_140052E64(v9, v13, &v35, a2, *(_DWORD *)(a2 + 48), v27, v14, v17, v2, v30, a2);
    }
  }
LABEL_67:
  IofCompleteRequest((PIRP)a2, 0);
  return v33;
}
