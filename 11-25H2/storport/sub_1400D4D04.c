/*
 * XREFs of sub_1400D4D04 @ 0x1400D4D04
 * Callers:
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140087A3C @ 0x140087A3C (sub_140087A3C.c)
 *     sub_140087B50 @ 0x140087B50 (sub_140087B50.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400D4D04(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rsi
  unsigned int v7; // eax
  int v8; // ebp
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r12
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // si
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  unsigned int v26; // r15d
  unsigned __int64 v27; // r14
  __int64 v28; // r8
  int v29; // ecx
  char v30; // cl
  char v31; // r8
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v2 + 16) >= 0x10u
    && v4
    && *(_DWORD *)v4 == 16
    && *(_DWORD *)(v4 + 4) >= 0x10u
    && (v7 = *(_DWORD *)(v4 + 8), (v7 & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(v7) == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      v8 = sub_140087A3C(a1[1], v4);
      if ( v8 == -1073741637 )
        v8 = sub_140087B50(a1[1], v4);
      if ( v8 >= 0 )
      {
        v9 = a1[72];
        v10 = *(_DWORD *)(v4 + 8);
        v11 = *(_BYTE *)(v4 + 12) ? *(_DWORD *)(v9 + 160) | v10 : *(_DWORD *)(v9 + 160) & ~v10;
        *(_DWORD *)(v9 + 160) = v11;
        v12 = a1[18];
        if ( (v12 & 0x40000) == 0 )
          a1[18] = v12 | 0x40000;
      }
    }
    else
    {
      v8 = -1073741496;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v13 )
    goto LABEL_82;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_82;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        sub_140056AB0(v14, v15, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_82;
    v17 = &stru_140149FE8;
LABEL_81:
    sub_140052F3C(v14, v17, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_82;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_82;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v36 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_58;
    goto LABEL_82;
  }
  v25 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_82;
  v26 = 0;
  v38 = *(_DWORD *)(v18 + 56);
  if ( !v38 )
    goto LABEL_55;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v27 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v14 < (unsigned int)v27 )
        break;
    }
LABEL_49:
    if ( ++v26 >= v38 )
      goto LABEL_55;
  }
  v28 = (unsigned int)v14;
  v29 = *(_DWORD *)(v14 + v18) - 64;
  if ( v29 )
  {
    v14 = (unsigned int)(v29 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v28 + 40;
        if ( v28 + 40 <= v27 )
        {
          if ( *(_DWORD *)(v28 + v18 + 12) )
            v25 = (char *)(v28 + v18 + 32);
          v20 = *(_BYTE **)(v28 + v18 + 24);
          goto LABEL_54;
        }
      }
    }
    else
    {
      v14 = v28 + 56;
      if ( v28 + 56 <= v27 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v28 + v18 + 10) )
          v25 = (char *)(v28 + v18 + 24);
        v19 = *(_BYTE *)(v28 + v18 + 8);
        v20 = *(_BYTE **)(v28 + v18 + 16);
        v21 = *(_BYTE *)(v28 + v18 + 9);
      }
    }
    goto LABEL_48;
  }
  v14 = v28 + 40;
  if ( v28 + 40 > v27 )
  {
LABEL_48:
    if ( v37 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v28 + v18 + 10) )
    v25 = (char *)(v28 + v18 + 24);
  v20 = *(_BYTE **)(v28 + v18 + 16);
LABEL_54:
  v21 = *(_BYTE *)(v28 + v18 + 9);
  v19 = *(_BYTE *)(v28 + v18 + 8);
LABEL_55:
  if ( v25 )
  {
    v30 = *v25;
    v23 = 0;
LABEL_58:
    LOBYTE(v14) = v30 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v18 + 3);
      if ( v31 == 1 || !v20 || !v21 )
        goto LABEL_77;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v32 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v33 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v33 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v33];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v36 = 0;
          else
            v36 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v36;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v3) = v23;
        v34 = v24;
      }
      else
      {
LABEL_77:
        v22 = 0;
        v34 = 0;
      }
      sub_140052E64(v14, v18, &v39, a2, *(_DWORD *)(a2 + 48), v31, v19, v22, v3, v34, a2);
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
