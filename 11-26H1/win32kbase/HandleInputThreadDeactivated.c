/*
 * XREFs of HandleInputThreadDeactivated @ 0x140179B00
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x140179858 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x140179B50 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 */

__int64 __fastcall HandleInputThreadDeactivated(int a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi

  result = W32GetUserSessionState(a1, a2, a3);
  v4 = result + 3112;
  v5 = result + 3256;
  while ( v4 != v5 )
  {
    result = CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v4 + 24), 1LL);
    v4 += 48LL;
  }
  return result;
}
