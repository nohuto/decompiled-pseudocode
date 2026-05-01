/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x1801E1318
 * Callers:
 *     ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x1801E12F0 (-SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d___::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___ @ 0x18022EE08 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(
        _DWORD *a1,
        __int128 *a2)
{
  unsigned int v4; // esi
  void *v5; // rax
  __int64 v6; // rdi
  int v7; // esi
  __int64 v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v9[1] = (__int64)a1;
    v10 = *a2;
    v11 = *((_QWORD *)a2 + 2);
    v4 = a1[12];
    v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
      v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d___::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___(
             v5,
             v9);
    else
      v6 = 0LL;
    v7 = SHTaskPoolQueueTask(3LL, 2LL, v4);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
    if ( v7 >= 0 )
      ++a1[52];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)v7;
  }
}
