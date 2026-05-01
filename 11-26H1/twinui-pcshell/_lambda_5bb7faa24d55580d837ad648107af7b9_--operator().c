/*
 * XREFs of _lambda_5bb7faa24d55580d837ad648107af7b9_::operator() @ 0x1803107E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9___::Run @ 0x1803142B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9___--Run.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

void __fastcall lambda_5bb7faa24d55580d837ad648107af7b9_::operator()(unsigned __int8 *a1)
{
  void **v1; // rbp
  char v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  void **v6; // rsi
  unsigned __int8 *v7; // rdi
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // rbx
  int v10; // eax
  const unsigned __int16 *v11; // r9
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]
  __int64 i; // [rsp+50h] [rbp+8h] BYREF

  v1 = (void **)(a1 + 8);
  v3 = 0;
  v4 = **(_QWORD **)(*(_QWORD *)a1 + 264LL);
  for ( i = v4; ; v4 = i )
  {
    if ( v4 == *(_QWORD *)(*(_QWORD *)a1 + 264LL) )
    {
      v7 = a1 + 17;
      v6 = v1;
      v9 = a1 + 16;
      goto LABEL_13;
    }
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v12, (_QWORD *)(v4 + 40));
    v5 = v12;
    v6 = (void **)(a1 + 8);
    if ( *(_QWORD *)v12 == *((_QWORD *)a1 + 1) )
      break;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&i);
  }
  v7 = a1 + 17;
  v3 = 1;
  v8 = a1[17];
  v9 = a1 + 16;
  if ( *v9 )
  {
    *(_DWORD *)(v12 + 56) &= ~0x20u;
    v10 = v8 != 0 ? 0x20 : 0;
  }
  else
  {
    *(_DWORD *)(v12 + 56) &= ~8u;
    v10 = v8 != 0 ? 8 : 0;
  }
  *(_DWORD *)(v5 + 56) |= v10;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
LABEL_13:
  v11 = L"hWnd found";
  if ( !v3 )
    v11 = L"hWnd not found";
  GameDVRTraceProvider::BroadcastDVRComponent_SetMicrophoneCaptureState(*v6, *v9, *v7, v11);
}
