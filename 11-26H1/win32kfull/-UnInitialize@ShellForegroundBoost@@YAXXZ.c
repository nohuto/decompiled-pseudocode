/*
 * XREFs of ?UnInitialize@ShellForegroundBoost@@YAXXZ @ 0x14022FEC8
 * Callers:
 *     EditionDriverUninitialize @ 0x14022F800 (EditionDriverUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellForegroundBoost::UnInitialize(ShellForegroundBoost *this, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // rcx

  v3 = *(void **)(W32GetUserSessionState(this, a2) + 18920);
  if ( v3 )
    Win32FreePool(v3);
  *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18920) = 0LL;
}
