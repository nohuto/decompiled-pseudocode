/*
 * XREFs of _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x180111044
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c4f66075b064f94c83b6e478b87a895c__void_::_Do_call @ 0x180114590 (std--_Func_impl_no_alloc__lambda_c4f66075b064f94c83b6e478b87a895c__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001B6E0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004665C (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180046EC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180063FF0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x180079670 (--$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsof.c)
 *     ?EnsureStreamStopped@CVADServer@@QEAAJXZ @ 0x1801116E4 (-EnsureStreamStopped@CVADServer@@QEAAJXZ.c)
 *     ?RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ @ 0x180113230 (-RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_c4f66075b064f94c83b6e478b87a895c_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rbx
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+40h] [rbp-19h]
  _QWORD v9[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v10[10]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+C0h] [rbp+67h] BYREF
  _QWORD *v12; // [rsp+C8h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+D0h] [rbp+77h] BYREF

  v11 = a1;
  _InterlockedExchange(&g_PoBlockAudioPlayback, 1);
  (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 424LL))(
    g_PolicyManager,
    0LL);
  v7 = 0LL;
  v8 = 0LL;
  EnterCriticalSection(&g_csVadList);
  v13 = &g_csVadList;
  v12 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v2 = (__int64 *)*ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v1, &v12);
      v11 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v2 + 69, &v11) >= 0 && v11 )
      {
        if ( CVADServer::RequiresDeferredPoNotificationHandling((CVADServer *)v2) )
        {
          if ( *((_QWORD *)&v7 + 1) == v8 )
            std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
              (__int64 *)&v7,
              *((__int64 *)&v7 + 1),
              v2 + 69);
          else
            std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(
              (__int64)&v7,
              v2 + 69);
        }
        else
        {
          CVADServer::EnsureStreamStopped((CVADServer *)v2);
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    }
    while ( v12 );
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  if ( (_QWORD)v7 != *((_QWORD *)&v7 + 1) )
  {
    SerialWorkQueue = GetSerialWorkQueue();
    v4 = v8;
    v8 = 0LL;
    v5 = *((_QWORD *)&v7 + 1);
    v6 = v7;
    v7 = 0uLL;
    v10[0] = off_180177960;
    memset(v9, 0, sizeof(v9));
    v10[1] = v6;
    v10[2] = v5;
    v10[3] = v4;
    v10[7] = v10;
    CSerialWorkQueue::QueueRecurringItem((__int64)SerialWorkQueue, 0x3E8u, v4, v10, &g_PoTimerCookie);
    std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)v9);
  }
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)&v7);
}
