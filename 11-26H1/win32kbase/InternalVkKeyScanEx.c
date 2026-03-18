/*
 * XREFs of InternalVkKeyScanEx @ 0x140087DB0
 * Callers:
 *     NtUserVkKeyScanEx @ 0x140087D30 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall InternalVkKeyScanEx(unsigned __int16 a1, _QWORD *a2, int a3)
{
  unsigned __int16 v3; // bx
  __int16 v5; // bp
  __int16 v6; // si
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  __int16 v9; // r14
  __int16 v10; // r11
  __int64 v11; // r8
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  unsigned __int16 v15; // dx
  unsigned __int8 v16; // dl
  unsigned __int8 *v17; // r9
  unsigned __int8 i; // r10

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( !a2 )
    a2 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, 0, a3) + 14264) + 48LL) + 32LL);
  v7 = *a2;
  v8 = *(_WORD *)(*a2 + 8LL);
  v9 = 15;
  if ( v8 < 2u )
  {
    v10 = 15;
  }
  else
  {
    v10 = *(unsigned __int8 *)(v7 + 12);
    if ( v8 >= 3u )
      v9 = *(unsigned __int8 *)(v7 + 13);
  }
  v11 = a2[1];
  if ( !v11 )
  {
LABEL_7:
    if ( a1 >= 0x20u )
      return -1;
    return (unsigned __int8)(a1 + 64) | 0x200;
  }
  while ( 1 )
  {
    v17 = *(unsigned __int8 **)v11;
    if ( !*(_QWORD *)v11 )
    {
      if ( v5 )
        return v5;
      if ( v6 )
        return v6;
      goto LABEL_7;
    }
LABEL_23:
    if ( *v17 )
      break;
    v11 += 16LL;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_BYTE *)(v11 + 8) )
    {
      v17 += *(unsigned __int8 *)(v11 + 9);
      goto LABEL_23;
    }
    v13 = v17;
    if ( *(_WORD *)&v17[2 * i + 2] == a1 )
      break;
LABEL_27:
    ;
  }
  if ( *v17 == 0xFF )
    v13 = &v17[-*(unsigned __int8 *)(v11 + 9)];
  if ( i == v10 )
  {
    if ( !v5 )
      v5 = *v13 | 0x200;
    goto LABEL_27;
  }
  if ( i == v9 )
  {
    if ( !v6 )
      v6 = *v13 | 0x300;
    goto LABEL_27;
  }
  v14 = *a2;
  v15 = *(_WORD *)(*a2 + 8LL);
  while ( v3 <= v15 )
  {
    if ( *(_BYTE *)(v3 + v14 + 10) == i )
    {
      v16 = *v13;
      if ( *v13 == 0xFF )
        v16 = v13[-*(unsigned __int8 *)(v11 + 9)];
      return v16 | ((unsigned __int8)v3 << 8);
    }
    ++v3;
  }
  return -1;
}
