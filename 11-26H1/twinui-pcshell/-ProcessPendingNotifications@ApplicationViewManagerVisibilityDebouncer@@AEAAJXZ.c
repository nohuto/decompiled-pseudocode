/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18004687C
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180046590 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x1801C35B0 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x180034A7C (--1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004597C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18010B4F8 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18018AB40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_18018AB40.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::_lambda_5f803f865b4b07caa2d72f9fc7ffab60_ @ 0x180309B68 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--_lambda_5f803f865b4b07caa2d72f9fc7ffab60_.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  unsigned __int64 v2; // r12
  ULONGLONG TickCount64; // rbx
  __int64 *v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 *v9; // r14
  _QWORD *v10; // r12
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  DWORD CurrentThreadId; // eax
  int v16; // esi
  struct IObjectArray *v17; // rcx
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // esi
  int v22; // esi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  struct IObjectArray *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  struct IObjectArray **v29; // rcx
  ApplicationViewManagerVisibilityDebouncer *v30; // rbx
  ApplicationViewManagerVisibilityDebouncer *v31; // rcx
  struct IObjectArray *v32; // rbx
  HRESULT (__stdcall *v33)(IObjectArray *, UINT, const IID *const, void **); // rsi
  ApplicationViewManagerVisibilityDebouncer *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  ApplicationViewManagerVisibilityDebouncer *v37; // rcx
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct IObjectArray *v42; // rbx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rsi
  ApplicationViewManagerVisibilityDebouncer *v44; // rcx
  int v45; // eax
  signed __int32 v46; // eax
  struct IObjectArray *v47; // rcx
  int v48; // [rsp+20h] [rbp-89h]
  unsigned int v49; // [rsp+30h] [rbp-79h]
  ApplicationViewManagerVisibilityDebouncer *v50; // [rsp+38h] [rbp-71h] BYREF
  struct IObjectArray **v51; // [rsp+40h] [rbp-69h]
  struct IObjectArray *v52; // [rsp+48h] [rbp-61h] BYREF
  int v53; // [rsp+50h] [rbp-59h] BYREF
  __int64 v54; // [rsp+58h] [rbp-51h] BYREF
  __int64 v55; // [rsp+60h] [rbp-49h] BYREF
  int v56; // [rsp+68h] [rbp-41h]
  __int64 v57; // [rsp+70h] [rbp-39h]
  struct IObjectArray **v58; // [rsp+78h] [rbp-31h]
  __int64 v59; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v60; // [rsp+88h] [rbp-21h]
  __int64 v61; // [rsp+90h] [rbp-19h]
  __int64 v62; // [rsp+98h] [rbp-11h]
  char *v63; // [rsp+A0h] [rbp-9h]
  __int64 v64; // [rsp+A8h] [rbp-1h]
  __int64 *v65; // [rsp+B0h] [rbp+7h]
  __int64 *v66; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  ApplicationViewManagerVisibilityDebouncer *v68; // [rsp+110h] [rbp+67h] BYREF
  __int64 v69; // [rsp+118h] [rbp+6Fh] BYREF
  struct IObjectArray *v70; // [rsp+120h] [rbp+77h] BYREF
  __int64 v71; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v70 = 0LL;
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 15, &v70);
  while ( 1 )
  {
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_25;
    TickCount64 = GetTickCount64();
    v4 = (__int64 *)*((_QWORD *)this + 9);
    v5 = *v4;
    v59 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *((_DWORD *)v4 + 2);
    LODWORD(v68) = v6;
    v60 = v6;
    v7 = v4[2];
    v61 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = v4[3];
    v62 = v8;
    if ( v6 != 1 )
      goto LABEL_57;
    if ( TickCount64 < v8 + 50 )
      break;
    v63 = (char *)this + 184;
    AcquireSRWLockExclusive((PSRWLOCK)this + 23);
    v64 = 0LL;
    v19 = 0LL;
    while ( v2 < *((_QWORD *)this + 25) )
    {
      v71 = 0LL;
      v65 = &v71;
      v20 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v2);
      v69 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v20 = v69;
      }
      v66 = &v69;
      if ( !v20 || !v5 )
        goto LABEL_41;
      if ( v20 == v5 )
      {
        v22 = 1;
      }
      else
      {
        v54 = 0LL;
        v55 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
               v20,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v54) < 0 )
          goto LABEL_40;
        v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
                v5,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v55);
        if ( v21 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        if ( v21 < 0 || v54 != v55 )
        {
LABEL_40:
          v20 = v69;
LABEL_41:
          v22 = 0;
          goto LABEL_42;
        }
        v22 = 1;
        v20 = v69;
      }
