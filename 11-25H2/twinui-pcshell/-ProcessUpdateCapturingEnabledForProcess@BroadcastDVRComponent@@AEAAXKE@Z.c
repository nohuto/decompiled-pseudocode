/*
 * XREFs of ?ProcessUpdateCapturingEnabledForProcess@BroadcastDVRComponent@@AEAAXKE@Z @ 0x18031790C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0ee7c27c3136ae97d3cffced6ec7e1___::Run @ 0x1803180A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4b0ee7c27c3136ae97d3cffced6ec7e1___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

void __fastcall BroadcastDVRComponent::ProcessUpdateCapturingEnabledForProcess(
        BroadcastDVRComponent *this,
        int a2,
        char a3)
{
  __int64 v6; // rdx
  HWND *v7; // rbx
  HWND *v8; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  DWORD dwProcessId; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v6 = **((_QWORD **)this + 33);
  v11 = v6;
  while ( v6 != *((_QWORD *)this + 33) )
  {
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v8, (_QWORD *)(v6 + 40));
    dwProcessId = 0;
    v7 = v8;
    GetWindowThreadProcessId(*v8, &dwProcessId);
    if ( a2 == dwProcessId )
      *((_DWORD *)v7 + 14) = (_DWORD)v7[7] & 0xFFFFFF7F | (a3 != 0 ? 0x80 : 0);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v11);
    v6 = v11;
  }
}
