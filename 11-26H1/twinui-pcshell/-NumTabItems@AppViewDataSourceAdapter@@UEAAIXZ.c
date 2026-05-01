/*
 * XREFs of ?NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ @ 0x1800F1420
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1CB8 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewDataSourceAdapter::NumTabItems(AppViewDataSourceAdapter *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  struct IApplicationView *v4; // rbx
  bool v5; // al
  unsigned int v6; // edx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = **((_QWORD **)this - 4);
  v8 = v3;
  while ( v3 != *((_QWORD *)this - 4) )
  {
    v4 = *(struct IApplicationView **)(v3 + 32);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v3 + 32));
    v5 = IsTabWindowOwner(v4);
    v6 = v2 + 1;
    if ( !v5 )
      v6 = v2;
    v2 = v6;
    if ( v4 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v4 + 16LL))(v4);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v8);
    v3 = v8;
  }
  return v2;
}
