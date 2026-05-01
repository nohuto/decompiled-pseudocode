/*
 * XREFs of ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805E6A90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x1805DFCEC (--$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z.c)
 *     ??$emplace_back@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAAEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@$$QEAU21@@Z @ 0x1805E1958 (--$emplace_back@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_clock@chro.c)
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAAEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@$$QEAU21@@Z @ 0x1805E19B8 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@5@@Z @ 0x1805E5A54 (-ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV-$deque@U-$pair@V-$s.c)
 *     ?pop_back@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAXXZ @ 0x1805ECE8C (-pop_back@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall PinHistory::HandlePinRejected(__int64 a1, _QWORD **a2)
{
  __int64 *v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  void ***v7; // rdx
  __int64 v8; // r8
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-51h]
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-41h]
  __int64 v14; // [rsp+50h] [rbp-39h]
  __int64 v15[3]; // [rsp+58h] [rbp-31h] BYREF
  void **v16; // [rsp+70h] [rbp-19h] BYREF
  __int128 v17; // [rsp+78h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  void ***v19; // [rsp+A8h] [rbp+1Fh]
  _QWORD **v20; // [rsp+B0h] [rbp+27h] BYREF
  int v21; // [rsp+B8h] [rbp+2Fh] BYREF
  RTL_SRWLOCK *v22; // [rsp+C0h] [rbp+37h] BYREF

  v20 = a2;
  v22 = 0LL;
  wil::AcquireSRWLockExclusive(&v22, (RTL_SRWLOCK *)a1);
  std::chrono::steady_clock::now(v15);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v12, a2);
  v14 = *v4;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
    (_QWORD *)(a1 + 104),
    &v12);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( *(_QWORD *)(a1 + 136) > *(_QWORD *)(a1 + 152) )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::pop_back(a1 + 104);
  v21 = 0;
  v5 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
         &v12,
         (__int64)a2,
         (__int64)&v21,
         a1);
  v19 = 0LL;
  v16 = &std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable';
  v17 = *(_OWORD *)v5;
  v18 = v5[2];
  v19 = &v16;
  PinHistory::ForEachOperationInTimeWindow(
    (__int64)&std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable',
    v6,
    a1 + 104,
    *(_QWORD *)(a1 + 184),
    (__int64)&v16);
  if ( v19 )
  {
    v7 = &v16;
    LOBYTE(v7) = v19 != &v16;
    ((void (__fastcall *)(void ***, void ***))(*v19)[4])(v19, v7);
  }
  if ( v21 >= *(_DWORD *)(a1 + 192) )
  {
    std::chrono::steady_clock::now(v15);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v10, *a2);
    v12 = v10;
    v13 = v11;
    v10 = 0LL;
    v11 = 0LL;
    v14 = v8;
    std::vector<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_back<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
      (_QWORD *)(a1 + 16),
      &v12);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v10, *a2);
  v20 = *(_QWORD ***)PinRequestContext::RequestorBestAvailableAppId(v10, v15);
  PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>(&v20);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
