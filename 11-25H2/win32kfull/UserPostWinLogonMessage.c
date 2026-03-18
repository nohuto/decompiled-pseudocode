/*
 * XREFs of UserPostWinLogonMessage @ 0x140277280
 * Callers:
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x14022BC88 (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserPostWinLogonMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi

  v3 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63544) )
    return PostWinlogonMessage(v3, a2);
  else
    return 3221226025LL;
}
