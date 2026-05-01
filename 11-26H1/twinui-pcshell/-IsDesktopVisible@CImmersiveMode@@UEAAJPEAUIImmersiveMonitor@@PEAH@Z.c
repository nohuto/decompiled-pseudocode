/*
 * XREFs of ?IsDesktopVisible@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1801E5270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopVisible(CImmersiveMode *this, struct IImmersiveMonitor *a2, int *a3)
{
  *a3 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, int *))(*((_QWORD *)this - 7) + 72LL))(
                    (char *)this - 56,
                    a2,
                    a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
