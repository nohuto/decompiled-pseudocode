/*
 * XREFs of ?OnClose@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAXXZ @ 0x18034E3B0
 * Callers:
 *     ??1?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAA@XZ @ 0x180341C68 (--1-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c_.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::OnClose(
        RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rcx
  PVOID v3; // rcx
  PVOID v4; // rcx
  PVOID v5; // rcx
  PVOID v6; // rcx
  RTL_SRWLOCK *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = 0LL;
  wil::AcquireSRWLockExclusive(v7, a1 + 26);
  Ptr = a1[21].Ptr;
  if ( Ptr )
  {
    CloseHandle(Ptr);
    a1[21].Ptr = 0LL;
  }
  v3 = a1[22].Ptr;
  if ( v3 )
  {
    CloseHandle(v3);
    a1[22].Ptr = 0LL;
  }
  v4 = a1[23].Ptr;
  if ( v4 )
  {
    CloseHandle(v4);
    a1[23].Ptr = 0LL;
  }
  v5 = a1[24].Ptr;
  if ( v5 )
  {
    CloseHandle(v5);
    a1[24].Ptr = 0LL;
  }
  v6 = a1[25].Ptr;
  if ( v6 )
  {
    CloseHandle(v6);
    a1[25].Ptr = 0LL;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v7);
}
