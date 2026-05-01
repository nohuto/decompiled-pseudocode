/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E194
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Swap_data@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x1802111D8 (-_Swap_data@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEAV12@@Z.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x18033DEBC (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 */

wchar_t **__fastcall std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(
        wchar_t **a1,
        unsigned __int64 a2,
        wchar_t *a3)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // rdi
  wchar_t *v8; // rsi
  wchar_t *v9; // rsi
  wchar_t *v10; // rbp
  bool v11; // zf
  wchar_t *v12; // r14
  __int128 *v13; // rax
  wchar_t **result; // rax

  v6 = (wchar_t *)(a2 + 32 * ((__int64)((__int64)a3 - a2) >> 6));
  std::_Guess_median_unchecked<std::wstring *,std::less<void>>(a2, (__int64)v6, (__int64)(a3 - 16));
  v7 = v6 + 16;
  if ( a2 < (unsigned __int64)v6 )
  {
    do
    {
      v8 = v6 - 16;
      if ( (unsigned __int8)std::operator<<unsigned short>(v6 - 16, v6) )
        break;
      if ( (unsigned __int8)std::operator<<unsigned short>(v6, v6 - 16) )
        break;
      v6 -= 16;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3
       && !(unsigned __int8)std::operator<<unsigned short>(v7, v6)
       && !(unsigned __int8)std::operator<<unsigned short>(v6, v7) )
    v7 += 16;
  v9 = v7;
  v10 = v6;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( (unsigned __int8)std::operator<<unsigned short>(v6, v9) )
        goto LABEL_16;
      if ( (unsigned __int8)std::operator<<unsigned short>(v9, v6) )
        break;
      if ( v7 != v9 )
        std::wstring::_Swap_data((__int128 *)v7, (__int128 *)v9);
      v7 += 16;
LABEL_16:
      v9 += 16;
    }
    v11 = v10 == (wchar_t *)a2;
    if ( (unsigned __int64)v10 > a2 )
    {
      v12 = v10 - 16;
      do
      {
        if ( !(unsigned __int8)std::operator<<unsigned short>(v12, v6) )
        {
          if ( (unsigned __int8)std::operator<<unsigned short>(v6, v12) )
            break;
          v6 -= 16;
          if ( v6 != v12 )
            std::wstring::_Swap_data((__int128 *)v6, (__int128 *)v12);
        }
        v10 -= 16;
        v12 -= 16;
      }
      while ( a2 < (unsigned __int64)v10 );
      v11 = v10 == (wchar_t *)a2;
    }
    if ( v11 )
      break;
    v13 = (__int128 *)(v10 - 16);
    v10 -= 16;
    if ( v9 != a3 )
    {
      if ( v9 != (wchar_t *)v13 )
        std::wstring::_Swap_data((__int128 *)v9, v13);
      goto LABEL_16;
    }
    v6 -= 16;
    if ( v13 != (__int128 *)v6 )
      std::wstring::_Swap_data(v13, (__int128 *)v6);
    v7 -= 16;
    if ( v6 != v7 )
      std::wstring::_Swap_data((__int128 *)v6, (__int128 *)v7);
  }
  if ( v9 != a3 )
  {
    if ( v7 != v9 && v6 != v7 )
      std::wstring::_Swap_data((__int128 *)v6, (__int128 *)v7);
    v7 += 16;
    if ( v6 != v9 )
      std::wstring::_Swap_data((__int128 *)v6, (__int128 *)v9);
    v6 += 16;
    goto LABEL_16;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
