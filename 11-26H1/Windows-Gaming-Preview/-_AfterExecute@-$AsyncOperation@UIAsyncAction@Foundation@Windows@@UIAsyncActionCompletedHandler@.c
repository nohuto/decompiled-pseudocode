/*
 * XREFs of ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180030034
 * Callers:
 *     ?Complete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAXJ@Z @ 0x180028010 (-Complete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VC.c)
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002C5C0 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18002E5F0 (-Run@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoRes.c)
 *     ?_Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x180034E30 (-_Run@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoRe.c)
 * Callees:
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18002FCF8 (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18002FEC4 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 */

char __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::_AfterExecute(
        __int64 a1,
        signed __int32 a2,
        signed __int32 a3)
{
  bool v4; // di
  signed __int32 v5; // eax
  signed __int32 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 260), 0xFFFFFFFF) == 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 252)) == 1 )
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 260), 0xFFFFFFFF) == 1;
  v7 = -2;
  if ( a2 >= 0 )
  {
    _InterlockedCompareExchange(&v7, *(_DWORD *)(a1 + 64), -2);
    if ( v7 || (v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 0), v5 != v7) )
      LOBYTE(v5) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 2);
  }
  else
  {
    LOBYTE(v5) = _InterlockedCompareExchange(&v7, *(_DWORD *)(a1 + 64), -2);
    if ( v7 != 2 )
      LOBYTE(v5) = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::TryTransitionToError(
                     a1 + 8,
                     a2,
                     a3);
  }
  if ( v4 )
    LOBYTE(v5) = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::_AfterComplete(a1);
  return v5;
}
