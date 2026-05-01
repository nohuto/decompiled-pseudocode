/*
 * XREFs of ?GetCapturingDisabledForAnyProcess@BroadcastDVRComponent@@UEAAJPEAE@Z @ 0x180312210
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetCapturingDisabledForAnyProcess(
        BroadcastDVRComponent *this,
        unsigned __int8 *a2)
{
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    *a2 = 0;
    v5 = **((_QWORD **)this + 33);
    v10 = v5;
    while ( v5 != *((_QWORD *)this + 33) )
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        &v7,
        (_QWORD *)(v5 + 40));
      v6 = v8;
      if ( *(char *)(v7 + 56) >= 0 )
      {
        *a2 = 1;
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
        return 0LL;
      }
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v10);
      v5 = v10;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
