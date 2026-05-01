/*
 * XREFs of ?IncrementGhostAnimationWaitCount@CImmersiveApp@@UEAAJI@Z @ 0x180302990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::IncrementGhostAnimationWaitCount(CImmersiveApp *this, unsigned int a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 376LL))((char *)this + 24, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
