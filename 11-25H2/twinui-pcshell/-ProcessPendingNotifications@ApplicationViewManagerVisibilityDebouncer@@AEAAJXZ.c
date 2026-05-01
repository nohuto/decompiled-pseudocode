/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18003A874
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x18003A280 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003A580 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180027108 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003C030 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x180134254 (--1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180191F10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180191F10.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  unsigned __int64 v2; // r13
  ULONGLONG TickCount64; // rbx
  __int64 *v4; // rsi
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 *v9; // r15
  bool i; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  DWORD CurrentThreadId; // eax
  int v15; // esi
  struct IObjectArray *v16; // rcx
  signed __int32 v18; // eax
  unsigned __int64 v19; // r15
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
  __int64 v30; // rbx
  __int64 v31; // rcx
  struct IObjectArray *v32; // rbx
  HRESULT (__stdcall *v33)(IObjectArray *, UINT, const IID *const, void **); // rsi
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct IObjectArray *v42; // rbx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rsi
  __int64 v44; // rcx
  int v45; // eax
  signed __int32 v46; // eax
  struct IObjectArray *v47; // rcx
  unsigned int v48; // [rsp+30h] [rbp-99h]
  __int64 v49; // [rsp+38h] [rbp-91h] BYREF
  struct IObjectArray **v50; // [rsp+40h] [rbp-89h]
  struct IObjectArray *v51; // [rsp+48h] [rbp-81h] BYREF
  int v52; // [rsp+50h] [rbp-79h] BYREF
  __int64 v53; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v54[2]; // [rsp+60h] [rbp-69h] BYREF
  volatile signed __int32 *v55; // [rsp+70h] [rbp-59h] BYREF
  int v56; // [rsp+78h] [rbp-51h]
  __int64 v57; // [rsp+80h] [rbp-49h]
  struct IObjectArray **v58; // [rsp+88h] [rbp-41h]
  __int64 *v59; // [rsp+90h] [rbp-39h]
  __int64 v60; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v61; // [rsp+A0h] [rbp-29h]
  __int64 v62; // [rsp+A8h] [rbp-21h]
  __int64 v63; // [rsp+B0h] [rbp-19h]
  char *v64; // [rsp+B8h] [rbp-11h]
  __int64 v65; // [rsp+C0h] [rbp-9h]
  __int64 *v66; // [rsp+C8h] [rbp-1h]
  __int64 v67; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]
  volatile signed __int32 *v69; // [rsp+130h] [rbp+67h] BYREF
  struct IObjectArray *v70; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v71; // [rsp+140h] [rbp+77h] BYREF
  __int64 v72; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v70 = 0LL;
  AgileRegistrationList::GetCallbackArray((ApplicationViewManagerVisibilityDebouncer *)((char *)this + 120), &v70);
  while ( 1 )
  {
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_25;
    TickCount64 = GetTickCount64();
    v4 = (__int64 *)*((_QWORD *)this + 9);
    v5 = *v4;
    v60 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *((_DWORD *)v4 + 2);
    LODWORD(v69) = v6;
    v61 = v6;
    v7 = v4[2];
    v62 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = v4[3];
    v63 = v8;
    if ( v6 == 1 )
      break;
LABEL_61:
    v26 = v70;
    v51 = v70;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v51);
    v52 = 0;
    v27 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v26->lpVtbl->GetCount)(v26, &v52);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v27);
    v28 = 0LL;
    v48 = 0;
    v49 = 0LL;
    v29 = &v51;
    v50 = &v51;
    if ( v52 )
    {
      while ( 1 )
      {
        v42 = *v29;
        GetAt = (*v29)->lpVtbl->GetAt;
        v44 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
          v28 = v48;
        }
        v45 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, __int64 *))GetAt)(
                v42,
                v28,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v49);
        if ( v45 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v45);
        v28 = v48 + 1;
        v48 = v28;
        v29 = v50;
        if ( (unsigned int)v28 >= *((_DWORD *)v50 + 2) )
          goto LABEL_64;
      }
      v29 = v50;
      LODWORD(v28) = v48;
    }
