/*
 * XREFs of ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805E6C9C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x1805DFCEC (--$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z.c)
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAAEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@$$QEAU21@@Z @ 0x1805E19B8 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@5@@Z @ 0x1805E5A54 (-ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV-$deque@U-$pair@V-$s.c)
 *     ?pop_back@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAXXZ @ 0x1805ECE8C (-pop_back@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall PinHistory::HandlePinRequested(__int64 a1, _QWORD **a2)
{
  __int64 *v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  void ***v7; // rdx
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-49h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-41h]
  __int128 v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h]
  void **v13; // [rsp+60h] [rbp-19h] BYREF
  __int128 v14; // [rsp+68h] [rbp-11h]
  void ***v15; // [rsp+98h] [rbp+1Fh]
  _QWORD **v16; // [rsp+A0h] [rbp+27h] BYREF
  int v17; // [rsp+A8h] [rbp+2Fh] BYREF
  RTL_SRWLOCK *v18; // [rsp+B0h] [rbp+37h] BYREF

  v16 = a2;
  v18 = 0LL;
  wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)a1);
  std::chrono::steady_clock::now(&v9);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v11, a2);
  v12 = *v4;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
    (_QWORD *)(a1 + 64),
    &v11);
  if ( *((_QWORD *)&v11 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v11 + 1));
  if ( *(_QWORD *)(a1 + 96) > *(_QWORD *)(a1 + 144) )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::pop_back(a1 + 64);
  v17 = 0;
  v5 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(&v9, (__int64)&v17, a1);
  v15 = 0LL;
  v13 = &std::_Func_impl_no_alloc<_lambda_d1465830bf7ff245d54538fb3dd3c5c6_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable';
  v14 = *(_OWORD *)v5;
  v15 = &v13;
  PinHistory::ForEachOperationInTimeWindow(
    (__int64)&std::_Func_impl_no_alloc<_lambda_d1465830bf7ff245d54538fb3dd3c5c6_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable',
    v6,
    a1 + 64,
    *(_QWORD *)(a1 + 160),
    (__int64)&v13);
  if ( v15 )
  {
    v7 = &v13;
    LOBYTE(v7) = v15 != &v13;
    ((void (__fastcall *)(void ***, void ***))(*v15)[4])(v15, v7);
  }
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v9, *a2);
  v16 = *(_QWORD ***)PinRequestContext::RequestorBestAvailableAppId(v9, &v11);
  PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>(&v16);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
