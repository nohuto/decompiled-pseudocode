/*
 * XREFs of sub_1400BC450 @ 0x1400BC450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_14002B060 @ 0x14002B060 (sub_14002B060.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400BC450(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r14
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r15
  char *v23; // r11
  unsigned int v24; // r13d
  unsigned int *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // [rsp+60h] [rbp-48h]
  char v34; // [rsp+61h] [rbp-47h]
  unsigned int v35; // [rsp+64h] [rbp-44h]
  GUID v36; // [rsp+68h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 224);
  v6 = v3 + *(unsigned int *)(v3 + 120);
  v7 = *(_QWORD *)(v5 + 24);
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 1 )
  {
    *(_DWORD *)(v1 + 48) = 0;
    *(_QWORD *)(v1 + 56) = *(unsigned int *)(v3 + 60);
  }
  if ( (*(_BYTE *)(a1 + 17) & 1) != 0 )
  {
    sub_14001F93C(v7, *(unsigned int *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(v7 + 4960) )
    sub_140021110(v7, 0LL, 0LL);
  if ( *(_BYTE *)(v6 + 80) == 1 )
  {
    sub_140017A20(a1, 0);
    if ( a1 != 48 )
      sub_140016754(v7, a1 - 48);
  }
  else
  {
    sub_14002B060(*(_QWORD *)(v5 + 728) + 64LL, (struct _SLIST_ENTRY *)(a1 - 48));
  }
  v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v9 = *(_DWORD *)(v8 + *(_QWORD *)(v5 + 40));
  while ( (v9 & 1) == 0 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(v5 + 40)), v9 - 2, v9);
    if ( v10 == v9 )
      goto LABEL_17;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_17:
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(v1 + 141) = -84;
  if ( v11 )
    goto LABEL_82;
  v36 = 0LL;
  IoGetActivityIdIrp(v1, &v36);
  v13 = *(_QWORD *)(v1 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_82;
    v15 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(v1 + 56);
        if ( v14 )
          v4 = *v14;
        sub_140056AB0(v12, v13, &v36, v1, v4, *(_DWORD *)(v1 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_82;
    v15 = &stru_140149FE8;
LABEL_81:
    sub_140052F3C(v12, v15, &v36, v1, *(_DWORD *)(v1 + 48));
    goto LABEL_82;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_82;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v33 = 0;
  v19 = 0;
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
      goto LABEL_58;
    goto LABEL_82;
  }
  v23 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_82;
  v24 = 0;
  v35 = *(_DWORD *)(v16 + 56);
  if ( !v35 )
    goto LABEL_55;
  v25 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_49:
    ++v24;
    ++v25;
    if ( v24 >= v35 )
      goto LABEL_55;
  }
  if ( *(_DWORD *)(v26 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v26 + v16) - 65);
    if ( *(_DWORD *)(v26 + v16) == 65 )
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v16) == 66 )
    {
      v12 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v16 + 12) )
          v23 = (char *)(v26 + v16 + 32);
        v18 = *(_BYTE **)(v26 + v16 + 24);
        goto LABEL_54;
      }
    }
    goto LABEL_48;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_48:
    if ( v34 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_54:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_55:
  if ( v23 )
  {
    v28 = *v23;
    v21 = 0;
LABEL_58:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_77;
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
            v33 = 0;
          else
            v33 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v33;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v4) = v21;
        v32 = v22;
      }
      else
      {
LABEL_77:
        v20 = 0;
        v32 = 0;
      }
      sub_140052E64(v12, v16, &v36, v1, *(_DWORD *)(v1 + 48), v29, v17, v20, v4, v32, v1);
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)v1, 1);
}
