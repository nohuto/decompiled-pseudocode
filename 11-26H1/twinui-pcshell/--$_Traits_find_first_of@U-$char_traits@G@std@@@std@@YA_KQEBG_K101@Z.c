/*
 * XREFs of ??$_Traits_find_first_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x18061E6B4
 * Callers:
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180636FC8 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     __std_find_first_of_trivial_pos_2 @ 0x1802CD0F0 (__std_find_first_of_trivial_pos_2.c)
 *     wmemchr @ 0x180337374 (wmemchr.c)
 */

unsigned __int64 __fastcall std::_Traits_find_first_of<std::char_traits<unsigned short>>(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        size_t N)
{
  unsigned __int16 *v6; // rsi
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  wchar_t *v12; // rbx
  _BYTE v13[256]; // [rsp+20h] [rbp-118h] BYREF

  if ( !N || !a2 )
    return -1LL;
  v6 = &a1[a2];
  if ( a2 + N >= 0x10 )
    return _std_find_first_of_trivial_pos_2(a1, a2, (const __m128i *)L"@!", N);
  memset_0(v13, 0, sizeof(v13));
  v8 = &S[N];
  v9 = L"@!";
  if ( L"@!" == v8 )
  {
LABEL_8:
    v11 = a1;
    if ( a1 < v6 )
    {
      while ( *v11 >= 0x100u || !v13[*v11] )
      {
        if ( ++v11 >= v6 )
          return -1LL;
      }
      return v11 - a1;
    }
    return -1LL;
  }
  while ( *v9 < 0x100u )
  {
    v10 = *(unsigned __int8 *)v9++;
    v13[v10] = 1;
    if ( v9 == v8 )
      goto LABEL_8;
  }
  v12 = a1;
  if ( a1 >= v6 )
    return -1LL;
  while ( !wmemchr(L"@!", *v12, N) )
  {
    if ( ++v12 >= v6 )
      return -1LL;
  }
  return v12 - a1;
}
