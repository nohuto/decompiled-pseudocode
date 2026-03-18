/*
 * XREFs of sub_14002CA30 @ 0x14002CA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14002B7D8 @ 0x14002B7D8 (sub_14002B7D8.c)
 *     sub_14002C5F0 @ 0x14002C5F0 (sub_14002C5F0.c)
 */

void __fastcall sub_14002CA30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  unsigned int v5; // r9d
  unsigned int i; // ecx
  __int64 v7; // r8
  unsigned int j; // ecx
  unsigned int k; // ecx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // r15
  char v15; // al
  __int64 v16; // r14
  _QWORD *v17; // rbp
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _DWORD *v20; // rdi
  __int16 v21; // r8
  __int64 v22; // r8

  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    v3 = *(_QWORD *)(sub_140005000(a2) + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v3 = a1 + 1008;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1392);
    if ( v4 )
    {
      v5 = *(unsigned __int16 *)(a1 + 1552);
      for ( i = 0; i < v5; ++i )
      {
        v3 = v4 + ((unsigned __int64)i << 7);
        if ( a2 == v3 + 8 )
          goto LABEL_21;
      }
    }
    v7 = *(_QWORD *)(a1 + 1400);
    if ( v7 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); ++j )
      {
        v3 = v7 + ((unsigned __int64)j << 7);
        if ( a2 == v3 + 8 )
          goto LABEL_21;
      }
    }
    for ( k = 0; k < 2; ++k )
    {
      v10 = (unsigned __int64)k << 7;
      if ( a2 == v10 + a1 + 1144 )
      {
        v3 = v10 + a1 + 1136;
        goto LABEL_21;
      }
    }
    v3 = 0LL;
  }
LABEL_21:
  v12 = sub_140005000(a2);
  v14 = *(_QWORD *)(v12 + 4200);
  if ( !v3
    || (v15 = *(_BYTE *)(v11 + 3), v15 == 14)
    || (*(_DWORD *)(a1 + 24) & 0xE) != 0
    || (v16 = v3 + 96, v13 = *(_QWORD *)(v3 + 96), *(_BYTE *)(v13 + 4136) != 4) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    v19 = (_QWORD *)(v12 + 4160);
    v18 = v3 + 96;
    goto LABEL_37;
  }
  v17 = (_QWORD *)(v12 + 4160);
  v18 = v3 + 96;
  v19 = (_QWORD *)(v12 + 4160);
  if ( !*(_QWORD *)(v12 + 4160) )
    goto LABEL_37;
  if ( v15 == 1 )
  {
    v20 = *(_DWORD **)(v13 + 4160);
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    sub_14002B7D8(v14, v20);
    if ( *v20 )
    {
      sub_14002C5F0(a1);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    }
    goto LABEL_38;
  }
  v21 = *(_WORD *)(v12 + 4218);
  if ( (v21 & 0xE00) != 0x200
    || (v21 & 0x1FE) != 0x12
    || (**(_DWORD **)(v13 + 4160) = -1,
        sub_14002C5F0(a1),
        v19 = (_QWORD *)(v12 + 4160),
        v18 = v3 + 96,
        (*(_BYTE *)(a1 + 21) & 2) == 0) )
  {
LABEL_37:
    v16 = v18;
    v17 = v19;
    if ( !v3 )
      goto LABEL_40;
    goto LABEL_38;
  }
  StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
LABEL_38:
  if ( *v17 )
  {
    sub_14000CF50(
      a1,
      *(unsigned int *)(*(_QWORD *)v16 + 4208LL),
      (__int64 *)(*(_QWORD *)v16 + 4160LL),
      *(_QWORD *)(*(_QWORD *)v16 + 4168LL));
    *(_DWORD *)(v12 + 4208) = 0;
  }
LABEL_40:
  v22 = *(_QWORD *)(v12 + 4200);
  if ( v22 )
  {
    StorPortExtendedFunction(1LL, a1, v22, v13);
    *(_QWORD *)(v12 + 4200) = 0LL;
  }
  *(_BYTE *)(v12 + 4225) |= 8u;
}
