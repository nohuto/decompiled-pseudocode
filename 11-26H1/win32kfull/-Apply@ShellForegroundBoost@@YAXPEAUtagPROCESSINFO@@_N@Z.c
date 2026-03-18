/*
 * XREFs of ?Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z @ 0x1401A1B24
 * Callers:
 *     NtUserShellForegroundBoostProcess @ 0x1401A18D0 (NtUserShellForegroundBoostProcess.c)
 * Callees:
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A0F4C (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A12BC (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall ShellForegroundBoost::Apply(struct _EPROCESS **this, struct tagPROCESSINFO *a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rax

  if ( (_BYTE)a2 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CShellForegroundBoost::Boost(*(CShellForegroundBoost **)(UserSessionState + 18920), this);
  }
  else
  {
    v4 = W32GetUserSessionState(this, a2);
    CShellForegroundBoost::DeBoost(*(CShellForegroundBoost **)(v4 + 18920), (struct tagPROCESSINFO *)this);
  }
}
