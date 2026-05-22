/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180062B60
 * Callers:
 *     ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180062A80 (-GetCursors@DWMCursorBroker@@UEAA-AV-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18005E330 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@_K1@Z @ 0x180065088 (-_Change_array@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A7C2C (--1_Reallocation_guard@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICur.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // r10
  __int64 v20; // r10
  __int64 v21; // r11
  _QWORD *v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-38h]
  _QWORD *v25; // [rsp+38h] [rbp-30h]
  _QWORD *v26; // [rsp+40h] [rbp-28h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(a1);
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
  v13 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v23 = a1;
  v24 = v3;
  v14 = &v13[v5];
  *v14 = 0LL;
  v26 = v14 + 1;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v15 = (_QWORD *)a1[1];
  v16 = v13;
  v17 = (_QWORD *)*a1;
  v25 = v14;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      v17,
      a2,
      v13);
    v15 = (_QWORD *)a1[1];
    v16 = v18;
    v17 = a2;
    v25 = v19;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
    v17,
    v15,
    v16);
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Change_array(a1, v20, v9, v3, v23, v21, v24, v25, v26);
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Reallocation_guard::~_Reallocation_guard(&v23);
  return v14;
}
