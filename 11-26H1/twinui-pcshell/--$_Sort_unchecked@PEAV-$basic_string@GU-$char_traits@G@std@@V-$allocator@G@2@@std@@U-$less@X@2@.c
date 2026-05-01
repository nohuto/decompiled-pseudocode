/*
 * XREFs of ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x18034A664 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x18033DF64 (--$_Insertion_sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E194 (--$_Partition_by_median_guess_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x18033E388 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 *     ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E6D8 (--$_Sort_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 */

const wchar_t *__fastcall std::_Sort_unchecked<std::wstring *,std::less<void>>(
        wchar_t *a1,
        wchar_t *a2,
        __int64 a3,
        char a4)
{
  wchar_t *v8; // r14
  wchar_t *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // r14
  wchar_t *v14; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *v15; // [rsp+38h] [rbp-60h]

  while ( 1 )
  {
    if ( ((char *)a2 - (char *)a1) >> 5 <= 32 )
      return std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(a1, a2);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(&v14, (unsigned __int64)a1, a2);
    v8 = v14;
    v9 = v15;
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v10) = a4;
    if ( (__int64)(((char *)v14 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) >= (__int64)(((char *)a2 - (char *)v15) & 0xFFFFFFFFFFFFFFE0uLL) )
    {
      std::_Sort_unchecked<std::wstring *,std::less<void>>(v15, a2, a3, v10);
      a2 = v8;
    }
    else
    {
      std::_Sort_unchecked<std::wstring *,std::less<void>>(a1, v14, a3, v10);
      a1 = v9;
    }
  }
  v11 = ((char *)a2 - (char *)a1) >> 6;
  if ( v11 > 0 )
  {
    v12 = (__int64)&a1[16 * v11];
    do
    {
      v12 -= 32LL;
      --v11;
      std::wstring::wstring((__int64)&v14, v12);
      std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(
        (__int64)a1,
        v11,
        ((char *)a2 - (char *)a1) >> 5,
        (wchar_t *)&v14);
      std::wstring::_Tidy_deallocate(&v14);
    }
    while ( v11 > 0 );
  }
  return (const wchar_t *)std::_Sort_heap_unchecked<std::wstring *,std::less<void>>((char *)a1, (__int64)a2);
}
