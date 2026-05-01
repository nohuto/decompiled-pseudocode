/*
 * XREFs of ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18059E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180079D94 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace@AEAHAEAURect@Foundation@Windows@@@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAHAEAURect@Foundation@Windows@@@Z @ 0x18059BE70 (--$emplace@AEAHAEAURect@Foundation@Windows@@@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@.c)
 *     ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059DB4C (--1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x1805A1D58 (-StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?Stop@CreateSnapId@CSnapComponentTelemetry@@QEAAXH@Z @ 0x1805A237C (-Stop@CreateSnapId@CSnapComponentTelemetry@@QEAAXH@Z.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A37B0 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CShellSnapComponent::CreateSnapId(__int64 a1, __int64 a2, _DWORD *a3)
{
  float v6; // xmm1_4
  float v7; // xmm0_4
  HMONITOR v8; // r12
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, HMONITOR, int *); // rbx
  int v11; // eax
  int v12; // ecx
  int v14[2]; // [rsp+20h] [rbp-1C8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-1C0h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-1B8h] BYREF
  RECT rc; // [rsp+40h] [rbp-1A8h] BYREF
  volatile signed __int32 *v18[42]; // [rsp+50h] [rbp-198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  *a3 = -1;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"CreateSnapId");
  v18[0] = (volatile signed __int32 *)&CSnapComponentTelemetry::CreateSnapId::`vftable';
  CSnapComponentTelemetry::CreateSnapId::StartActivity(
    (CSnapComponentTelemetry::CreateSnapId *)v18,
    (const struct Windows::Foundation::Rect *)a2);
  v6 = *(float *)(a2 + 4);
  v7 = *(float *)a2;
  rc.left = (int)*(float *)a2;
  rc.top = (int)v6;
  rc.right = (int)(float)(v7 + *(float *)(a2 + 8));
  rc.bottom = (int)(float)(v6 + *(float *)(a2 + 12));
  v8 = MonitorFromRect(&rc, 0);
  if ( !v8 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x383,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)0x80070057LL,
      v14[0]);
  *(_QWORD *)v14 = 0LL;
  v9 = *(_QWORD *)(a1 + 88);
  v10 = *(__int64 (__fastcall **)(__int64, HMONITOR, int *))(*(_QWORD *)v9 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v14);
  v11 = v10(v9, v8, v14);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x386,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v11,
      v14[0]);
  if ( !(unsigned int)SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)&rc, *(SnapRectHelpers **)v14) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x389,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)0x80070057LL,
      v14[0]);
  wil::AcquireSRWLockExclusive(&v15, (RTL_SRWLOCK *)(a1 + 1400));
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::emplace<int &,Windows::Foundation::Rect &>(
    (float *)(a1 + 1416),
    (__int64)v16,
    (unsigned __int8 *)(a1 + 1408),
    (_OWORD *)a2);
  CShellSnapComponent::UpdateLaunchSnappedBehavior(a1 - 128);
  v12 = *(_DWORD *)(a1 + 1408);
  *(_DWORD *)(a1 + 1408) = v12 + 1;
  *a3 = v12;
  CSnapComponentTelemetry::CreateSnapId::Stop((CSnapComponentTelemetry::CreateSnapId *)v18, *(_DWORD *)(a1 + 1408));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v14);
  CSnapComponentTelemetry::CreateSnapId::~CreateSnapId(v18);
  return 0LL;
}
