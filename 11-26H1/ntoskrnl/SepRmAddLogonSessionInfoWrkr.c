/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x140AE6910
 * Callers:
 *     <none>
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x140AE6934 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
