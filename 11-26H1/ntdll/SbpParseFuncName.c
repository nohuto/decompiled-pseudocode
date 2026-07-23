/*
 * XREFs of SbpParseFuncName @ 0x1801595A8
 * Callers:
 *     SbpResolveBasedOnName @ 0x180084D68 (SbpResolveBasedOnName.c)
 * Callees:
 *     StringCchCopyW @ 0x1800D34E4 (StringCchCopyW.c)
 */

__int64 __fastcall SbpParseFuncName(__int64 a1, _WORD *a2, __int64 a3, wchar_t *a4)
{
  _WORD *v4; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  _WORD *v9; // r8
  __int64 v10; // r10
  unsigned int v11; // ebx
  __int16 v12; // ax
  _WORD *v13; // rax

  v4 = a2;
  v6 = a1;
  while ( *(_WORD *)a1 && *(_WORD *)a1 != 33 )
    a1 += 2LL;
  if ( *(_WORD *)a1 != 33 )
    goto LABEL_16;
  v7 = (a1 - v6) >> 1;
  if ( v7 > 0x7FFFFFFE )
  {
    *v4 = 0;
LABEL_16:
    v11 = 0;
    if ( v4 )
      *v4 = 0;
    if ( a4 )
      *a4 = 0;
    return v11;
  }
  v8 = 256LL;
  v9 = v4;
  v10 = v6 - (_QWORD)v4;
  v11 = 1;
  do
  {
    if ( !(v7 + v8 - 256) )
      break;
    v12 = *(_WORD *)((char *)v9 + v10);
    if ( !v12 )
      break;
    *v9++ = v12;
    --v8;
  }
  while ( v8 );
  v13 = v9 - 1;
  if ( v8 )
    v13 = v9;
  *v13 = 0;
  if ( !v8 || StringCchCopyW(a4, 0x400uLL, (STRSAFE_LPCWSTR)(a1 + 2)) < 0 )
    goto LABEL_16;
  return v11;
}
