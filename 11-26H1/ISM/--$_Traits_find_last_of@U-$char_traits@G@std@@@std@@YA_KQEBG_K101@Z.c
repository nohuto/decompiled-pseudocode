/*
 * XREFs of ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800D3DE0
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D80BC (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __std_find_last_of_trivial_pos_2 @ 0x18009C8B0 (__std_find_last_of_trivial_pos_2.c)
 *     wmemchr @ 0x1800D8EFC (wmemchr.c)
 */

__int64 __fastcall std::_Traits_find_last_of<std::char_traits<unsigned short>>(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        size_t N)
{
  unsigned __int64 v6; // rbx
  char v8; // dl
  const wchar_t *v9; // r8
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  wchar_t *v12; // rbx
  _BYTE v13[296]; // [rsp+20h] [rbp-128h] BYREF

  if ( !N || !a2 )
    return -1LL;
  v6 = a2 - 1;
  if ( a2 + N >= 0x10 )
    return _std_find_last_of_trivial_pos_2(a1, a2, (const __m128i *)L"\\", N);
  memset_0(v13, 0, 0x100uLL);
  v8 = 1;
  v9 = &StringValue[N];
  v10 = L"\\";
  if ( L"\\" != v9 )
  {
    while ( *v10 < 0x100u )
    {
      v11 = *(unsigned __int8 *)v10++;
      v13[v11] = 1;
      if ( v10 == v9 )
        goto LABEL_10;
    }
    v8 = 0;
  }
LABEL_10:
  v12 = &a1[v6];
  if ( v8 )
  {
    while ( *v12 >= 0x100u || !v13[*v12] )
    {
      if ( v12 == a1 )
        return -1LL;
      --v12;
    }
  }
  else
  {
    while ( !wmemchr(L"\\", *v12, N) )
    {
      if ( v12 == a1 )
        return -1LL;
      --v12;
    }
  }
  return v12 - a1;
}
