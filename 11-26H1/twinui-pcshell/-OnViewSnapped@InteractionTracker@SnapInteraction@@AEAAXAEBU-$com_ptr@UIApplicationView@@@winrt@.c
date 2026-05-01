/*
 * XREFs of ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805AA5E4
 * Callers:
 *     ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805AA920 (-WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$make_shared@VInteractionRecord@SnapInteraction@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@std@@YA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@0@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18003463C (--$make_shared@VInteractionRecord@SnapInteraction@@AEBU-$com_ptr@UIApplicationView@@@winrt@@@std.c)
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180034D90 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180186CA0 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801C9F14 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FC454 (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 *     ??$insert_or_assign@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x1801FDB54 (--$insert_or_assign@AEAV-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@-$map@U-$com_ptr.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapInteraction::InteractionTracker::OnViewSnapped(RTL_SRWLOCK *a1, unsigned __int64 *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  SnapInteraction::InteractionRecord *v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v11, a1 + 13);
  SnapInteraction::InteractionTracker::FindRecord((__int64)a1, &v7, a2);
  v4 = (RTL_SRWLOCK *)v7;
  if ( !v7 )
  {
    v5 = std::make_shared<SnapInteraction::InteractionRecord,winrt::com_ptr<IApplicationView> const &>(&v9, a2);
    std::shared_ptr<KBViewInfo>::operator=(&v7, v5);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    std::map<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>>::insert_or_assign<std::shared_ptr<SnapInteraction::InteractionRecord> &>(
      &a1[11].Ptr,
      (__int64)&v9,
      a2,
      (__int64)&v7);
    v4 = (RTL_SRWLOCK *)v7;
  }
  SnapInteraction::InteractionRecord::IsSnapped(v4, 1);
  if ( SnapInteraction::InteractionRecord::HasInteraction(v4) )
    SnapInteraction::InteractionTracker::EnsureUpdateTimer((__int64)a1, v6);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
}
