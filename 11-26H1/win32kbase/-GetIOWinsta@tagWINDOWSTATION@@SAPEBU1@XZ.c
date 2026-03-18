/*
 * XREFs of ?GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ @ 0x1401CD840
 * Callers:
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401D3C04 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 * Callees:
 *     <none>
 */

const struct tagWINDOWSTATION *__fastcall tagWINDOWSTATION::GetIOWinsta(int a1, int a2, int a3)
{
  __int64 v3; // rdx
  const struct tagWINDOWSTATION *result; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 63512);
  result = 0LL;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 32) & 4) == 0 )
      return (const struct tagWINDOWSTATION *)v3;
  }
  return result;
}
