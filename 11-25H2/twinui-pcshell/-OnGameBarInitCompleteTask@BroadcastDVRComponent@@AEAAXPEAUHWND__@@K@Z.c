/*
 * XREFs of ?OnGameBarInitCompleteTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@K@Z @ 0x180317098
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::Run @ 0x1803181B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___--Run.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x180315234 (-BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z.c)
 */

void __fastcall BroadcastDVRComponent::OnGameBarInitCompleteTask(BroadcastDVRComponent *this, HWND a2, int a3)
{
  int v6; // r8d
  HWND *v7; // rax
  __int64 v8; // rdx
  HWND *v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v9, (_QWORD *)this + 39);
  GameDVRTraceProvider::BroadcastDVRComponent_OnGameBarInitCompleteTask(a2, v6);
  v7 = v9;
  if ( v9 )
  {
    if ( *v9 == a2 )
    {
      if ( a3 )
LABEL_4:
        *((_DWORD *)v7 + 15) = a3;
    }
    else
    {
      v8 = **((_QWORD **)this + 33);
      v11 = v8;
      while ( v8 != *((_QWORD *)this + 33) )
      {
        std::shared_ptr<FlyoutView>::operator=(&v9, (_QWORD *)(v8 + 40));
        v7 = v9;
        if ( *v9 == a2 )
          goto LABEL_4;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v11);
        v8 = v11;
      }
    }
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
