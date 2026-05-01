/*
 * XREFs of ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804741D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180036D58 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ShouldSaveLastFloatingPosition @ 0x1800946A4 (ShouldSaveLastFloatingPosition.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x180155EE8 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1801827D4 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180472EE4 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804752BC (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1804756F8 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDragEnded(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 *a6,
        RTL_SRWLOCK *a7)
{
  struct Windows::Foundation::Rect *v9; // rsi
  RTL_SRWLOCK *v10; // r15
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  HMONITOR CurrentMonitor; // rax
  HMONITOR v14; // rdi
  KeyboardHosting::MonitorInformation *v15; // rcx
  KeyboardHosting::MonitorInformation *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __m128i v20; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v21[4]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v22; // [rsp+88h] [rbp-1h]
  unsigned int v23; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]
  unsigned int v25; // [rsp+E0h] [rbp+57h] BYREF

  v25 = a2;
  v9 = (struct Windows::Foundation::Rect *)a6;
  *(_OWORD *)a6 = *a3;
  *a4 = 0;
  *a5 = 0;
  v10 = a7;
  LODWORD(a7->Ptr) = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&a7, (RTL_SRWLOCK *)(a1 + 536));
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    (_QWORD *)(a1 + 472),
    &a6,
    &v25);
  if ( a6 == *(__int64 **)(a1 + 480) )
  {
LABEL_17:
    LODWORD(a6) = v10->Ptr;
    LODWORD(a5) = *(_DWORD *)(a1 + 272);
    TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned int,unsigned int>(
      &v25,
      v9,
      (struct Windows::Foundation::Rect *)(a1 + 176),
      (struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)&a5,
      (unsigned int *)&a6);
    v18 = 0;
    goto LABEL_18;
  }
  v11 = *(__m128i *)((char *)a6 + 20);
  v21[0] = v11;
  v21[1] = *(_OWORD *)((char *)a6 + 36);
  v21[2] = *(_OWORD *)((char *)a6 + 52);
  v12 = *(__m128i *)((char *)a6 + 68);
  v21[3] = v12;
  v22 = *(__int64 *)((char *)a6 + 84);
  v23 = *((_DWORD *)a6 + 23);
  v20 = *(__m128i *)v9;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v23, &v20);
  v14 = CurrentMonitor;
  v15 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
  if ( *(HMONITOR *)(a1 + 232) != CurrentMonitor )
  {
    *(_QWORD *)v15 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v15);
  }
  if ( *(_BYTE *)(a1 + 596) )
  {
    v16 = (KeyboardHosting::MonitorInformation *)(a1 + 312);
    if ( *(HMONITOR *)(a1 + 312) != v14 )
    {
      *(_QWORD *)v16 = v14;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v16);
    }
  }
  LODWORD(v10->Ptr) = 3;
  if ( !ShouldSaveLastFloatingPosition((__int64)v21 + 4) )
  {
LABEL_12:
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) == 2
      && ((unsigned __int8)_mm_cvtsi128_si32(v12) || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v12, 1))) )
    {
      *(_DWORD *)(a1 + 548) = *(_DWORD *)v9;
      *(_DWORD *)(a1 + 552) = *((_DWORD *)v9 + 1);
      *(_BYTE *)(a1 + 556) = 1;
      *(_DWORD *)(a1 + 592) = a2;
    }
    *(_BYTE *)(a1 + 544) = 1;
    goto LABEL_17;
  }
  a6 = *(__int64 **)v9;
  v17 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::Foundation::Point *)&a6,
          a2);
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 596) )
      KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (const struct Windows::Foundation::Point *)&a6);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D1,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)v17);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&a7);
  return v18;
}
