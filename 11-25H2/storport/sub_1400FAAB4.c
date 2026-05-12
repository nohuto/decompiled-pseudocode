/*
 * XREFs of sub_1400FAAB4 @ 0x1400FAAB4
 * Callers:
 *     sub_140108958 @ 0x140108958 (sub_140108958.c)
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

__int64 __fastcall sub_1400FAAB4(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  unsigned int v7; // r13d
  __int32 v8; // r14d
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r12
  char *v22; // r11
  char v23; // r13
  unsigned int v24; // r14d
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v34; // [rsp+60h] [rbp-68h]
  unsigned int v35; // [rsp+64h] [rbp-64h]
  __int64 v36; // [rsp+68h] [rbp-60h] BYREF
  GUID v37; // [rsp+70h] [rbp-58h] BYREF

  v36 = a1;
  v3 = 0;
  v35 = 0;
  v7 = 0;
  v8 = _InterlockedExchange((volatile __int32 *)(a1 + 96), 6);
  sub_1400BB0A4(a1);
  if ( *a3 )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    *a3 = 0;
  }
  if ( ((v8 - 5) & 0xFFFFFFFD) != 0 )
  {
    v7 = sub_140111A1C(a1);
    v35 = v7;
  }
  sub_1400F157C(*(_QWORD *)(a1 + 16), a1, 1);
  sub_1400F82EC(&v36);
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v10 )
    goto LABEL_69;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v14 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        sub_140056AB0(v11, v12, &v37, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v14 = &stru_140149FE8;
LABEL_68:
    sub_140052F3C(v11, v14, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v34 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v22 = 0LL;
  v23 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_69;
  v24 = 0;
  LODWORD(v36) = *(_DWORD *)(v15 + 56);
  if ( !(_DWORD)v36 )
    goto LABEL_42;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v25 )
        break;
    }
LABEL_36:
    if ( ++v24 >= (unsigned int)v36 )
      goto LABEL_42;
  }
  v26 = (unsigned int)v11;
  v27 = *(_DWORD *)(v11 + v15) - 64;
  if ( v27 )
  {
    v11 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v22 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v23 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v22 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_35;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_35:
    if ( v23 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v22 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_41:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_42:
  if ( v22 )
  {
    v28 = *v22;
    v20 = 0;
LABEL_45:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v15 + 3);
      if ( v29 == 1 || !v17 || !v18 )
        goto LABEL_64;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v30 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v31 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v31 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v31];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v34 = 0;
          else
            v34 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v34;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v3) = v20;
        v32 = v21;
      }
      else
      {
LABEL_64:
        v19 = 0;
        v32 = 0;
      }
      sub_140052E64(v11, v15, &v37, a2, *(_DWORD *)(a2 + 48), v29, v16, v19, v3, v32, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v35;
}
