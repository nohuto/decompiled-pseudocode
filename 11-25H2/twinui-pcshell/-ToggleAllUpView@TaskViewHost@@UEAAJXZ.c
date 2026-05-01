/*
 * XREFs of ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x180680A80
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D4D10 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180107F40 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180108940 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States@@@details@wil@@QEAA_NXZ @ 0x180680F78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_St.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::ToggleAllUpView(TaskViewHost *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  enum _TABLETMODESTATE *v6; // rdx
  TabletModeHelpers *v7; // rcx
  char IsTabletMode; // al
  signed __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h]
  _BYTE v12[88]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v10 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v10, 1);
  v2 = *((_DWORD *)this + 186);
  if ( !v2 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (TaskViewHost *)((char *)this + 360),
      (wil::ActivityThreadWatcher *)v12);
    IsTabletMode = TabletModeHelpers::IsTabletMode(v7, v6);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (TaskViewHost *)((char *)this + 360),
      (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3,
      IsTabletMode,
      0);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v12);
LABEL_11:
    v3 = (*(__int64 (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 64LL))(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 354LL;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  if ( v2 == 1 )
    goto LABEL_11;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::GetImpl'::`2'::impl)
    || *((_DWORD *)this + 186) != 2
    || (v3 = (*(__int64 (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 40LL))(this), v4 = v3, v3 >= 0) )
  {
    v3 = (*(__int64 (__fastcall **)(TaskViewHost *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(
           this,
           *((_QWORD *)this + 29),
           *((_QWORD *)this + 30),
           *((unsigned int *)this + 70));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 365LL;
      goto LABEL_7;
    }
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
  v5 = 362LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
    (const char *)(unsigned int)v3);
LABEL_14:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v10);
  return v4;
}
