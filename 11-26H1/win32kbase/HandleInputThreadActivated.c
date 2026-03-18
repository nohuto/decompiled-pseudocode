/*
 * XREFs of HandleInputThreadActivated @ 0x1401A2414
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x140179B50 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 */

__int64 __fastcall HandleInputThreadActivated(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // rbx
  __int64 v6; // rdi

  result = W32GetUserSessionState(a1, a2, a3);
  v5 = result + 3112;
  v6 = result + 3256;
  while ( v5 != v6 )
  {
    result = CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v5 + 24), 0, v4);
    v5 += 48LL;
  }
  return result;
}
