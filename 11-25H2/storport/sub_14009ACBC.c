/*
 * XREFs of sub_14009ACBC @ 0x14009ACBC
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140021150 @ 0x140021150 (sub_140021150.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14009ACBC(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  int v5; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v6; // rsi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r15
  char *v19; // r11
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // al
  int v31; // [rsp+20h] [rbp-A8h]
  char v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+61h] [rbp-67h]
  int v34; // [rsp+64h] [rbp-64h]
  unsigned int v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  v2 = -1073741823;
  v34 = -1073741823;
  v5 = 0;
  if ( sub_140021280(a1) )
  {
    sub_140021150(a1, 0, 2LL, 0LL);
    v6 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
    if ( sub_140021280(a1) )
      ExReleaseRundownProtectionCacheAware(*v6);
    ExReleaseRundownProtectionCacheAware(*v6);
    v2 = 0;
    v34 = 0;
  }
  v7 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v2;
  if ( v7 )
    goto LABEL_71;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_71;
    v31 = *(_DWORD *)(a2 + 48);
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v5 = *v10;
        sub_140056AB0(v8, v9, &v36, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_71;
    v11 = &stru_140149FE8;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_70:
    sub_140052F3C(v8, v11, &v36, a2, v31);
    goto LABEL_71;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_71;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v32 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_47;
    goto LABEL_71;
  }
  v19 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_71;
  v20 = 0;
  v35 = *(_DWORD *)(v12 + 56);
  if ( !v35 )
    goto LABEL_44;
  v21 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_37:
    ++v20;
    ++v21;
    if ( v20 >= v35 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v8 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_36;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_36:
    if ( v33 )
      goto LABEL_43;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_42:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_43:
  v2 = v34;
LABEL_44:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_47:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v12 + 3) == 1 || !v14 || !v15 )
        goto LABEL_66;
      v25 = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v25 = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v28 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v28 )
            v32 = 0;
          else
            v32 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v28 )
            v18 = *(_BYTE *)v8;
          v25 = 1;
        }
        v17 = v32;
      }
      if ( v25 )
      {
        LOBYTE(v5) = v17;
        v29 = v18;
      }
      else
      {
LABEL_66:
        v16 = 0;
        v29 = 0;
      }
      sub_140052E64(v8, v12, &v36, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v12 + 3), v13, v16, v5, v29, a2);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return v2;
}
