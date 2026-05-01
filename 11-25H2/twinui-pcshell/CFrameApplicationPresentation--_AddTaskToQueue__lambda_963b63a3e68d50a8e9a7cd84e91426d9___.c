/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___ @ 0x1803082D8
 * Callers:
 *     ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180309F40 (-SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___(
        _DWORD *a1,
        __int128 *a2)
{
  unsigned int v5; // r15d
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  int v9; // esi
  __int64 v10[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  void *v14; // [rsp+90h] [rbp+30h] BYREF
  _DWORD *v15; // [rsp+A0h] [rbp+40h] BYREF

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
    v15 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v10[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v10[1] = (__int64)a1;
    v11 = *a2;
    v12 = *((_QWORD *)a2 + 2);
    v5 = a1[12];
    v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    v14 = v6;
    v8 = 0LL;
    if ( v6 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
      v7[2] = 0LL;
      if ( v7 + 2 != v10 )
      {
        v7[2] = a1;
        v10[0] = 0LL;
      }
      v7[3] = a1;
      *((_OWORD *)v7 + 2) = *a2;
      v7[6] = *((_QWORD *)a2 + 2);
      *v7 = &off_1807063C8;
      v14 = 0LL;
      v8 = v7;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v14);
    v9 = SHTaskPoolQueueTask(3LL, 2LL, v5);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    if ( v9 >= 0 )
      ++a1[52];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    return (unsigned int)v9;
  }
}
