/*
 * XREFs of EditionDeferWinEventNotify @ 0x14019CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionDeferWinEventNotify(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(result + 70600);
  return result;
}
