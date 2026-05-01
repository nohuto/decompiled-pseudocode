/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F1660
 * Callers:
 *     _lambda_47284ee12e316a93415fcd6b809ad33f_::operator() @ 0x1802F02F8 (_lambda_47284ee12e316a93415fcd6b809ad33f_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F1500 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180047630 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A8F60 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181254 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f0d5340ff48f436e352eedcca6de5b71___ @ 0x1802EF5EC (ShellPositionerHelpers--PerformCallbackOnView__lambda_f0d5340ff48f436e352eedcca6de5b71___.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802F675C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x1802F83E0 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragCompleteWorker(
        CAppViewManager *this,
        const struct _GUID *a2,
        struct tagPOINT a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  CAppViewManager *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, const struct _GUID *, _QWORD); // rdi
  int v15; // eax
  CAppViewManager *v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  int v19; // eax
  CAppViewManager *v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  int v23; // eax
  int v24; // eax
  CAppViewManager *v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  struct IApplicationView **v28; // r9
  int ViewForApplication; // eax
  CAppViewManager *v30; // rsi
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  CAppViewManager *v34; // rsi
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  struct IUnknown *v38; // [rsp+30h] [rbp-39h] BYREF
  __int64 v39; // [rsp+38h] [rbp-31h] BYREF
  CAppViewManager *v40[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-19h] BYREF
  __int64 v42[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v45; // [rsp+D0h] [rbp+67h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+E8h] [rbp+7Fh] BYREF

  v41 = 0LL;
  v6 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
         v42,
         (__int64)this,
         (__int64)a2,
         (__int64)&v41);
  *(_OWORD *)v40 = *(_OWORD *)v6;
  v43 = (_QWORD *)v6[2];
  CIAMGlobals::AcquireExclusive(v7, &v38);
  v45 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v45);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x483,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
    v10 = v40[0];
    if ( (int)CAppViewManager::_ObliterateOperation(
                v40[0],
                (const struct _GUID *)_mm_srli_si128(*(__m128i *)v40, 8).m128i_i64[0]) < 0 )
    {
      v12 = v43;
      if ( *v43 )
      {
        CIAMGlobals::AcquireExclusive(v11, &v46);
        CAppViewManager::_TransferAllWindowsToNextGlomWorker(v10, *v12, 0LL, 4294967293LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v10 + 15) + 176LL))(*((_QWORD *)v10 + 15), *v12);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v46);
      }
    }
    goto LABEL_39;
  }
  if ( v45 )
  {
    v46 = 0LL;
    v13 = *((_QWORD *)this + 23);
    v14 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v13 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    v15 = v14(v13, a2, &v46);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x488,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
      v16 = v40[0];
      if ( (int)CAppViewManager::_ObliterateOperation(
                  v40[0],
                  (const struct _GUID *)_mm_srli_si128(*(__m128i *)v40, 8).m128i_i64[0]) < 0 )
      {
        v18 = v43;
        if ( *v43 )
        {
          CIAMGlobals::AcquireExclusive(v17, &v38);
          CAppViewManager::_TransferAllWindowsToNextGlomWorker(v16, *v18, 0LL, 4294967293LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v16 + 15) + 176LL))(*((_QWORD *)v16 + 15), *v18);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
        }
      }
      goto LABEL_39;
    }
    if ( v46 )
    {
      v19 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v46, (__int64 *)&v41);
      v9 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48B,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
        v20 = v40[0];
        if ( (int)CAppViewManager::_ObliterateOperation(
                    v40[0],
                    (const struct _GUID *)_mm_srli_si128(*(__m128i *)v40, 8).m128i_i64[0]) < 0 )
        {
          v22 = v43;
          if ( *v43 )
          {
            CIAMGlobals::AcquireExclusive(v21, &v38);
            CAppViewManager::_TransferAllWindowsToNextGlomWorker(v20, *v22, 0LL, 4294967293LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v20 + 15) + 176LL))(*((_QWORD *)v20 + 15), *v22);
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
          }
        }
        goto LABEL_39;
      }
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
            *((_QWORD *)this + 23),
            a2,
            1LL,
            1LL);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48F,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v23);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
  if ( !v41 )
  {
LABEL_38:
    v9 = 0;
    goto LABEL_39;
  }
  v38 = 0LL;
  v24 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v41, (__int64 *)&v38);
  v9 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x497,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
    v25 = v40[0];
    if ( (int)CAppViewManager::_ObliterateOperation(
                v40[0],
                (const struct _GUID *)_mm_srli_si128(*(__m128i *)v40, 8).m128i_i64[0]) < 0 )
    {
      v27 = v43;
      if ( *v43 )
      {
        CIAMGlobals::AcquireExclusive(v26, v40);
        CAppViewManager::_TransferAllWindowsToNextGlomWorker(v25, *v27, 0LL, 4294967293LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v25 + 15) + 176LL))(*((_QWORD *)v25 + 15), *v27);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v40);
      }
    }
    goto LABEL_39;
  }
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *((IUnknown **)this + 15),
                         v38,
                         (struct IImmersiveApplication *)&v39,
                         v28);
  v9 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49B,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForApplication);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
    v30 = v40[0];
    if ( (int)CAppViewManager::_ObliterateOperation(
                v40[0],
                (const struct _GUID *)_mm_srli_si128(*(__m128i *)v40, 8).m128i_i64[0]) < 0 )
    {
      v32 = v43;
      if ( *v43 )
      {
        CIAMGlobals::AcquireExclusive(v31, v40);
        CAppViewManager::_TransferAllWindowsToNextGlomWorker(v30, *v32, 0LL, 4294967293LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v30 + 15) + 176LL))(*((_QWORD *)v30 + 15), *v32);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v40);
      }
    }
    goto LABEL_39;
  }
  v42[0] = v39;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v42);
  v42[1] = (__int64)a3;
  v9 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f0d5340ff48f436e352eedcca6de5b71___(
         *((IUnknown **)this + 15),
         v39,
         v42);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v42);
  if ( v9 >= 0 )
  {
    CIAMGlobals::AcquireExclusive(v33, v40);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v41)[69])(v41, 0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v40);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A9,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
  v34 = v40[0];
  if ( (int)CAppViewManager::_ObliterateOperation(
              v40[0],
              (const struct _GUID *)_mm_srli_si128(*(__m128i *)v40, 8).m128i_i64[0]) < 0 )
  {
    v36 = v43;
    if ( *v43 )
    {
      CIAMGlobals::AcquireExclusive(v35, v40);
      CAppViewManager::_TransferAllWindowsToNextGlomWorker(v34, *v36, 0LL, 4294967293LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v34 + 15) + 176LL))(*((_QWORD *)v34 + 15), *v36);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v40);
    }
  }
LABEL_39:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
  return (unsigned int)v9;
}