LABEL_64:
    v56 = v52;
    v57 = 0LL;
    v58 = &v51;
LABEL_65:
    while ( (_DWORD)v28 != v56 || v29 != v58 )
    {
      v30 = v49;
      v67 = v49;
      if ( v49 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v30 + 24LL))(v30, v5, v6, v7);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v28 = ++v48;
      v31 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        v28 = v48;
      }
      while ( 1 )
      {
        v29 = v50;
        if ( (unsigned int)v28 >= *((_DWORD *)v50 + 2) )
          break;
        v32 = *v50;
        v33 = (*v50)->lpVtbl->GetAt;
        v34 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          v28 = v48;
        }
        v35 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, __int64 *))v33)(
                v32,
                v28,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v49);
        if ( v35 >= 0 )
        {
          v29 = v50;
          LODWORD(v28) = v48;
          goto LABEL_65;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v35);
        v28 = ++v48;
      }
    }
    v36 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = (__int64)v51;
    if ( v51 )
    {
      v51 = 0LL;
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
  if ( TickCount64 >= v8 + 50 )
  {
    v64 = (char *)this + 184;
    AcquireSRWLockExclusive((PSRWLOCK)this + 23);
    v65 = 0LL;
    v19 = 0LL;
    while ( v2 < *((_QWORD *)this + 25) )
    {
      v72 = 0LL;
      v66 = &v72;
      v20 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v2);
      v71 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v20 = v71;
      }
      v59 = &v71;
      if ( v20 && v5 )
      {
        if ( v20 == v5 )
        {
          v22 = 0;
        }
        else
        {
          v54[0] = 0LL;
          v53 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD *))v20)(
                 v20,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 v54) < 0 )
            goto LABEL_44;
          v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
                  v5,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  &v53);
          if ( v21 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v54[0] + 16LL))(v54[0]);
          if ( v21 >= 0 && v54[0] == v53 )
            v22 = 0;
          else
LABEL_44:
            v22 = 1;
          v20 = v71;
        }
      }
      else
      {
        v22 = 1;
      }
      if ( v20 )
      {
        v71 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v23 = v72;
      if ( v72 )
      {
        v72 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( !v22 )
      {
        v19 = v2;
        v2 = 0LL;
        v24 = 0;
        goto LABEL_52;
      }
      ++v2;
    }
    v24 = -2147319765;
    v2 = 0LL;
LABEL_52:
    if ( v24 >= 0 && v19 != -1LL && v19 < *((_QWORD *)this + 25) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)this + 24) + 8 * v19));
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
    v6 = (unsigned int)v69;
    goto LABEL_61;
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
    v16 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v16->lpVtbl->Release)(v16);
    }
    return 0LL;
  }
  v69 = (volatile signed __int32 *)this;
  for ( i = this == 0LL; !i; i = v18 == _InterlockedCompareExchange((volatile signed __int32 *)this + 17, v18 + 1, v18) )
  {
    v18 = *((_DWORD *)this + 17);
    if ( v18 == 0x7FFFFFFF )
      break;
  }
  v54[1] = this;
  v55 = (volatile signed __int32 *)this;
  do
    v46 = *((_DWORD *)this + 17);
  while ( v46 != 0x7FFFFFFF && v46 != _InterlockedCompareExchange((volatile signed __int32 *)this + 17, v46 + 1, v46) );
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
    v13[2] = this;
    v13[3] = 0LL;
    if ( v13 + 3 != &v55 )
    {
      v13[3] = this;
      v55 = 0LL;
    }
    *v13 = &off_1806E2560;
  }
  else
  {
    v13 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v15 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v55);
  if ( v15 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(this);
    v7 = v62;
    v5 = v60;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v69);
  ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v60);
  v47 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v47->lpVtbl->Release)(v47);
  }
  return (unsigned int)v15;
}
