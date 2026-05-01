/*
 * XREFs of _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x1801E2168
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x180679D24 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(bool **a1, __int64 *a2, bool *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v7)(__int64 *, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // ebx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a2;
  v11 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v3 + 24);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
  v9 = v7(a2, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v8);
  if ( v9 >= 0 )
  {
    hWnd = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 32LL))(v11, &hWnd);
    if ( v9 >= 0 )
    {
      **a1 = GetPropW(hWnd, L"PROP_APPWINDOW_BLOCK_UNTRUSTED_LAUNCHES") != 0LL;
      *a3 = **a1;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return (unsigned int)v9;
}
