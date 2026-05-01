/*
 * XREFs of wil::details::ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___::_ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___ @ 0x1802C2CF4
 * Callers:
 *     _TabletModeCoverWindow::InitializeInstance_::_1_::dtor$0 @ 0x1806AE807 (_TabletModeCoverWindow--InitializeInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___::_ScopeExitFn__lambda_0a2fc03d8da3f261aaf37007dc739f3f___(
        _BYTE *a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    wil::AcquireSRWLockExclusive(&v2, (RTL_SRWLOCK *)(*(_QWORD *)a1 + 112LL));
    *(_BYTE *)(*(_QWORD *)a1 + 200LL) = 0;
    ShowWindow(*(HWND *)(*(_QWORD *)a1 + 104LL), 0);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v2);
  }
}
