/*
 * XREFs of ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x18059894C
 * Callers:
 *     ?OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@3456@@Z @ 0x180238020 (-OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManag.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x180583730 (-QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA?AV?$shared_ptr@VGuidedSnapAssistControl@@@2@XZ @ 0x180082D58 (-shared_from_this@-$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA-AV-$shared_ptr@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___ @ 0x180598488 (MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall GuidedSnapAssistControl::CancelIfActive(RTL_SRWLOCK *this)
{
  int v2; // eax
  char v3; // bl
  int MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103; // eax
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-18h]
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v11; // [rsp+50h] [rbp+10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v12, this + 5);
  LODWORD(v11) = 0;
  v2 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)this[3].Ptr + 24LL))(this[3].Ptr, 4LL, &v11);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)v2,
      v6);
  if ( (v11 & 4) == 0 || LOBYTE(this[6].Ptr) )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    LOBYTE(this[6].Ptr) = 1;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  if ( v3 )
  {
    std::enable_shared_from_this<GuidedSnapAssistControl>::shared_from_this((__int64)this, &v8);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v6, &v8);
    v11 = 0LL;
    MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103 = MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_(
                                                                              &v11,
                                                                              &v6);
    if ( MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE2,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103,
        v6);
    v5 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)this[2].Ptr + 24LL))(this[2].Ptr, v11, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE3,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)v5,
        v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
}
