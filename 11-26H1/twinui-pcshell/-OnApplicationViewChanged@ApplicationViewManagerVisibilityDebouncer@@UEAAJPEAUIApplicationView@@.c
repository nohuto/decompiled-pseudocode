/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180046590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x180034A7C (--1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18004687C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18015687C (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x1801611D4 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  int v5; // edi
  RTL_SRWLOCK *v8; // rbx
  RTL_SRWLOCK *v9; // r14
  ULONGLONG TickCount64; // r12
  int v11; // edi
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v15; // rdx
  char *Ptr; // rdi
  char v17; // di
  char *v18; // r12
  __int64 v19; // rdi
  char v20; // r12
  char *v21; // rdi
  struct IUnknown *v22; // [rsp+20h] [rbp-79h] BYREF
  int v23; // [rsp+28h] [rbp-71h]
  __int64 v24[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v25; // [rsp+40h] [rbp-59h] BYREF
  int v26; // [rsp+48h] [rbp-51h]
  __int64 v27[2]; // [rsp+50h] [rbp-49h] BYREF
  char *v28; // [rsp+60h] [rbp-39h]
  __int64 *v29; // [rsp+68h] [rbp-31h]
  struct IUnknown **v30; // [rsp+70h] [rbp-29h]
  __int64 v31; // [rsp+78h] [rbp-21h]
  __int64 v32; // [rsp+80h] [rbp-19h]
  __int64 v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+90h] [rbp-9h]
  struct IUnknown *v35; // [rsp+98h] [rbp-1h] BYREF
  int v36; // [rsp+A0h] [rbp+7h]
  int v37; // [rsp+A4h] [rbp+Bh]
  _QWORD v38[9]; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 i; // [rsp+100h] [rbp+67h]

  v5 = a3;
  v8 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v38[2] = v8;
  v9 = a1 + 8;
  if ( !v5 )
  {
    v19 = 0LL;
    v34 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v28 = 0LL;
    v18 = 0LL;
    for ( i = 0LL; ; i += 32LL )
    {
      if ( v18 >= a1[9].Ptr )
      {
        v20 = 0;
        v21 = v28;
        goto LABEL_34;
      }
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
      v26 = v32;
      v27[0] = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
      v27[1] = v19;
      v29 = &v25;
      Ptr = (char *)v9->Ptr;
      v22 = *(struct IUnknown **)((char *)v9->Ptr + i);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v23 = *(_DWORD *)&Ptr[i + 8];
      v24[0] = *(_QWORD *)&Ptr[i + 16];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
      v24[1] = *(_QWORD *)&Ptr[i + 24];
      v30 = &v22;
      if ( v23 != 1 )
        goto LABEL_30;
      if ( (unsigned int)SHIsSameObject(v22, a2) )
        v17 = 1;
      else
LABEL_30:
        v17 = 0;
      ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v22);
      ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v25);
      if ( v17 )
        break;
      ++v18;
      v19 = v34;
    }
    v21 = v18;
    v20 = 1;
LABEL_34:
    if ( v20 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        &a1[8],
        v21);
      if ( !v21 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a1[21]);
      goto LABEL_18;
    }
    v5 = a3;
  }
  v35 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  v36 = v5;
  v37 = 0;
  v38[0] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v38[1] = TickCount64;
  v11 = 0;
  v12 = (char *)a1[9].Ptr;
  if ( v12 != a1[11].Ptr
    || (v11 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                &a1[8],
                v12 + 1),
        v11 >= 0) )
  {
    v13 = (__int64)v9->Ptr + 32 * (__int64)++a1[9].Ptr - 32;
    if ( v13 )
    {
      *(_QWORD *)v13 = 0LL;
      if ( (struct IUnknown **)v13 != &v35 )
      {
        *(_QWORD *)v13 = a2;
        a2 = 0LL;
      }
      *(_DWORD *)(v13 + 8) = a3;
      *(_QWORD *)(v13 + 16) = 0LL;
      if ( (_QWORD *)(v13 + 16) != v38 )
      {
        *(_QWORD *)(v13 + 16) = a4;
        a4 = 0LL;
      }
      *(_QWORD *)(v13 + 24) = TickCount64;
    }
  }
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->Release)(a2);
  if ( v11 < 0 )
  {
    v15 = 239LL;
    goto LABEL_23;
  }
LABEL_18:
  v11 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)&a1[-1]);
  if ( v11 >= 0 )
    goto LABEL_19;
  v15 = 241LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v11);
LABEL_19:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v11;
}
