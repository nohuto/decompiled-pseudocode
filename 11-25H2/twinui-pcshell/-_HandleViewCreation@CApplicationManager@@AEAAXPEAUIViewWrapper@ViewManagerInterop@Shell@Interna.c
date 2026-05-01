/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180085C90
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180082DF0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180209558 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18001B494 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180086190 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180086CF4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180086D74 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1801385A0 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180138C1C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1801E6B4C (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180212E38 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802A7E2C (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 *     ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1802E8B48 (-HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct IUnknown *a3)
{
  int (__fastcall *v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rbx
  int v6; // r13d
  unsigned int NextGlomId; // r14d
  RTL_SRWLOCK *v8; // rcx
  char v9; // r15
  int First; // eax
  int ImmersiveApp; // edi
  void (__fastcall *v12)(unsigned __int64, GUID *, GUID *, unsigned __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v16; // rbx
  unsigned __int64 v17; // rdi
  const unsigned __int16 *v18; // rax
  int v19; // ebx
  struct IImmersiveMonitor *v20; // rcx
  const unsigned __int16 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  CAppManagerTelemetry *v24; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveApplicationInternal *v26; // rcx
  void (__fastcall *v27)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rbx
  char v28; // bl
  struct IUnknown *v29; // [rsp+28h] [rbp-58h]
  struct IImmersiveApplicationInternal *v30; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v33; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v34; // [rsp+60h] [rbp-20h]
  unsigned __int64 v35; // [rsp+68h] [rbp-18h] BYREF
  int v36; // [rsp+70h] [rbp-10h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+48h] BYREF
  struct IUnknown *v38; // [rsp+D0h] [rbp+50h]
  __int64 v39; // [rsp+D8h] [rbp+58h] BYREF

  v38 = a3;
  string = 0LL;
  v5 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5(a2, &string) < 0 )
    goto LABEL_35;
  v31 = -1LL;
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 584LL))(
    a2,
    &v31);
  v6 = 0;
  NextGlomId = 0;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v39 = 0LL;
    v27 = **(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    v27(a2, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v39);
    LODWORD(v37) = 0;
    if ( (*(int (__fastcall **)(__int64, const WCHAR *, unsigned __int64 *))(*(_QWORD *)v39 + 88LL))(
           v39,
           L"LastSetGlomIdForReconstitution",
           &v37) >= 0 )
      NextGlomId = v37;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
  }
  v30 = 0LL;
  v9 = 0;
  AcquireSRWLockExclusive(v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  if ( NextGlomId )
  {
    v35 = v31;
    v36 = NextGlomId;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v35, &v30);
  }
  else
  {
    v37 = v31;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(this, &v37, &v30);
  }
  ImmersiveApp = First;
  LODWORD(v39) = 1;
  if ( First >= 0 )
  {
    v28 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v30 + 408LL))(v30);
    v29 = v38;
    ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v30, 1LL, 0LL);
    v9 = v28 == 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( ImmersiveApp >= 0 )
    goto LABEL_30;
  v35 = 0LL;
  v36 = -2147467259;
  v12 = *(void (__fastcall **)(unsigned __int64, GUID *, GUID *, unsigned __int64 *))(*(_QWORD *)(((unsigned __int64)this
                                                                                                 + 192) & -(__int64)(this != 0LL))
                                                                                    + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  v12(
    ((unsigned __int64)this + 192) & -(__int64)(this != 0LL),
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v35);
  v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v35 + 40LL))(v35);
  v36 = v6;
  if ( v6 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    v6 = v36;
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  if ( NextGlomId )
  {
    v33 = (struct IImmersiveMonitor *)v31;
    v34 = NextGlomId;
    v13 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v33, &v30);
  }
  else
  {
    v37 = v31;
    v13 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(this, &v37, &v30);
  }
  ImmersiveApp = v13;
  if ( v13 >= 0 )
  {
    v9 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v30 + 408LL))(v30) == 0;
LABEL_42:
    ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v30, (unsigned int)v39, 0LL);
    goto LABEL_25;
  }
  if ( v13 == -2147319765 )
  {
    v33 = 0LL;
    v14 = *((_QWORD *)this + 70);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v14 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    ImmersiveApp = v15(
                     v14,
                     0LL,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &v33);
    if ( ImmersiveApp < 0 )
      goto LABEL_21;
    if ( !NextGlomId )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                     (CApplicationManager *)((char *)this + 624),
                     StringRawBuffer);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    v16 = v33;
    v17 = v31;
    v18 = WindowsGetStringRawBuffer(string, 0LL);
    ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                     this,
                     v18,
                     v17,
                     NextGlomId,
                     v16,
                     (const struct _GUID *)v29,
                     (void **)&v30);
    if ( ImmersiveApp < 0 )
    {
LABEL_21:
      v19 = -1;
    }
    else
    {
      v19 = 0;
      if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
        CApplicationManager::UpdateMonitorForAppAsync(this, v30);
      v9 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr);
    }
    LODWORD(v39) = v19;
    v20 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( ImmersiveApp >= 0 )
      goto LABEL_42;
  }
LABEL_25:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v35 + 48LL))(v35);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  if ( ImmersiveApp < 0 )
    goto LABEL_26;
LABEL_30:
  if ( v9
    && (ImmersiveApp = CApplicationManager::HandleInitialPosition(
                         (CApplicationManager *)((char *)this + 240),
                         v30,
                         v38,
                         0LL,
                         0LL),
        ImmersiveApp < 0)
    || v6 < 0 )
  {
LABEL_26:
    v21 = WindowsGetStringRawBuffer(string, 0LL);
    if ( CAppManagerTelemetry::IsEnabled(v22) )
    {
      wil::details::static_lazy<CAppManagerTelemetry>::get(
        v23,
        _lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
      CAppManagerTelemetry::HandleViewCreationFailure_(v24, v21, v31, ImmersiveApp, v6);
    }
  }
  v26 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v26 + 16LL))(v26);
  }
LABEL_35:
  if ( string )
    WindowsDeleteString(string);
}
