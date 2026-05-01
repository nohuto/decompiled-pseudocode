/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180060540
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180061BB8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18010D834 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180190B84 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IImmersiveApplicationInternal *a5)
{
  CApplicationManager *v9; // rcx
  HRESULT v10; // ebx
  int (__fastcall *v11)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v12; // eax
  void (__fastcall *v13)(char *, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  IUnknown *v15; // rcx
  __int64 v16; // rax
  struct IImmersiveApplicationInternal *v17; // rdi
  void (__fastcall *v18)(struct IImmersiveApplicationInternal *, GUID *, IUnknown **); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v20)(PVOID, IUnknown *, __int64 *); // rbx
  __int64 v21; // rcx
  void *v22; // rcx
  __int64 v23; // rcx
  struct IApplicationView *v24; // rcx
  void *ppvOut; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  struct IApplicationView *v28; // [rsp+40h] [rbp-10h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v31; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(v31) = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  v10 = CApplicationManager::_HandleCreation_EnsureApplicationView(v9, a2, 0LL, &v28);
  if ( v10 < 0 )
    goto LABEL_20;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v27 = 0LL;
  v11 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  if ( v11(a2, &v27) >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 224LL))(v27);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDCD,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  LODWORD(v31) = 2;
  v13 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 24) + 32LL);
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
  v13((char *)this - 192, &GUID_00000000_0000_0000_c000_000000000046, v14);
  v10 = IUnknown_QueryService(
          punk,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
          &ppvOut);
  v15 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
  }
  if ( v10 >= 0 )
  {
    v16 = 0LL;
    v31 = 0LL;
    v17 = a5;
    if ( a5 )
    {
      punk = 0LL;
      v18 = **(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, IUnknown **))a5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      v18(v17, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &punk);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v20 = *(__int64 (__fastcall **)(PVOID, IUnknown *, __int64 *))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      v10 = v20(Ptr, punk, &v31);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( v10 < 0 )
      {
LABEL_12:
        v21 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( v10 >= 0 )
          v10 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
                  (CApplicationManager *)((char *)this - 240),
                  a2);
        goto LABEL_16;
      }
      v16 = v31;
    }
    v10 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *, struct IPresentationRequestedArgs *, __int64))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v28,
            a3,
            a4,
            v16);
    goto LABEL_12;
  }
LABEL_16:
  v22 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_20:
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return (unsigned int)v10;
}
