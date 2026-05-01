/*
 * XREFs of ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029410C
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18022B940 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180293FA0 (-StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A8550 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800E2890 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?pop_back@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXXZ @ 0x1802655BC (-pop_back@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F904 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18027FB80 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??$_Emplace_back_internal@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEAUCRect@Geometry@@@Z @ 0x1805A5BF8 (--$_Emplace_back_internal@AEAUCRect@Geometry@@@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805A9AE4 (-start@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
        RTL_SRWLOCK *a1,
        __int128 *a2,
        __int128 *a3)
{
  char *Ptr; // r10
  char *v7; // r9
  __int128 v8; // xmm0
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // edi
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v15; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  CSnapAssistControllerBase::EndGuidedSnapAssist((__int64)a1, 0, (__int64)&v12);
  AcquireSRWLockExclusive(a1 + 21);
  v15 = a1 + 21;
  Ptr = (char *)a1[25].Ptr;
  *(_QWORD *)&v12 = a1 + 22;
  v7 = &Ptr[(unsigned __int64)a1[26].Ptr];
  while ( 1 )
  {
    *((_QWORD *)&v12 + 1) = Ptr;
    if ( Ptr == v7 )
    {
      while ( a2 != a3 )
        std::deque<tagRECT>::_Emplace_back_internal<Geometry::CRect &>(&a1[22], a2++);
      goto LABEL_10;
    }
    if ( a2 == a3 )
      break;
    v8 = *a2;
    *(_OWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v12) = v8;
    Ptr = (char *)(v9 + 1);
    ++a2;
  }
  if ( v7 != Ptr )
  {
    do
      std::deque<tagRECT>::pop_back((__int64)&a1[22]);
    while ( v10 != 1 );
  }
LABEL_10:
  v11 = (int)a1[26].Ptr;
  if ( v11 )
  {
    tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::start(
      &a1[30],
      &v12);
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                             (__int64)&a1[30],
                             (__int64)&v14)
              + 272LL) = v11;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v14);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
  }
  else if ( a1 != (RTL_SRWLOCK *)-168LL )
  {
    ReleaseSRWLockExclusive(a1 + 21);
  }
}
