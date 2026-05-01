/*
 * XREFs of ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802F675C
 * Callers:
 *     wil::details::lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___::_lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x1802EFE70 (wil--details--lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___--_lambda_call__lambda_f9c9.c)
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1802F14E0 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F1660 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1802F5800 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802F8624 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181254 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x1802F83E0 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_ObliterateOperation(CAppViewManager *this, const struct _GUID *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, const struct _GUID *, _QWORD); // rbx
  int v8; // eax
  int v9; // eax
  int GlomWorker; // eax
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  CIAMGlobals::AcquireExclusive((__int64)this, v14);
  v16 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x535,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_20;
  }
  if ( !v16 )
  {
    v5 = -2147023728;
    goto LABEL_20;
  }
  v17 = 0LL;
  v6 = *((_QWORD *)this + 23);
  v7 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  v8 = v7(v6, a2, &v17);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53A,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    goto LABEL_20;
  }
  if ( v17 )
  {
    v18 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v17, &v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53F,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      goto LABEL_6;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 192LL))(v18) )
    {
      GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v18, 0LL, 4294967293LL);
      if ( GlomWorker < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x544,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)GlomWorker);
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 176LL))(*((_QWORD *)this + 15), v18);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x548,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 23) + 72LL))(
          *((_QWORD *)this + 23),
          a2);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x54C,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  v5 = 0;
LABEL_20:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v14);
  return v5;
}
