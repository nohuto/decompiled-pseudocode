/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401D3C04
 * Callers:
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401D42F4 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClassWithPolicy.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401D47B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 * Callees:
 *     ?GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ @ 0x1401CD840 (-GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(int a1, int a2, int a3)
{
  const struct tagWINDOWSTATION *IOWinsta; // rax
  char v4; // cl

  IOWinsta = tagWINDOWSTATION::GetIOWinsta(a1, a2, a3);
  if ( !IOWinsta )
    return 0;
  v4 = 1;
  if ( (*((_DWORD *)IOWinsta + 56) & 1) == 0 )
    return 0;
  return v4;
}
