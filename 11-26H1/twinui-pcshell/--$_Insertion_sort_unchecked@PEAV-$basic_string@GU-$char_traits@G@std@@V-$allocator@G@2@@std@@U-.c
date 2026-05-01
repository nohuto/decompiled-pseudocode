/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x18033DF64
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x18033E0F4 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

const wchar_t *__fastcall std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(
        const wchar_t *a1,
        const wchar_t *a2)
{
  __int64 v4; // rbx
  const wchar_t *v5; // rbp
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  wchar_t *v8; // r14
  const wchar_t *i; // rdx
  wchar_t v11[16]; // [rsp+20h] [rbp-58h] BYREF

  if ( a1 != a2 )
  {
    v4 = (__int64)(a1 + 16);
    if ( a1 + 16 != a2 )
    {
      v5 = a1;
      do
      {
        v6 = (_QWORD *)v4;
        std::wstring::wstring((__int64)v11, v4);
        if ( (unsigned __int8)std::operator<<unsigned short>(v11, a1) )
        {
          std::_Move_backward_unchecked<std::wstring *,std::wstring *>(a1, v4, v5 + 32);
          v7 = a1;
        }
        else
        {
          v7 = (_QWORD *)v4;
          v8 = (wchar_t *)v5;
          for ( i = v5; (unsigned __int8)std::operator<<unsigned short>(v11, i); i = v8 )
          {
            std::wstring::operator=(v6, v8);
            v6 = v8;
            v7 = v8;
            v8 -= 16;
          }
        }
        std::wstring::operator=(v7, v11);
        std::wstring::_Tidy_deallocate(v11);
        v4 += 32LL;
        v5 += 16;
      }
      while ( (const wchar_t *)v4 != a2 );
    }
  }
  return a2;
}