LABEL_42:
      if ( v20 )
      {
        v69 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v23 = v71;
      if ( v71 )
      {
        v71 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( v22 )
      {
        v19 = v2;
        v2 = 0LL;
        v24 = 0;
        goto LABEL_48;
      }
      ++v2;
    }
    v24 = -2147319765;
    v2 = 0LL;
LABEL_48:
    if ( v24 >= 0 && v19 != -1LL && v19 < *((_QWORD *)this + 25) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(*((_QWORD *)this + 24) + 8 * v19);
      v25 = *((_QWORD *)this + 25);
      if ( v19 != v25 - 1 )
        memmove_0(
          (void *)(*((_QWORD *)this + 24) + 8 * v19),
          (const void *)(*((_QWORD *)this + 24) + 8 * v19 + 8),
          8 * (v25 - v19) - 8);
      --*((_QWORD *)this + 25);
    }
    if ( this != (ApplicationViewManagerVisibilityDebouncer *)-184LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 23);
    v6 = (unsigned int)v68;
LABEL_57:
    v26 = v70;
    v52 = v70;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v52);
    v53 = 0;
    v27 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v26->lpVtbl->GetCount)(v26, &v53);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v27,
        v48);
    v28 = 0LL;
    v49 = 0;
    v50 = 0LL;
    v29 = &v52;
    v51 = &v52;
    if ( v53 )
    {
      while ( 1 )
      {
        v42 = *v29;
        GetAt = (*v29)->lpVtbl->GetAt;
        v44 = v50;
        if ( v50 )
        {
          v50 = 0LL;
          (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v44 + 16LL))(v44);
          v28 = v49;
        }
        v45 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, ApplicationViewManagerVisibilityDebouncer **))GetAt)(
                v42,
                v28,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v50);
        if ( v45 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v45,
          v48);
        v28 = v49 + 1;
        v49 = v28;
        v29 = v51;
        if ( (unsigned int)v28 >= *((_DWORD *)v51 + 2) )
          goto LABEL_60;
      }
      v29 = v51;
      LODWORD(v28) = v49;
    }
LABEL_60:
    v56 = v53;
    v57 = 0LL;
    v58 = &v52;
LABEL_61:
    while ( (_DWORD)v28 != v56 || v29 != v58 )
    {
      v30 = v50;
      v68 = v50;
      if ( v50 )
        (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v50 + 8LL))(v50);
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, __int64, _QWORD, __int64))(*(_QWORD *)v30 + 24LL))(
        v30,
        v5,
        v6,
        v7);
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v30 + 16LL))(v30);
      v28 = ++v49;
      v31 = v50;
      if ( v50 )
      {
        v50 = 0LL;
        (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v31 + 16LL))(v31);
        v28 = v49;
      }
      while ( 1 )
      {
        v29 = v51;
        if ( (unsigned int)v28 >= *((_DWORD *)v51 + 2) )
          break;
        v32 = *v51;
        v33 = (*v51)->lpVtbl->GetAt;
        v34 = v50;
        if ( v50 )
        {
          v50 = 0LL;
          (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v34 + 16LL))(v34);
          v28 = v49;
        }
        v35 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, ApplicationViewManagerVisibilityDebouncer **))v33)(
                v32,
                v28,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v50);
        if ( v35 >= 0 )
        {
          v29 = v51;
          LODWORD(v28) = v49;
          goto LABEL_61;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v35,
          v48);
        v28 = ++v49;
      }
    }
    v36 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = (__int64)v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    if ( *((_QWORD *)this + 10) )
    {
      v39 = (__int64 *)*((_QWORD *)this + 9);
      v40 = v39[2];
      if ( v40 )
      {
        v39[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = *v39;
      if ( *v39 )
      {
        *v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      if ( *((_QWORD *)this + 10) != 1LL )
        memmove_0(
          *((void **)this + 9),
          (const void *)(*((_QWORD *)this + 9) + 32LL),
          32 * (*((_QWORD *)this + 10) - 1LL));
      --*((_QWORD *)this + 10);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v9 = (__int64 *)((char *)this + 176);
  if ( *((_QWORD *)this + 22) )
  {
LABEL_21:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_25:
    v17 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v17->lpVtbl->Release)(v17);
    }
    return 0LL;
  }
  v68 = this;
  if ( this )
  {
    do
      v46 = *((_DWORD *)this + 17);
    while ( v46 != 0x7FFFFFFF && v46 != _InterlockedCompareExchange((volatile signed __int32 *)this + 17, v46 + 1, v46) );
  }
  v10 = (_QWORD *)lambda_5f803f865b4b07caa2d72f9fc7ffab60_::_lambda_5f803f865b4b07caa2d72f9fc7ffab60_(&v52, this, &v68);
  v11 = *v9;
  if ( *v9 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v12);
    v13[2] = *v10;
    v14 = v10 + 1;
    v13[3] = 0LL;
    if ( v13 + 3 != v10 + 1 )
    {
      v13[3] = *v14;
      *v14 = 0LL;
    }
    *v13 = &off_18070CCE8;
  }
  else
  {
    v13 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v16 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v53);
  if ( v16 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(this);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v68);
  ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v59);
  v47 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v47->lpVtbl->Release)(v47);
  }
  return (unsigned int)v16;
}
