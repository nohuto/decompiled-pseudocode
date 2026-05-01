/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180673244
 * Callers:
 *     ?CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180673F2C (-CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x1806734B8 (--$_Uninitialized_move@PEAV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180673AB8 (--1_Reallocation_guard@-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@_K1@Z @ 0x180674CB4 (-_Change_array@-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IRdpShellExtension> const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  char *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[8 * v6];
  v20 = a1;
  v21 = v8;
  v23 = v14 + 8;
  v15 = *a3;
  *(_QWORD *)v14 = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v22 = v14;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IRdpShellExtension> *,std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(
      v18,
      a2,
      v13);
    v22 = v13;
    v17 = v14 + 8;
    v16 = a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<IRdpShellExtension> *,std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(
    v18,
    v16,
    v17);
  std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::_Change_array(a1, v13, v9, v8, v20, 0LL, v21, v22, v23);
  std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
