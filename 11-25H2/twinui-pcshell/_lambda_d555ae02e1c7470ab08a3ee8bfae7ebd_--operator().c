/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x1800D9184
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x180240E10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$DoInvoke@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@Z @ 0x1800D9C40 (--$DoInvoke@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator()(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *a1;
  *(_BYTE *)(v2 + 129) = 0;
  v3 = *(__int64 **)(v2 + 96);
  v4 = *(__int64 **)(v2 + 104);
  while ( v3 != v4 )
  {
    v5 = *v3;
    v12 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v11 = 0LL;
    v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    if ( v6(v5, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v11) >= 0 )
    {
      LOBYTE(v7) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, v7);
    }
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ++v3;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = *a1;
  v12 = 0LL;
  v10[0] = &v11;
  v10[1] = &v12;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_a48ac9b22b1e533b001c2bec4634345b_>(
           v11 + 72,
           v10);
}
