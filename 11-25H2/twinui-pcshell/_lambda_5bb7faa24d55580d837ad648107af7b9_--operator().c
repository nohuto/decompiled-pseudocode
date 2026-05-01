/*
 * XREFs of _lambda_5bb7faa24d55580d837ad648107af7b9_::operator() @ 0x180314654
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9___::Run @ 0x1803180F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

void __fastcall lambda_5bb7faa24d55580d837ad648107af7b9_::operator()(__int64 a1)
{
  char v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rcx
  void **v5; // r14
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // rdi
  char v8; // al
  int v9; // eax
  const unsigned __int16 *v10; // r9
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-20h]
  __int64 i; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = **(_QWORD **)(*(_QWORD *)a1 + 264LL);
  for ( i = v3; ; v3 = i )
  {
    if ( v3 == *(_QWORD *)(*(_QWORD *)a1 + 264LL) )
    {
      v7 = (unsigned __int8 *)(a1 + 17);
      v6 = (unsigned __int8 *)(a1 + 16);
      v5 = (void **)(a1 + 8);
      goto LABEL_13;
    }
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v11, (_QWORD *)(v3 + 40));
    v4 = v11;
    v5 = (void **)(a1 + 8);
    if ( *(_QWORD *)v11 == *(_QWORD *)(a1 + 8) )
      break;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&i);
  }
  v6 = (unsigned __int8 *)(a1 + 16);
  v2 = 1;
  v7 = (unsigned __int8 *)(a1 + 17);
  v8 = *(_BYTE *)(a1 + 17);
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(v11 + 56) &= ~0x20u;
    v9 = v8 != 0 ? 0x20 : 0;
  }
  else
  {
    *(_DWORD *)(v11 + 56) &= ~8u;
    v9 = v8 != 0 ? 8 : 0;
  }
  *(_DWORD *)(v4 + 56) |= v9;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
LABEL_13:
  v10 = L"hWnd found";
  if ( !v2 )
    v10 = L"hWnd not found";
  GameDVRTraceProvider::BroadcastDVRComponent_SetMicrophoneCaptureState(*v5, *v6, *v7, v10);
}
