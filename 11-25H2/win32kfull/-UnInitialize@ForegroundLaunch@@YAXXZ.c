/*
 * XREFs of ?UnInitialize@ForegroundLaunch@@YAXXZ @ 0x14028F5FC
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F90E0 (EditionDriverUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall ForegroundLaunch::UnInitialize(ForegroundLaunch *this, __int64 a2)
{
  __int64 UserSessionState; // rbx
  void *v3; // rcx

  UserSessionState = W32GetUserSessionState(this, a2);
  v3 = *(void **)(UserSessionState + 18872);
  if ( v3 )
    Win32FreePool(v3);
  *(_QWORD *)(UserSessionState + 18872) = 0LL;
}
