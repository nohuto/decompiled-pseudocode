/*
 * XREFs of wil::details::ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___::_ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___ @ 0x18042DEE8
 * Callers:
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$0 @ 0x1806EB2F1 (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18043CC58 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___::_ScopeExitFn__lambda_37ce3c0886db64cd36632e83c34f1ff5___(
        _BYTE *a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(*(_QWORD *)a1 + 288LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 288LL),
      &v2);
    WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
  }
}
