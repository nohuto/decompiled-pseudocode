/*
 * XREFs of ?OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x18043AA14
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_b87bffec138a6adcdc30da192408acc3___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18043A980 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_18043A980.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BF074 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802248A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ??$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x18042AAC8 (--$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VUwpViewHandledEventArgs@@@WRL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::OnBackComplete(UwpWindowWrapperBase *this, char a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  __int64 v6[2]; // [rsp+20h] [rbp-10h] BYREF
  void *v7; // [rsp+50h] [rbp+20h] BYREF
  char v8; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v8 = a2;
  v10 = 0LL;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &v9);
  v3 = 0LL;
  if ( *((_BYTE *)this + 184) )
  {
    *((_BYTE *)this + 184) = 0;
    v4 = (__int64 *)((char *)this + 192);
    if ( v6 != (__int64 *)((char *)this + 192) )
    {
      v3 = *v4;
      *v4 = 0LL;
    }
    v6[0] = 0LL;
    v10 = v3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  v7 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
    if ( (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v10, &GUID_6723b702_a620_59ad_be1b_dbb8d6f48dd4, &v7) >= 0 )
    {
      wil::MakeOrThrow<UwpViewHandledEventArgs,bool &>((__int64 *)&v9, &v8);
      (*(void (__fastcall **)(void *, unsigned __int64, RTL_SRWLOCK *))(*(_QWORD *)v7 + 24LL))(
        v7,
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
        v9);
      v5 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v5);
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v10);
}
