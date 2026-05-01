/*
 * XREFs of ?CancelAndWait@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAXXZ @ 0x180345BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

DWORD __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::CancelAndWait(
        __int64 a1)
{
  DWORD result; // eax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 72LL))(a1 + 16);
  if ( !WaitForSingleObject(*(HANDLE *)(a1 + 184), 0) )
    WaitForSingleObject(*(HANDLE *)(a1 + 192), 0xFFFFFFFF);
  result = WaitForSingleObject(*(HANDLE *)(a1 + 200), 0);
  if ( !result )
    return WaitForSingleObject(*(HANDLE *)(a1 + 208), 0xFFFFFFFF);
  return result;
}
