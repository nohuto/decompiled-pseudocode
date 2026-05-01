/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003A580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18003A874 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x180134254 (--1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x180169F1C (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x1801703F4 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  int v5; // r13d
  __int64 *v7; // rsi
  RTL_SRWLOCK *v8; // r15
  ULONGLONG TickCount64; // r12
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v16; // rdx
  __int64 v17; // rbx
  char v18; // bl
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  char v21; // r12
  unsigned __int64 v22; // rbx
  bool v23; // zf
  __int64 v24; // [rsp+28h] [rbp-89h]
  struct IUnknown *v25; // [rsp+30h] [rbp-81h] BYREF
  int v26; // [rsp+38h] [rbp-79h]
  __int64 v27[2]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v28; // [rsp+50h] [rbp-61h] BYREF
  int v29; // [rsp+58h] [rbp-59h]
  __int64 v30[2]; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-41h]
  __int64 *v32; // [rsp+78h] [rbp-39h]
  struct IUnknown **v33; // [rsp+80h] [rbp-31h]
  __int64 v34; // [rsp+88h] [rbp-29h]
  __int64 v35; // [rsp+90h] [rbp-21h]
  __int64 v36; // [rsp+98h] [rbp-19h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  struct IUnknown *v38; // [rsp+A8h] [rbp-9h] BYREF
  int v39; // [rsp+B0h] [rbp-1h]
  int v40; // [rsp+B4h] [rbp+3h]
  _QWORD v41[10]; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v5 = a3;
  v7 = (__int64 *)(a1 + 64);
  v8 = (RTL_SRWLOCK *)(a1 + 104);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 104));
  v41[2] = v8;
  if ( !v5 )
  {
    v20 = 0LL;
    v37 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v31 = 0LL;
    v19 = 0LL;
    v24 = 0LL;
    v21 = 1;
    while ( 1 )
    {
      if ( v19 >= v7[1] )
      {
        v21 = 0;
        v22 = v31;
        goto LABEL_35;
      }
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
      v29 = v35;
      v30[0] = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v30);
      v30[1] = v20;
      v32 = &v28;
      v17 = *v7;
      v25 = *(struct IUnknown **)(v24 + *v7);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
      v26 = *(_DWORD *)(v24 + v17 + 8);
      v27[0] = *(_QWORD *)(v24 + v17 + 16);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
      v27[1] = *(_QWORD *)(v24 + v17 + 24);
      v33 = &v25;
      if ( v26 != 1 )
        goto LABEL_31;
      if ( (unsigned int)SHIsSameObject(v25, a2) )
        v18 = 1;
      else
LABEL_31:
        v18 = 0;
      ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v25);
      ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v28);
      if ( v18 )
        break;
      ++v19;
      v24 += 32LL;
      v20 = v37;
    }
    v22 = v19;
LABEL_35:
    if ( v21 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        v7,
        v22);
      v23 = v22 == 0;
      v14 = a1;
      if ( v23 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 168));
      goto LABEL_19;
    }
    v5 = a3;
  }
  v38 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  v39 = v5;
  v40 = 0;
  v41[0] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v41[1] = TickCount64;
  v10 = 0;
  v11 = v7[1];
  if ( v11 != v7[3]
    || (v10 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                v7,
                v11 + 1),
        v10 >= 0) )
  {
    v12 = v7[1];
    v7[1] = v12 + 1;
    v13 = *v7 + 32 * v12;
    if ( v13 )
    {
      *(_QWORD *)v13 = 0LL;
      if ( (struct IUnknown **)v13 != &v38 )
      {
        *(_QWORD *)v13 = a2;
        a2 = 0LL;
      }
      *(_DWORD *)(v13 + 8) = v5;
      *(_QWORD *)(v13 + 16) = 0LL;
      if ( (_QWORD *)(v13 + 16) != v41 )
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
  if ( v10 < 0 )
  {
    v16 = 239LL;
    goto LABEL_24;
  }
  v14 = a1;
LABEL_19:
  v10 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)(v14 - 8));
  if ( v10 >= 0 )
    goto LABEL_20;
  v16 = 241LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v10);
LABEL_20:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v10;
}
