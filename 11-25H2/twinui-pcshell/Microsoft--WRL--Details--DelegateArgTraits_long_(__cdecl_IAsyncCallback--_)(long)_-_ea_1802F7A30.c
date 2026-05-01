/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::Invoke @ 0x1802F7A30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FBE50 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::Invoke(
        CAppViewManager **a1)
{
  unsigned int v2; // ebx

  v2 = CAppViewManager::_ShowAsViewModeWorker(a1[2], a1[3], a1[4]);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(CAppViewManager *, _QWORD))(*(_QWORD *)a1[3] + 104LL))(a1[3], v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
