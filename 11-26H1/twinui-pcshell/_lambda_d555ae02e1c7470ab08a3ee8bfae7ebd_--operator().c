/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18005A528
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x18005A1E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$DoInvoke@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@Z @ 0x18005BEE4 (--$DoInvoke@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator()(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 *v3; // r15
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_BYTE *)(*(_QWORD *)a1 + 129LL) = 0;
  v2 = *(__int64 **)(*(_QWORD *)a1 + 96LL);
  v3 = *(__int64 **)(*(_QWORD *)a1 + 104LL);
  while ( v2 != v3 )
  {
    v4 = *v2;
    v11 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v10 = 0LL;
    v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v5(v4, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v10) >= 0 )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL))(v10, v6);
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    ++v2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = *(_QWORD *)a1;
  v11 = 0LL;
  v9[0] = &v10;
  v9[1] = &v11;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_a48ac9b22b1e533b001c2bec4634345b_>(
           v10 + 72,
           v9);
}
