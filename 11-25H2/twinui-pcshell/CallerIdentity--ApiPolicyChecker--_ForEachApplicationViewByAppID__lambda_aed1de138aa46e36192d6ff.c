/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___ @ 0x180653E78
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801F622C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     CoCreateInstance_0 @ 0x1802D3650 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___(
        __int64 a1,
        _QWORD *a2)
{
  HRESULT i; // ebx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  bool v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v14; // rax
  LPVOID ppv; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  i = CoCreateInstance_0(
        &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
        0LL,
        0x404u,
        &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
        &ppv);
  if ( i >= 0 )
  {
    v5 = ppv;
    v18[0] = 0LL;
    v6 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(v18);
    i = v6(v5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v7);
    if ( i >= 0 )
    {
      v8 = v18[0];
      v20 = 0LL;
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v18[0] + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      i = v9(v8, a1, &v20);
      if ( i >= 0 )
      {
        v19 = 0;
        v10 = 1;
        v11 = 0;
        for ( i = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v19); i >= 0; ++v11 )
        {
          if ( !v10 || v11 >= v19 )
            break;
          v12 = v20;
          v17 = 0LL;
          v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 32LL);
          v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
          i = v13(v12, v11, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14);
          if ( i >= 0 )
          {
            i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 216LL))(v17, *a2);
            if ( i >= 0 )
              v10 = *(_DWORD *)*a2 == 0;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)i;
}
