/*
 * XREFs of ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805C2D50
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805C5200 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18005A3E4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18028F0B0 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x1805BC450 (--$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@QEAU21@$$QEAU21@@Z @ 0x1805BD3E4 (--$_Emplace_reallocate@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_clo.c)
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@@Z @ 0x1805BDEB0 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@5@@Z @ 0x1805C1930 (-ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV-$deque@U-$pair@V-$s.c)
 *     ?pop_back@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAXXZ @ 0x1805C9178 (-pop_back@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall PinHistory::HandlePinRejected(__int64 a1, std::_Ref_count_base *a2)
{
  std::_Ref_count_base **v4; // r8
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  void ***v7; // rdx
  std::_Ref_count_base *v8; // r8
  std::_Ref_count_base *v9; // rax
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base **v11; // rdx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v15; // [rsp+40h] [rbp-49h]
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-41h] BYREF
  std::_Ref_count_base *v17; // [rsp+50h] [rbp-39h]
  std::_Ref_count_base *v18; // [rsp+58h] [rbp-31h]
  __int128 v19; // [rsp+60h] [rbp-29h] BYREF
  void **v20; // [rsp+70h] [rbp-19h] BYREF
  __int128 v21; // [rsp+78h] [rbp-11h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  void ***v23; // [rsp+A8h] [rbp+1Fh]
  std::_Ref_count_base *v24; // [rsp+B0h] [rbp+27h] BYREF
  int v25; // [rsp+B8h] [rbp+2Fh] BYREF
  RTL_SRWLOCK *v26; // [rsp+C0h] [rbp+37h] BYREF

  v24 = a2;
  v26 = 0LL;
  wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)a1);
  std::chrono::steady_clock::now((__int64 *)&v19);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v16, a2);
  v18 = *v4;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
    (_QWORD *)(a1 + 104),
    &v16);
  v6 = v17;
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( *(_QWORD *)(a1 + 136) > *(_QWORD *)(a1 + 152) )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::pop_back(a1 + 104);
  v25 = 0;
  v14[0] = a2;
  v14[1] = (std::_Ref_count_base *)&v25;
  v15 = a1;
  v20 = &std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable';
  v21 = *(_OWORD *)v14;
  v22 = a1;
  v23 = &v20;
  PinHistory::ForEachOperationInTimeWindow((__int64)v6, v5, (_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 184), (__int64)&v20);
  if ( v23 )
  {
    v7 = &v20;
    LOBYTE(v7) = v23 != &v20;
    ((void (__fastcall *)(void ***, void ***))(*v23)[4])(v23, v7);
  }
  if ( v25 >= *(_DWORD *)(a1 + 192) )
  {
    std::chrono::steady_clock::now((__int64 *)&v19);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v14, *(_QWORD **)a2);
    v9 = v14[0];
    v16 = v14[0];
    v10 = v14[1];
    v17 = v14[1];
    v14[0] = 0LL;
    v14[1] = 0LL;
    v18 = v8;
    v11 = *(std::_Ref_count_base ***)(a1 + 24);
    if ( v11 == *(std::_Ref_count_base ***)(a1 + 32) )
    {
      std::vector<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Emplace_reallocate<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
        (__int64 *)(a1 + 16),
        (__int64)v11,
        &v16);
      v12 = v17;
    }
    else
    {
      *v11 = v9;
      v11[1] = v10;
      v12 = 0LL;
      v11[2] = v8;
      *(_QWORD *)(a1 + 24) += 24LL;
    }
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v14, *(_QWORD **)a2);
  v24 = *(std::_Ref_count_base **)PinRequestContext::RequestorBestAvailableAppId((__int64)v14[0], &v19);
  PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>(&v24);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
  v13 = (std::_Ref_count_base *)*((_QWORD *)a2 + 1);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
