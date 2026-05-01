/*
 * XREFs of ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804E2678 (-IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x1804E288C (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2D30 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_EndAnimationStage@CAppTransitionManager@@AEAAXXZ @ 0x1804E2E50 (-_EndAnimationStage@CAppTransitionManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareForAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  CAppTransitionManager *v4; // r15
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, struct IAppLayout **); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, struct IAppLayout **); // rdi
  bool IsLayoutOperationCrossFadeOnly; // si
  unsigned int i; // r14d
  __int64 v22; // rbx
  int (__fastcall *v23)(__int64, _QWORD, GUID *, struct IAppLayoutOperationItem **); // rdi
  int v24; // eax
  struct IAppLayout *v26; // [rsp+30h] [rbp-30h] BYREF
  struct IAppLayout *v27; // [rsp+38h] [rbp-28h] BYREF
  struct IAppLayoutOperationItem *v28; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  int v30; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v32; // [rsp+90h] [rbp+30h] BYREF
  __int64 v33; // [rsp+98h] [rbp+38h] BYREF

  v4 = (CAppTransitionManager *)((char *)this - 88);
  v29 = ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88);
  v30 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v29, 1);
  lpVtbl = a2->lpVtbl;
  v33 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v33);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 72LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  v11 = CAppTransitionManager::_BeginAnimationStage(v4, 1LL, v33, a3, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 74LL;
    goto LABEL_5;
  }
  v32 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v32);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 77LL;
    goto LABEL_5;
  }
  v14 = v33;
  v27 = 0LL;
  v26 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v33 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v16 = v15(v14, &v27);
  v12 = v16;
  if ( v16 < 0 )
  {
    v17 = 81LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    goto LABEL_23;
  }
  v18 = v33;
  v19 = *(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v33 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  v16 = v19(v18, &v26);
  v12 = v16;
  if ( v16 < 0 )
  {
    v17 = 82LL;
    goto LABEL_10;
  }
  IsLayoutOperationCrossFadeOnly = *((_DWORD *)this + 49) == 1;
  for ( i = 0; i < v32; ++i )
  {
    v22 = v33;
    v28 = 0LL;
    v23 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IAppLayoutOperationItem **))(*(_QWORD *)v33 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
    if ( v23(v22, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v28) >= 0 )
    {
      v24 = CAppTransitionManager::PrepareAppLayoutOperationForTransition(v4, v28, v27, v26);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5C,
          (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)(unsigned int)v24);
      if ( IsLayoutOperationCrossFadeOnly )
        IsLayoutOperationCrossFadeOnly = CAppTransitionManager::IsLayoutOperationCrossFadeOnly(v4, v28);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
  }
  if ( IsLayoutOperationCrossFadeOnly )
    *((_BYTE *)this + 194) = 0;
  CAppTransitionManager::_EndAnimationStage(v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v12 = 0;
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v29);
  return v12;
}
