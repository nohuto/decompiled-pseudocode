/*
 * XREFs of ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x18005FF98
 * Callers:
 *     ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x180061FF0 (-AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV-$map@V-$basic_s.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18006104C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180061374 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??R_lambda_30b10436083aba01be8f7c4a25a13343_@@QEBA@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@Z @ 0x1800613CC (--R_lambda_30b10436083aba01be8f7c4a25a13343_@@QEBA@U-$pair@V-$basic_string@GU-$char_traits@G@std.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Find_if<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  _BYTE v9[32]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v10[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v11; // [rsp+68h] [rbp-40h]
  __int64 v12; // [rsp+B8h] [rbp+10h] BYREF

  v12 = a2;
  v6 = a2;
  v11 = a4;
  while ( v6 != a3 )
  {
    std::wstring::wstring((__int64)v9, v6 + 32);
    std::wstring::wstring((__int64)v10, v6 + 64);
    if ( (unsigned __int8)_lambda_30b10436083aba01be8f7c4a25a13343_::operator()(a4, v9) )
      break;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>::operator++(&v12);
    v6 = v12;
  }
  *a1 = v6;
  std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(a4);
  return a1;
}
