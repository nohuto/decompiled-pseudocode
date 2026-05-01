/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x1801A9870
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14___::Run @ 0x1802BAC20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003BEF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A9ED8 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___(
        __int64 a1,
        __int128 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int128 v7; // xmm6
  void *v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>(a1 + 48, &v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v3);
    v5 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v7 = *a2;
  v8 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (__int64)v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v8);
    *(_OWORD *)(v9 + 48) = v7;
    *(_QWORD *)v9 = off_1807129C8;
    *(_QWORD *)(v9 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  else
  {
    v9 = 0LL;
  }
  v15 = v9;
  if ( !v9 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)0x8007000ELL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    return v4;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v9);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v11;
}
