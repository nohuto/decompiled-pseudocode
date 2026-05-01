/*
 * XREFs of ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040A4F0
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180107440 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1803E77A8 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040A360 (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040AF88 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x18040BA3C (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x18040BEE0 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x18040CE48 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::AddedApplicationView(PeoplePaneViewManager *this, RTL_SRWLOCK *a2)
{
  char v4; // r14
  std::_Ref_count_base *v5; // rbx
  __int64 v6; // r9
  std::_Ref_count_base *v7; // r15
  int v8; // eax
  int TabletModePositioner; // eax
  int v10; // ebx
  struct ITabletModePositioner *v12; // rbx
  __int64 (__fastcall *v13)(struct ITabletModePositioner *, RTL_SRWLOCK **); // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  __int64 v17; // rdx
  RTL_SRWLOCK **v18; // rcx
  struct IApplicationView **i; // rax
  _QWORD *v20; // rcx
  RTL_SRWLOCK *v21; // [rsp+30h] [rbp-20h] BYREF
  int v22[2]; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  RTL_SRWLOCK *v25; // [rsp+90h] [rbp+40h] BYREF
  struct ITabletModePositioner *v26; // [rsp+98h] [rbp+48h] BYREF

  *(_OWORD *)v23 = 0LL;
  v4 = 1;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, v23) < 0
    || (v5 = v23[0], *((_BYTE *)v23[0] + 56) != 1) )
  {
    wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)this + 20);
    for ( i = (struct IApplicationView **)*((_QWORD *)this + 21); i != *((struct IApplicationView ***)this + 22); ++i )
    {
      if ( *i == (struct IApplicationView *)a2 )
        goto LABEL_37;
    }
    v4 = 0;
LABEL_37:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    if ( v4 )
      goto LABEL_43;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v26, (RTL_SRWLOCK *)this + 20);
    v25 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v20 = (_QWORD *)*((_QWORD *)this + 22);
    if ( v20 == *((_QWORD **)this + 23) )
    {
      std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        (_QWORD *)this + 21,
        *((_QWORD *)this + 22),
        &v25);
    }
    else
    {
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v20, &v25);
      *((_QWORD *)this + 22) += 8LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    v18 = (RTL_SRWLOCK **)&v26;
LABEL_42:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v18);
LABEL_43:
    if ( v23[1] )
      std::_Ref_count_base::_Decref(v23[1]);
    return 0LL;
  }
  wil::AcquireSRWLockExclusive(&v21, (RTL_SRWLOCK *)this + 16);
  v6 = *((unsigned int *)v5 + 10);
  v7 = v5;
  if ( *((_QWORD *)v5 + 3) > 7uLL )
    v5 = *(std::_Ref_count_base **)v5;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v5, v6);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v7 + 4, (__int64)a2);
  if ( !*((_DWORD *)this + 52) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 4) + 56LL))(*((_QWORD *)v7 + 4));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x24D,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
    goto LABEL_27;
  }
  v26 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, &v26);
  v10 = TabletModePositioner;
  if ( TabletModePositioner >= 0 )
  {
    v25 = 0LL;
    v12 = v26;
    v13 = *(__int64 (__fastcall **)(struct ITabletModePositioner *, RTL_SRWLOCK **))(*(_QWORD *)v26 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v10 = v13(v12, &v25);
    if ( v10 < 0 )
    {
      v14 = 597LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_16:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      goto LABEL_10;
    }
    if ( (*((unsigned int (__fastcall **)(RTL_SRWLOCK *, __int64))v25->Ptr + 10))(v25, 1LL) == 2
      && !(*((unsigned int (__fastcall **)(RTL_SRWLOCK *))v25->Ptr + 11))(v25)
      && IsPlaceModeEnabled() )
    {
      *(_QWORD *)v22 = 0LL;
      v15 = *((_QWORD *)this + 24);
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v15 + 72LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
      v10 = v16(v15, 0LL, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3, v22);
      if ( v10 < 0 )
      {
        v17 = 604LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
        goto LABEL_16;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, RTL_SRWLOCK *, RTL_SRWLOCK *, _QWORD))(**(_QWORD **)v22 + 56LL))(
              *(_QWORD *)v22,
              a2,
              v25,
              0LL);
      if ( v10 < 0 )
      {
        v17 = 605LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
    }
    else
    {
      v10 = PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(this, *((struct IApplicationView **)v7 + 4));
      if ( v10 < 0 )
      {
        v14 = 609LL;
        goto LABEL_15;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 4) + 56LL))(*((_QWORD *)v7 + 4));
      if ( v10 < 0 )
      {
        v14 = 610LL;
        goto LABEL_15;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
LABEL_27:
    v18 = &v21;
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x252,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)TabletModePositioner);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v21);
  if ( v23[1] )
    std::_Ref_count_base::_Decref(v23[1]);
  return (unsigned int)v10;
}
