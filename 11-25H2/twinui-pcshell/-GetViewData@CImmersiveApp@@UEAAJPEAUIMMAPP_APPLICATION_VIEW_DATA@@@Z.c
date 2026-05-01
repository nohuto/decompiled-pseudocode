/*
 * XREFs of ?GetViewData@CImmersiveApp@@UEAAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x180302400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::GetViewData(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct IMMAPP_APPLICATION_VIEW_DATA *))(*((_QWORD *)this + 3)
                                                                                           + 344LL))(
                    (char *)this + 24,
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
