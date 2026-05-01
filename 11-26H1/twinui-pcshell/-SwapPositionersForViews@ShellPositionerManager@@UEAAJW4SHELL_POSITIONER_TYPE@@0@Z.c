/*
 * XREFs of ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804ECBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B4A10 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804EB5E8 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::SwapPositionersForViews(__int64 a1, unsigned int a2, unsigned int a3)
{
  ShellPositionerManager *v6; // r15
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  const struct _GUID *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // r14
  void *v17; // rbx
  __int64 (__fastcall *v18)(void *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v19; // rax
  int v20; // eax
  int PositionerPriorityForView; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  int v30; // [rsp+28h] [rbp-38h]
  int v31; // [rsp+30h] [rbp-30h]
  __int64 *v32; // [rsp+40h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v33; // [rsp+48h] [rbp-18h] BYREF
  struct IApplicationView *v34; // [rsp+50h] [rbp-10h] BYREF
  __int64 v35; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v37; // [rsp+A0h] [rbp+40h] BYREF
  void *v38; // [rsp+B8h] [rbp+58h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v35 = 0LL;
  v6 = (ShellPositionerManager *)(a1 - 88);
  v7 = *((_QWORD *)v6 + 20);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  v9 = v8(v7, &v35);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v38 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    v13 = CEnumerableObjectCollection::CreateInstance(v12, v11, &v38);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 350LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      goto LABEL_31;
    }
    v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v38 + 48LL))(v38, v35);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 351LL;
      goto LABEL_5;
    }
    v37 = 0;
    v13 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v38 + 24LL))(v38, &v37);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 354LL;
      goto LABEL_5;
    }
    if ( !v37 )
    {
LABEL_25:
      v32 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      v25 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 **))v38)(
              v38,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              &v32);
      v10 = v25;
      if ( v25 >= 0 )
      {
        v31 = a3;
        v30 = a2;
        v28 = ShellPositionerManager::PerformPositionerHandoff((__int64)v6, v32, 0LL, 0LL, 0LL, v30, v31);
        v10 = v28;
        if ( v28 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
          v10 = 0;
          goto LABEL_31;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C3,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v28);
        v26 = v10;
        v27 = 393LL;
      }
      else
      {
        v26 = (unsigned int)v25;
        v27 = 392LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)v26);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      goto LABEL_6;
    }
    v15 = v37 - 1;
    v16 = v37;
    while ( 1 )
    {
      v34 = 0LL;
      v17 = v38;
      v18 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v38 + 32LL);
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v34);
      v20 = v18(v17, v15, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v19);
      if ( v20 >= 0 )
      {
        v33 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
        PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(v6, v34, &v33);
        v22 = PositionerPriorityForView;
        if ( PositionerPriorityForView >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v33 + 24LL))(v33) != a2 )
          {
            v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v38 + 56LL))(v38, v15);
            if ( v23 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x172,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                (const char *)(unsigned int)v23);
          }
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD, _QWORD))(*(_QWORD *)v33 + 56LL))(
            v33,
            a2,
            a3);
          ShellPositionerManager::PersistPositionerPriority(v6, v34);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x16B,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)PositionerPriorityForView);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
        if ( v22 >= 0 )
          goto LABEL_24;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x167,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v20);
      }
      v24 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v38 + 56LL))(v38, v15);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x182,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v24);
LABEL_24:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
      --v15;
      if ( !--v16 )
        goto LABEL_25;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  return v10;
}
