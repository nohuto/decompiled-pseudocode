/*
 * XREFs of ?IsSplashScreenPresented@CImmersiveApp@@UEAAJPEAH@Z @ 0x18022F530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::IsSplashScreenPresented(CImmersiveApp *this, int *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 56LL))(*((_QWORD *)this + 43)) == 1;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
