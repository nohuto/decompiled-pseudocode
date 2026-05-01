/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18010B0EC
 * Callers:
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x18010B050 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18004A13C (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18010B4F8 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  char *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  int v9; // esi
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  char *v17; // rax
  char *v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // rdx
  char v23; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  RTL_SRWLOCK *v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+50h]
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v24[0] = 0LL;
  v3 = 0LL;
  if ( v24 != a2 )
  {
    v3 = *a2;
    v24[0] = *a2;
    *a2 = 0LL;
  }
  v4 = a2[1];
  v24[1] = v4;
  v5 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  if ( v5 )
  {
    v7 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    *(_DWORD *)(v6 + 44) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)(v6 + 48) = 0LL;
    if ( (_QWORD *)(v6 + 48) != v24 )
    {
      *(_QWORD *)(v6 + 48) = v3;
      v24[0] = 0LL;
    }
    *(_QWORD *)(v6 + 56) = v4;
    *(_QWORD *)v6 = off_18071C8A8;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  else
  {
    v6 = 0LL;
  }
  v27 = v6;
  v28 = v6;
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(v24);
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL);
    return (unsigned int)v9;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  v26 = (RTL_SRWLOCK *)(a1 + 80);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v9 = -2147467260;
    v22 = 105LL;
    goto LABEL_46;
  }
  v8 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 != v10 )
    goto LABEL_40;
  v12 = v11 + 1;
  v9 = -2147024774;
  if ( v12 > 0xFFFFFFFE || (v9 = 0, v12 <= v10) )
  {
    if ( v9 < 0 )
      goto LABEL_21;
    goto LABEL_40;
  }
  v13 = 2 * v10;
  if ( is_mul_ok(v10, 2uLL) )
  {
    v14 = v10 + 4096;
    if ( *(_QWORD *)(a1 + 72) <= 0x1000uLL )
      v14 = v13;
    if ( v12 <= v14 )
    {
      if ( v14 > 0xFFFFFFFE )
        v14 = 4294967294LL;
    }
    else
    {
      v14 = v12;
    }
    v15 = 8 * v14;
    if ( is_mul_ok(v14, 8uLL) )
    {
      v17 = (char *)CoTaskMemRealloc(*(LPVOID *)(a1 + 48), 8 * v14);
      v18 = v17;
      if ( !v17 )
      {
        v9 = -2147024882;
        v6 = v27;
        goto LABEL_21;
      }
      v19 = CTCoAllocPolicy::_CoTaskMemSize(v17);
      if ( v19 > v15 )
        memset_0(&v18[v15], 0, v19 - v15);
      v9 = 0;
      *(_QWORD *)(a1 + 72) = v14;
      *(_QWORD *)(a1 + 48) = v18;
LABEL_40:
      v20 = *(_QWORD *)(a1 + 56) + 1LL;
      *(_QWORD *)(a1 + 56) = v20;
      v21 = (char *)(*(_QWORD *)(a1 + 48) - 8LL + 8 * v20);
      if ( v21 )
      {
        *(_QWORD *)v21 = 0LL;
        if ( v21 != &v23 )
        {
          *(_QWORD *)v21 = v6;
          v8 = 0LL;
        }
      }
      goto LABEL_21;
    }
  }
  v9 = -2147024362;
LABEL_21:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 >= 0 )
  {
    PostMessageW(*(HWND *)(a1 + 40), 0x401u, 0LL, 0LL);
    if ( a1 != -80 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
    v9 = 0;
    goto LABEL_27;
  }
  v22 = 106LL;
LABEL_46:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v26);
LABEL_27:
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  return (unsigned int)v9;
}
