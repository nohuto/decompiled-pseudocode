/*
 * XREFs of ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1806A65F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?GetFrameForMonitor@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@@Z @ 0x1806A6490 (-GetFrameForMonitor@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@.c)
 *     ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x1806A650C (-GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_except.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CrossMonitorFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806A7118 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CrossMonitorFix@@@details@wil@@QEAAX_NW4R.c)
 *     ?TryGetActiveFrame@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1806A7C2C (-TryGetActiveFrame@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall TaskViewHost::HandleCrossMonitorTabbing(TaskViewHost *this, HWND a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 *ActiveFrame; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  signed __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+38h] [rbp-8h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  LODWORD(v12) = 0;
  v4 = (_QWORD *)((char *)this - 120);
  v10 = ((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v10, 1);
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CrossMonitorFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CrossMonitorFix>::GetImpl'::`2'::impl,
    v5);
  ActiveFrame = (__int64 *)TaskViewHost::TryGetActiveFrame(v4, &v12);
  v7 = *ActiveFrame;
  *ActiveFrame = 0LL;
  v9 = v7;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, &v8);
    TaskViewHost::GetImmersiveMonitorForNavigate(v4, &v13, v8, a3);
    TaskViewHost::GetFrameForMonitor((__int64)v4, &v12, v13);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 120LL))(v12, a3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v10);
}
