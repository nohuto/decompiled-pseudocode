/*
 * XREFs of sub_1400DCEE0 @ 0x1400DCEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E0F0C @ 0x1400E0F0C (sub_1400E0F0C.c)
 *     sub_1400E4CB8 @ 0x1400E4CB8 (sub_1400E4CB8.c)
 *     sub_1400E4E9C @ 0x1400E4E9C (sub_1400E4E9C.c)
 */

void __fastcall sub_1400DCEE0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // dl
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r9
  bool v14; // zf
  char v15; // al
  unsigned __int16 v16; // ax
  __int16 v17; // cx
  char v18; // r9

  if ( *(_BYTE *)(a2 + 2) == 40 && (v4 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(unsigned int *)(a2 + 4 * v5 + 120);
      if ( (unsigned int)v6 >= 0x80 && (unsigned int)v6 < *(_DWORD *)(a2 + 16) )
      {
        v7 = a2 + v6;
        if ( *(_DWORD *)(a2 + v6) == 67 )
          break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v7 = 0LL;
  }
  v8 = *(_BYTE *)(a2 + 3);
  if ( v8 != 1 )
  {
    if ( v8 == 37 || v8 == 2 )
      return;
    goto LABEL_33;
  }
  v9 = *(_WORD *)(v7 + 86);
  if ( (v9 & 0xE00) != 0 || (v9 & 0x1FE) != 0 )
  {
LABEL_33:
    v16 = *(_WORD *)(v7 + 86);
    v17 = v16 >> 1;
    v18 = v16 >> 9;
    if ( (v18 & 7) == 1 && (_BYTE)v17 == 5 )
      return;
    sub_1400A870C(
      a1,
      1,
      3,
      (__int64)L"Async Event Request completion - failure",
      L"SrbStatus",
      v8,
      L"SCT",
      v18 & 7,
      L"SC",
      v17,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    goto LABEL_36;
  }
  sub_1400A870C(
    a1,
    1,
    4,
    (__int64)L"Async Event Request completion - success",
    L"AsyncEventType",
    *(_BYTE *)(v7 + 96) & 7,
    L"AsyncEventInfo",
    *(_BYTE *)(v7 + 97),
    L"LogPage",
    *(_BYTE *)(v7 + 98),
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  LOBYTE(v11) = *(_BYTE *)(v7 + 98);
  v12 = *(_DWORD *)(v7 + 96) & 7;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v14 = (_BYTE)v11 == 2;
    }
    else
    {
      if ( v12 != 2 )
        goto LABEL_36;
      v15 = *(_BYTE *)(v7 + 97);
      if ( !v15 )
      {
        if ( (_BYTE)v11 != 4 )
          goto LABEL_36;
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 1u);
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 2u) )
          goto LABEL_36;
        v13 = 4096LL;
LABEL_26:
        if ( (int)sub_1400E0F0C(a1, v10, v11, v13) >= 0 )
          return;
        goto LABEL_36;
      }
      if ( v15 != 2 )
      {
        if ( v15 == -16 )
        {
          *(_QWORD *)(a1 + 136) |= 0x200000000uLL;
          if ( KeCancelTimer((PKTIMER)(a1 + 280)) )
            sub_1400E4CB8(a1, 100LL);
        }
        goto LABEL_36;
      }
      v14 = (_BYTE)v11 == 8;
    }
    if ( !v14 )
      goto LABEL_36;
    v13 = 512LL;
    goto LABEL_26;
  }
  if ( (_BYTE)v11 == 1 )
  {
    v13 = (unsigned int)(v12 + 64);
    goto LABEL_26;
  }
LABEL_36:
  if ( (int)sub_1400E4E9C(a1, a2) < 0 )
  {
    *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
    if ( *(_DWORD *)(a1 + 572) == 1 )
      sub_1400E4CB8(a1, 5000LL);
  }
}
