/*
 * XREFs of ?InitializeDCEGlobals@@YAJXZ @ 0x1401A5614
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeDCEGlobals(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = (_QWORD *)(UserSessionState + 19704);
  *(_DWORD *)(UserSessionState + 19680) = 1000;
  *(_QWORD *)(UserSessionState + 19712) = UserSessionState + 19704;
  *(_DWORD *)(UserSessionState + 19684) = 100;
  *(_QWORD *)(UserSessionState + 19672) = 10LL;
  result = 0LL;
  *v4 = v4;
  return result;
}
