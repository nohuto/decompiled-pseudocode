/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180087A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180087D18 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32Applicat.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180087DD0 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180087E6C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180089110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C531C (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  unsigned int v6; // ebp
  CWin32ApplicationView *v7; // rbx
  CWin32ApplicationView *v8; // rax
  CWin32ApplicationView *v9; // rsi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // r14d
  char *Ptr; // rdx
  CWin32ApplicationView *v14; // rcx
  int *v15; // rdx
  int v17[2]; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CWin32ApplicationView *v20; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  v20 = 0LL;
  v8 = (CWin32ApplicationView *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>(v8);
    *(_QWORD *)v9 = &CWin32ApplicationView::`vftable'{for `IApplicationView'};
    *((_QWORD *)v9 + 1) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v9 + 2) = &CWin32ApplicationView::`vftable'{for `IApplicationViewBase'};
    *((_QWORD *)v9 + 3) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v9 + 18) = &CWin32ApplicationView::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v9 + 19) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v9 + 20) = &CWin32ApplicationView::`vftable'{for `IAppSizeConstraintsCallback'};
    *((_QWORD *)v9 + 21) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v9 + 27) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IClassicWindowExternal *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v9 + 28) = 0LL;
    *((_QWORD *)v9 + 29) = 0LL;
    *((_QWORD *)v9 + 30) = 0LL;
    *((_QWORD *)v9 + 31) = 0LL;
    *((_QWORD *)v9 + 32) = 0LL;
    *((_QWORD *)v9 + 33) = 0LL;
    v7 = v9;
    v20 = v9;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x203,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
    return v6;
  }
  v10 = CWin32ApplicationView::RuntimeClassInitialize(v7);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x204,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v9);
    return v11;
  }
  else
  {
    v18 = this + 49;
    AcquireSRWLockExclusive(this + 49);
    *(_QWORD *)v17 = v9;
    (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v9 + 8LL))(v9);
    v12 = 0;
    Ptr = (char *)this[51].Ptr;
    if ( Ptr == this[53].Ptr )
      v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
              &this[50],
              Ptr + 1);
    v14 = v9;
    if ( v12 >= 0 )
    {
      v15 = (int *)((char *)this[50].Ptr + 8 * (__int64)this[51].Ptr++);
      v14 = v9;
      if ( v15 )
      {
        *(_QWORD *)v15 = 0LL;
        if ( v15 != v17 )
        {
          *(_QWORD *)v15 = v9;
          v14 = 0LL;
        }
      }
    }
    if ( v14 )
      (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v12 >= 0 )
    {
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (void (__fastcall ***)(_QWORD, GUID *, __int64 **))v9,
        0,
        0LL);
      if ( this != (RTL_SRWLOCK *)-392LL )
        ReleaseSRWLockExclusive(this + 49);
      *a3 = v7;
      return v6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
    Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v20);
    return (unsigned int)v12;
  }
}
