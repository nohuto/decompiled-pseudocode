/*
 * XREFs of ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x180049908
 * Callers:
 *     ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x18000EC3C (--$_Getvals@G@-$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z.c)
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x18000ED30 (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005BD20 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     _Mbrtowc @ 0x1800049A4 (_Mbrtowc.c)
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 */

wchar_t *__fastcall std::_Maklocstr<unsigned short>(char *a1, __int64 a2, const _Cvtvec *a3)
{
  const char *v4; // rdi
  __int64 v5; // rax
  size_t v6; // r14
  __int64 v7; // rbx
  size_t v8; // rsi
  const char *v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rbx
  size_t v12; // rax
  wchar_t *v13; // rbp
  wchar_t *i; // rsi
  int v15; // eax
  wchar_t *result; // rax
  mbstate_t v17; // [rsp+30h] [rbp-48h] BYREF
  wchar_t v18; // [rsp+80h] [rbp+8h] BYREF
  mbstate_t v19; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0;
  v19._Wchar = 0;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a1[v5] );
  v6 = v5 + 1;
  v7 = 0LL;
  v8 = v5 + 1;
  v9 = a1;
  if ( v5 != -1 )
  {
    do
    {
      v10 = Mbrtowc(&v18, v9, v8, &v19, a3);
      if ( v10 <= 0 )
        break;
      ++v7;
      v9 += v10;
      v8 -= v10;
    }
    while ( v8 );
  }
  v11 = v7 + 1;
  v12 = 2 * v11;
  if ( !is_mul_ok(v11, 2uLL) )
    v12 = -1LL;
  v17._Wchar = 0;
  v13 = (wchar_t *)operator new[](v12);
  for ( i = v13; v11; --v11 )
  {
    v15 = Mbrtowc(i, v4, v6, &v17, a3);
    if ( v15 <= 0 )
      break;
    ++i;
    v4 += v15;
  }
  result = v13;
  *i = 0;
  return result;
}
