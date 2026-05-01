/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x18027D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18004B878 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1801E7C24 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x18027E7A4 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 *     ??1?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@QEAA@XZ @ 0x180289FF4 (--1-$optional@UHandleActivationHints@CClassicWindowManager@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802B9A40 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CClassicWindowManager::HandleActivation(_QWORD *a1, HWND a2, char a3)
{
  HWND v4; // r12
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r13
  int v8; // esi
  __int64 v9; // rdx
  unsigned __int64 i; // rdi
  __int64 v11; // rbx
  int v12; // r12d
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  int (__fastcall ***v16)(_QWORD, GUID *, volatile signed __int32 **); // rcx
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v19; // rdi
  volatile signed __int32 *v20; // rax
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-41h]
  char v27; // [rsp+40h] [rbp-39h]
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-29h]
  char v30; // [rsp+58h] [rbp-21h]
  __int64 v31; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-11h]
  _QWORD *v33; // [rsp+70h] [rbp-9h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-1h]
  LPCRITICAL_SECTION v35; // [rsp+80h] [rbp+7h]
  int v36; // [rsp+88h] [rbp+Fh]
  __int64 v37; // [rsp+90h] [rbp+17h]
  __int64 v38; // [rsp+98h] [rbp+1Fh]
  volatile signed __int32 *v39; // [rsp+E0h] [rbp+67h] BYREF
  HWND v40; // [rsp+E8h] [rbp+6Fh]
  __int64 v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v40 = a2;
  v4 = a2;
  v6 = a1 - 9;
  v33 = a1 - 9;
  lpCriticalSection = (LPCRITICAL_SECTION)((unsigned __int64)(a1 + 8) & -(__int64)(a1 != (_QWORD *)72));
  v35 = lpCriticalSection;
  v36 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)lpCriticalSection, 1);
  v7 = 0LL;
  v30 = 0;
  v8 = 0;
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v9);
  if ( (a3 & 1) == 0 || GetShellWindow() == v4 )
    goto LABEL_37;
  v39 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  v39 = 0LL;
  v37 = 0LL;
  for ( i = 0LL; i < a1[16]; ++i )
  {
    v38 = 0LL;
    v11 = *(_QWORD *)(a1[15] + 8 * i);
    v31 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v41 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
           v11,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v41) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v41 + 192LL))(v41, v4) )
    {
      v12 = 0;
    }
    else
    {
      v12 = -1;
    }
    v13 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v14 = v12 == 0;
    v4 = v40;
    if ( v14 )
    {
      v7 = i;
      v15 = 0;
      goto LABEL_17;
    }
  }
  v15 = -2147319765;
LABEL_17:
  if ( v15 < 0
    || (v16 = *(int (__fastcall ****)(_QWORD, GUID *, volatile signed __int32 **))(a1[15] + 8 * v7),
        (**v16)(v16, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v39) < 0) )
  {
    v41 = 0LL;
    if ( (a3 & 3) == 3 && (int)CClassicWindowManager::_EnsureMonitorManager((CClassicWindowManager *)(a1 - 9)) >= 0 )
    {
      v17 = a1[25];
      v18 = *(void (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v17 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      v18(v17, v4, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v41);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
    v19 = v41;
    v39 = 0LL;
    v20 = (volatile signed __int32 *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v20;
    if ( v20 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v20);
      *(_QWORD *)v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindow>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v21 = &CClassicWindow::`vftable';
      *((_QWORD *)v21 + 2) = v4;
      *((_QWORD *)v21 + 3) = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21 + 3);
      *((_QWORD *)v21 + 5) = 0LL;
      *((_QWORD *)v21 + 6) = 0LL;
      *((_QWORD *)v21 + 7) = 0LL;
      *((_QWORD *)v21 + 8) = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21 + 8);
      *((_QWORD *)v21 + 9) = 0LL;
      *((_QWORD *)v21 + 10) = 0LL;
      *((_QWORD *)v21 + 4) = 0LL;
      v39 = v21;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v21);
      v8 = (*(__int64 (__fastcall **)(_QWORD *, volatile signed __int32 **))(a1[14] + 8LL))(a1 + 14, &v39);
    }
    else
    {
      v8 = -2147024882;
    }
    v22 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v31, &v39);
    v32 = v7;
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v25, &v31);
    v26 = v32;
    v27 = 1;
    if ( v30 )
    {
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v28, &v25);
      v29 = v26;
    }
    else
    {
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v28, &v25);
      v29 = v26;
      v30 = 1;
    }
    std::optional<CClassicWindowManager::HandleActivationHints>::~optional<CClassicWindowManager::HandleActivationHints>(&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  }
  v23 = (__int64)v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v8 >= 0 )
  {
    v6 = v33;
LABEL_37:
    v27 = 0;
    if ( v30 )
    {
      v25 = v28;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
      v26 = v29;
      v27 = 1;
    }
    v8 = CClassicWindowManager::_HandleActivation(v6, v4, &v25);
  }
  if ( v30 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  if ( v36 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
