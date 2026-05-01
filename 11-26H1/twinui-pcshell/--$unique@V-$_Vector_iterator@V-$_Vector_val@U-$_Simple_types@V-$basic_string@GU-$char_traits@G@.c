/*
 * XREFs of ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x18034031C
 * Callers:
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x18034A664 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>,std::equal_to<void>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rdi
  wchar_t *v6; // rsi
  const wchar_t **v7; // rax
  const wchar_t *v8; // r8
  const wchar_t *v9; // rcx
  const wchar_t *v10; // r8
  const wchar_t *v11; // rcx

  v4 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v6 = (wchar_t *)v4;
      v7 = (const wchar_t **)(v4 + 4);
      v4 += 4;
      if ( v4 == a3 )
        break;
      v8 = (const wchar_t *)v4;
      if ( v4[3] > 7uLL )
        v8 = *v7;
      v9 = v6;
      if ( *((_QWORD *)v6 + 3) > 7uLL )
        v9 = *(const wchar_t **)v6;
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v9, *((_QWORD *)v6 + 2), v8, (__int64)v7[2]) )
      {
        while ( 1 )
        {
          v4 += 4;
          if ( v4 == a3 )
            break;
          v10 = (const wchar_t *)v4;
          if ( v4[3] > 7uLL )
            v10 = (const wchar_t *)*v4;
          v11 = v6;
          if ( *((_QWORD *)v6 + 3) > 7uLL )
            v11 = *(const wchar_t **)v6;
          if ( !std::_Traits_equal<std::char_traits<unsigned short>>(v11, *((_QWORD *)v6 + 2), v10, v4[2]) )
          {
            v6 += 16;
            std::wstring::operator=(v6, v4);
          }
        }
        *a1 = v6 + 16;
        return a1;
      }
    }
  }
  *a1 = a3;
  return a1;
}
