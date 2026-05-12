/*
 * XREFs of sub_140092CC8 @ 0x140092CC8
 * Callers:
 *     sub_140095F04 @ 0x140095F04 (sub_140095F04.c)
 * Callees:
 *     sub_140040448 @ 0x140040448 (sub_140040448.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14009E168 @ 0x14009E168 (sub_14009E168.c)
 *     sub_1400A1550 @ 0x1400A1550 (sub_1400A1550.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140092CC8(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned int v7; // eax
  int v8; // ebx
  bool v9; // zf
  unsigned int v10; // ebp
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r14
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r15
  char *v22; // r11
  unsigned int v23; // r13d
  unsigned int *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  unsigned int v35; // [rsp+64h] [rbp-64h]
  unsigned int v36; // [rsp+68h] [rbp-60h]
  GUID v37; // [rsp+70h] [rbp-58h] BYREF

  if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(a1 + 56), 7) - 5) > 1 )
    sub_1400A1550();
  *(_BYTE *)(a1 + 504) &= ~1u;
  sub_14009E168(a1);
  v4 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v5 = *(_DWORD *)(v4 + *(_QWORD *)(a1 + 40));
  while ( (v5 & 1) == 0 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + *(_QWORD *)(a1 + 40)), v5 - 2, v5);
    if ( v6 == v5 )
      goto LABEL_9;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_9:
  v7 = sub_140040448(a1);
  v8 = 0;
  v35 = v7;
  v9 = byte_140168DAA == 0;
  v10 = v7;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v9 )
    goto LABEL_75;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_75;
    v14 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v8 = *v13;
        sub_140056AB0(v11, v12, &v37, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_75;
    v14 = &stru_140149FE8;
LABEL_74:
    sub_140052F3C(v11, v14, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_75;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_75;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v33 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v22 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_75;
  v23 = 0;
  v36 = *(_DWORD *)(v15 + 56);
  if ( !v36 )
    goto LABEL_48;
  v24 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_41:
    ++v23;
    ++v24;
    if ( v23 >= v36 )
      goto LABEL_47;
  }
  if ( *(_DWORD *)(v25 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v25 + v15) - 65);
    if ( *(_DWORD *)(v25 + v15) == 65 )
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v25 + v15 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v25 + v15 + 8);
        v17 = *(_BYTE **)(v25 + v15 + 16);
        v18 = *(_BYTE *)(v25 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v15) == 66 )
    {
      v11 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v15 + 12) )
          v22 = (char *)(v25 + v15 + 32);
        v17 = *(_BYTE **)(v25 + v15 + 24);
        goto LABEL_46;
      }
    }
    goto LABEL_40;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_40:
    if ( v34 )
      goto LABEL_47;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v25 + v15 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_46:
  v18 = *(_BYTE *)(v25 + v15 + 9);
  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_47:
  v10 = v35;
LABEL_48:
  if ( v22 )
  {
    v27 = *v22;
    v20 = 0;
LABEL_51:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_70;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v33 = 0;
          else
            v33 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v33;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v8) = v20;
        v31 = v21;
      }
      else
      {
LABEL_70:
        v19 = 0;
        v31 = 0;
      }
      sub_140052E64(v11, v15, &v37, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v8, v31, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v10;
}
