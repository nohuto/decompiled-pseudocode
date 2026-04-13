/*
 * XREFs of ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x180061FF0
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006192C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x18005FF98 (--$_Find_if@V-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$.c)
 *     ??0?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@AEBU01@@Z @ 0x180060C0C (--0-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@AEBU0.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18006104C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180061374 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(__int64 a1, __int64 a2)
{
  char v3; // r10
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD v10[8]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v11[96]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v12; // [rsp+D0h] [rbp+67h] BYREF
  _QWORD *v13; // [rsp+D8h] [rbp+6Fh]
  __int64 v14; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 0;
  v3 = 1;
  v4 = *(_QWORD **)a1;
  v5 = **(_QWORD ***)a1;
  v12 = v5;
  while ( v5 != v4 )
  {
    std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>((__int64)v10, (__int64)(v5 + 4));
    v13 = v10;
    v6 = *(__int64 **)a2;
    v7 = **(_QWORD **)a2;
    std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>((__int64)v11, (__int64)v10);
    v8 = *std::_Find_if<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
            &v14,
            v7,
            (__int64)v6,
            (__int64)v11);
    std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(v10);
    if ( v8 == *(_QWORD *)a2 )
      return 0;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>::operator++(&v12);
    v5 = v12;
  }
  return v3;
}
