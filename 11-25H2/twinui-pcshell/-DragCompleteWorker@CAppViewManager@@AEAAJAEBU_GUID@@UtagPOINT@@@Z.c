/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F66C4
 * Callers:
 *     _lambda_47284ee12e316a93415fcd6b809ad33f_::operator() @ 0x1802F53CC (_lambda_47284ee12e316a93415fcd6b809ad33f_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F6570 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800399F8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180139AE0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018B7B8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f0d5340ff48f436e352eedcca6de5b71___ @ 0x1802F46F8 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f0d5340ff48f436e352eedcca6de5b71___.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FB570 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x1802FD1C0 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragCompleteWorker(
        CAppViewManager *this,
        const struct _GUID *a2,
        struct tagPOINT a3)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, const struct _GUID *, _QWORD); // rdi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  struct IApplicationView **v18; // r9
  int ViewForApplication; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  RTL_SRWLOCK *v24; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v25; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v26[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+48h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+58h] BYREF

  v29 = 0LL;
  CIAMGlobals::AcquireExclusive((__int64)this, &v25);
  v28 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v28);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x483,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
    if ( (int)CAppViewManager::_ObliterateOperation(this, a2) < 0 && v29 )
    {
      CIAMGlobals::AcquireExclusive(v8, &v30);
      CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v29, 0LL, 4294967293LL);
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                          + 176LL))(
        *((_QWORD *)this + 15),
        v29);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v30);
    }
    goto LABEL_39;
  }
  if ( v28 )
  {
    v30 = 0LL;
    v9 = *((_QWORD *)this + 23);
    v10 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
    v11 = v10(v9, a2, &v30);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x488,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
      if ( (int)CAppViewManager::_ObliterateOperation(this, a2) < 0 && v29 )
      {
        CIAMGlobals::AcquireExclusive(v12, &v25);
        CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v29, 0LL, 4294967293LL);
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                            + 176LL))(
          *((_QWORD *)this + 15),
          v29);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
      }
      goto LABEL_39;
    }
    if ( v30 )
    {
      v13 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v30, (__int64 *)&v29);
      v7 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48B,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
        if ( (int)CAppViewManager::_ObliterateOperation(this, a2) < 0 && v29 )
        {
          CIAMGlobals::AcquireExclusive(v14, &v25);
          CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v29, 0LL, 4294967293LL);
          (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                              + 176LL))(
            *((_QWORD *)this + 15),
            v29);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
        }
        goto LABEL_39;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
            *((_QWORD *)this + 23),
            a2,
            1LL,
            1LL);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48F,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
  if ( !v29 )
  {
LABEL_38:
    v7 = 0;
    goto LABEL_39;
  }
  v25 = 0LL;
  v16 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v29, (__int64 *)&v25);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x497,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    if ( (int)CAppViewManager::_ObliterateOperation(this, a2) < 0 && v29 )
    {
      CIAMGlobals::AcquireExclusive(v17, v26);
      CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v29, 0LL, 4294967293LL);
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                          + 176LL))(
        *((_QWORD *)this + 15),
        v29);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v26);
    }
    goto LABEL_39;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *((IUnknown **)this + 15),
                         v25,
                         (struct IImmersiveApplication *)&v24,
                         v18);
  v7 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49B,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForApplication);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    if ( (int)CAppViewManager::_ObliterateOperation(this, a2) < 0 && v29 )
    {
      CIAMGlobals::AcquireExclusive(v20, v26);
      CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v29, 0LL, 4294967293LL);
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                          + 176LL))(
        *((_QWORD *)this + 15),
        v29);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v26);
    }
    goto LABEL_39;
  }
  v26[0] = v24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v26);
  v26[1] = (RTL_SRWLOCK *)a3;
  v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f0d5340ff48f436e352eedcca6de5b71___(
         *((IUnknown **)this + 15),
         (__int64)v24,
         (volatile signed __int32 *)v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v26);
  if ( v7 >= 0 )
  {
    CIAMGlobals::AcquireExclusive(v21, v26);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v29)[69])(v29, 0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A9,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  if ( (int)CAppViewManager::_ObliterateOperation(this, a2) < 0 && v29 )
  {
    CIAMGlobals::AcquireExclusive(v22, v26);
    CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v29, 0LL, 4294967293LL);
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                        + 176LL))(
      *((_QWORD *)this + 15),
      v29);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v26);
  }
LABEL_39:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
  return (unsigned int)v7;
}
