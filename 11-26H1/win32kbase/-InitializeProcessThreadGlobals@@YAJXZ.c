/*
 * XREFs of ?InitializeProcessThreadGlobals@@YAJXZ @ 0x1401EC424
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401CC4F0 (-Initialize@QualityOfService@@YAJXZ.c)
 */

__int64 __fastcall InitializeProcessThreadGlobals(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(UserSessionState + 36452) = 0x20000000CLL;
  *(_DWORD *)(UserSessionState + 36460) = 256;
  *(_DWORD *)(UserSessionState + 36448) = 5000;
  return QualityOfService::Initialize((QualityOfService *)0x100);
}
