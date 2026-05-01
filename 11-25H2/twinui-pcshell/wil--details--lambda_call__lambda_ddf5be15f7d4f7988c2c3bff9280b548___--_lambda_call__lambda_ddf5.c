/*
 * XREFs of wil::details::lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___::_lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___ @ 0x180427E2C
 * Callers:
 *     __lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator()_::_1_::dtor$0 @ 0x1806C3697 (__lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801AAE90 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___::_lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___(
        _BYTE *a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(*(_QWORD *)a1 + 288LL) + 208LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 288LL),
      &v2);
    UwpWindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
  }
}
