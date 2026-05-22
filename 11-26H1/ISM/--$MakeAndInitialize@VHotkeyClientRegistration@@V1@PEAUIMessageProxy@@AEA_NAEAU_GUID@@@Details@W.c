/*
 * XREFs of ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x1801CD940
 * Callers:
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801D11D0 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18002D1A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z @ 0x1801D1848 (-RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyClientRegistration,HotkeyClientRegistration,IMessageProxy *,bool &,_GUID &>(
        __int64 *a1,
        struct IMessageProxy **a2,
        bool *a3,
        struct _GUID *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (__int64)v8;
  v12 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v8);
    *(_QWORD *)v9 = &HotkeyClientRegistration::`vftable';
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    *(_BYTE *)(v9 + 80) = 0;
    *(GUID *)(v9 + 84) = GUID_NULL;
    *(_QWORD *)(v9 + 104) = 0LL;
    v14 = v9;
    v12 = 0LL;
    v13 = *a4;
    v10 = HotkeyClientRegistration::RuntimeClassInitialize((HotkeyClientRegistration *)v9, *a2, *a3, &v13);
    if ( v10 >= 0 )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v14);
      *a1 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      v10 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v12);
  return (unsigned int)v10;
}
