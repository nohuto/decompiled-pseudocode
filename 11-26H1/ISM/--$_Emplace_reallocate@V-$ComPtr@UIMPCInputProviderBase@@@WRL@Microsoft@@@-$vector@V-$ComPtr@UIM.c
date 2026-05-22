/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001EC1C
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001E93C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18001EADC (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@0@@Z @ 0x18005EA2C (--$_Uninitialized_move@PEAV-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@_K1@Z @ 0x180065088 (-_Change_array@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A7C2C (--1_Reallocation_guard@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICur.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  _QWORD *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = v13;
  v20 = a1;
  v21 = v3;
  v15 = (_QWORD *)(v13 + 8 * v5);
  *v15 = 0LL;
  v23 = v15 + 1;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = a1[1];
  v17 = (_QWORD *)v13;
  v18 = *a1;
  v22 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> *,std::allocator<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>>(
      v18,
      a2,
      v13);
    v16 = a1[1];
    v17 = v15 + 1;
    v18 = a2;
    v22 = (_QWORD *)v14;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> *,std::allocator<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>>(
    v18,
    v16,
    v17);
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Change_array(a1, v14, v9, v3, v20, 0LL, v21, v22, v23);
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v15;
}
