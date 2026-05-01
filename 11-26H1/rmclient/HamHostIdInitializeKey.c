/*
 * XREFs of HamHostIdInitializeKey @ 0x180008700
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001090 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 __fastcall HamHostIdInitializeKey(__int64 a1, void *a2, int a3, int a4, unsigned __int16 *a5, _WORD *a6)
{
  __int64 v6; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx
  _WORD *v12; // rax
  __int64 v13; // rdi
  __int16 v14; // cx
  _WORD *v15; // rcx
  _WORD *v16; // r9
  wchar_t *v17; // rcx
  _WORD *v18; // rcx
  __int64 v20; // rcx
  unsigned __int16 *i; // rax

  v6 = a4;
  if ( !(unsigned __int8)PsmIsValidKey() )
    return 3221225711LL;
  if ( !RtlValidSid(a2) )
    return 3221225712LL;
  if ( (unsigned int)v6 > 3 )
    return 3221225714LL;
  v10 = 256LL;
  if ( a5 )
  {
    v20 = 256LL;
    for ( i = a5; *i; ++i )
    {
      if ( !--v20 )
        return 3221225715LL;
    }
  }
  memset_0(a6, 0, 0x418uLL);
  v11 = 232LL;
  v12 = a6;
  v13 = a1 - (_QWORD)a6;
  do
  {
    if ( v11 == -2147483414 )
      break;
    v14 = *(_WORD *)((char *)v12 + v13);
    if ( !v14 )
      break;
    *v12++ = v14;
    --v11;
  }
  while ( v11 );
  v15 = v12 - 1;
  if ( v11 )
    v15 = v12;
  *v15 = 0;
  RtlCopySid(0x44u, a6 + 232, a2);
  v16 = a6 + 268;
  if ( a5 )
  {
    StringCchCopyW((char *)a6 + 536, 256LL, (char *)a5);
  }
  else
  {
    v17 = off_18001D578[v6];
    do
    {
      if ( v10 == -2147483390 )
        break;
      if ( !*v17 )
        break;
      *v16++ = *v17++;
      --v10;
    }
    while ( v10 );
    v18 = v16 - 1;
    if ( v10 )
      v18 = v16;
    *v18 = 0;
  }
  *((_DWORD *)a6 + 133) = a3;
  return 0LL;
}
