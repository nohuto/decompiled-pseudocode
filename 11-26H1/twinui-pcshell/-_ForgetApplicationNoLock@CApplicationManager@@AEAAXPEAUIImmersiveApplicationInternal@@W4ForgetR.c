/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1800AD970 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801E042C (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_102eb91890a206a003c0de1a94bbc83e___ @ 0x1802097E0 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802B16BC (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x1802DF7B0 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802DF840 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802DF930 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1802DFA20 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1802E6510 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E69C0 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800A6668 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x1800A67E4 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800A74D8 (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18015DFA4 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     WPP_SF_qSdL @ 0x18021C650 (WPP_SF_qSdL.c)
 *     WPP_SF_S @ 0x1802E7E98 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_ForgetApplicationNoLock(
        CApplicationManager *a1,
        struct IImmersiveApplicationInternal *a2,
        unsigned int a3)
{
  char v3; // di
  char v6; // bl
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 result; // rax
  const unsigned __int16 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void (__fastcall *v16)(char *, unsigned __int64 *); // rbx
  int (__fastcall *v17)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rbx
  unsigned int i; // r14d
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h] BYREF
  char v27; // [rsp+98h] [rbp+38h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  v27 = 0;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(a2, a3, &v27);
  CApplicationManager::_RemoveApplication(a1, a2);
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v7 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSdL(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v8, v9, (_DWORD)a2, v7, v6, v3);
  }
  v24 = -1LL;
  v28 = 0LL;
  v10 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  result = v10(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v28);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v28 + 24LL))(v28, &v24);
    if ( (int)result >= 0 )
    {
      v25 = v24;
      v26 = 0LL;
      result = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                 (int)a1 + 632,
                 (unsigned int)&v25,
                 (unsigned int)&v26,
                 (unsigned int)&v23);
      if ( (int)result < 0 )
      {
        v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
        CApplicationManager::_DeleteApplicationData(a1, v12, &v24);
        result = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
          result = WPP_SF_S(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v14, v15, v13);
        }
      }
    }
  }
  if ( v27 )
  {
    v16 = *(void (__fastcall **)(char *, unsigned __int64 *))(*((_QWORD *)a1 + 88) + 8LL);
    v25 = (unsigned __int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v16((char *)a1 + 704, &v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v23 = 0LL;
    v17 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 352LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    if ( v17(a2, 1LL, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, &v23) >= 0 )
    {
      v25 = 0LL;
      for ( i = 0; ; ++i )
      {
        v19 = v23;
        v20 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v23 + 32LL);
        v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v25);
        if ( v20(v19, i, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v21) < 0 )
          break;
        v26 = 0LL;
        if ( (*(int (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v25 + 32LL))(v25, &v26) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded(a1, a2, v26, 1LL);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    }
    result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  }
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return result;
}
