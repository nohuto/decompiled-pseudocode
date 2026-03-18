/*
 * XREFs of HandleInputThreadDeactivated @ 0x1401A27E0
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x14014FA4C (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020FBD8 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 */

__int64 __fastcall HandleInputThreadDeactivated(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi

  result = W32GetUserSessionState(a1, a2);
  v3 = result + 3112;
  v4 = result + 3256;
  while ( v3 != v4 )
  {
    result = CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v3 + 24), 1LL);
    v3 += 48LL;
  }
  return result;
}
