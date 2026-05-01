/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x1804115B0
 * Callers:
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x1801C18E4 (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x180184C68 (--$_Uninitialized_move@PEAV-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WR.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K1@Z @ 0x18022AFA8 (-_Change_array@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWin.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C (--1_Reallocation_guard@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate<0>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int64)(a1[1] - *a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = (_QWORD *)a1[1];
  v8 = (__int64)v6;
  v11[2] = *a2;
  v9 = (_QWORD *)*a1;
  v11[0] = a1;
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
    v9,
    v7,
    v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Change_array(a1, v8, v4, v10);
  std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
