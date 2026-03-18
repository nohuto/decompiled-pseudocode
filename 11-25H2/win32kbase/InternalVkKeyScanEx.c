/*
 * XREFs of InternalVkKeyScanEx @ 0x14009EF60
 * Callers:
 *     NtUserVkKeyScanEx @ 0x14009EED0 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall InternalVkKeyScanEx(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v2; // bx
  unsigned __int16 v3; // di
  __int16 v4; // bp
  __int16 v5; // si
  __int64 v6; // rax
  unsigned __int16 v7; // cx
  __int16 v8; // r14
  __int16 v9; // r11
  __int64 v10; // r8
  unsigned __int8 *v12; // rcx
  __int64 v13; // r9
  unsigned __int16 v14; // dx
  unsigned __int8 v15; // dl
  unsigned __int8 *v16; // r9
  unsigned __int8 i; // r10

  v2 = 0;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  if ( !a2 )
    a2 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, 0LL) + 14272) + 48LL) + 32LL);
  v6 = *a2;
  v7 = *(_WORD *)(*a2 + 8LL);
  v8 = 15;
  if ( v7 < 2u )
  {
    v9 = 15;
  }
  else
  {
    v9 = *(unsigned __int8 *)(v6 + 12);
    if ( v7 >= 3u )
      v8 = *(unsigned __int8 *)(v6 + 13);
  }
  v10 = a2[1];
  if ( !v10 )
  {
LABEL_7:
    if ( v3 >= 0x20u )
      return -1;
    return (unsigned __int8)(v3 + 64) | 0x200;
  }
  while ( 1 )
  {
    v16 = *(unsigned __int8 **)v10;
    if ( !*(_QWORD *)v10 )
    {
      if ( v4 )
        return v4;
      if ( v5 )
        return v5;
      goto LABEL_7;
    }
LABEL_23:
    if ( *v16 )
      break;
    v10 += 16LL;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_BYTE *)(v10 + 8) )
    {
      v16 += *(unsigned __int8 *)(v10 + 9);
      goto LABEL_23;
    }
    v12 = v16;
    if ( *(_WORD *)&v16[2 * i + 2] == v3 )
      break;
LABEL_27:
    ;
  }
  if ( *v16 == 0xFF )
    v12 = &v16[-*(unsigned __int8 *)(v10 + 9)];
  if ( i == v9 )
  {
    if ( !v4 )
      v4 = *v12 | 0x200;
    goto LABEL_27;
  }
  if ( i == v8 )
  {
    if ( !v5 )
      v5 = *v12 | 0x300;
    goto LABEL_27;
  }
  v13 = *a2;
  v14 = *(_WORD *)(*a2 + 8LL);
  while ( v2 <= v14 )
  {
    if ( *(_BYTE *)(v2 + v13 + 10) == i )
    {
      v15 = *v12;
      if ( *v12 == 0xFF )
        v15 = v12[-*(unsigned __int8 *)(v10 + 9)];
      return v15 | ((unsigned __int8)v2 << 8);
    }
    ++v2;
  }
  return -1;
}
