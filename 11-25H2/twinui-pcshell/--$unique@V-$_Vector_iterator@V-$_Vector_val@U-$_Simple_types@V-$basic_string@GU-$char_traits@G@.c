/*
 * XREFs of ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x1803401DC
 * Callers:
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x1803473C8 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800F2370 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

__int64 **__fastcall std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>,std::equal_to<void>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rdi
  __int64 *v6; // rsi
  _WORD *v7; // r8
  __int64 v8; // rcx
  _WORD *v9; // r8
  __int64 v10; // rcx

  v4 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v6 = v4;
      v4 += 4;
      if ( v4 == a3 )
        break;
      v7 = v4;
      if ( (unsigned __int64)v4[3] > 7 )
        v7 = (_WORD *)*v4;
      v8 = (__int64)v6;
      if ( (unsigned __int64)v6[3] > 7 )
        v8 = *v6;
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, v6[2], v7, v4[2]) )
      {
        while ( 1 )
        {
          v4 += 4;
          if ( v4 == a3 )
            break;
          v9 = v4;
          if ( (unsigned __int64)v4[3] > 7 )
            v9 = (_WORD *)*v4;
          v10 = (__int64)v6;
          if ( (unsigned __int64)v6[3] > 7 )
            v10 = *v6;
          if ( !std::_Traits_equal<std::char_traits<unsigned short>>(v10, v6[2], v9, v4[2]) )
          {
            v6 += 4;
            std::wstring::operator=((__int64)v6, (__int64)v4);
          }
        }
        *a1 = v6 + 4;
        return a1;
      }
    }
  }
  *a1 = a3;
  return a1;
}
