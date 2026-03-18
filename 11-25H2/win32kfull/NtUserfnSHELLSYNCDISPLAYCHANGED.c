/*
 * XREFs of NtUserfnSHELLSYNCDISPLAYCHANGED @ 0x1402A4280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserfnSHELLSYNCDISPLAYCHANGED(__int64 a1, __int64 a2)
{
  PtiCurrent(a1, a2);
  UserSetLastError(5);
  return 0LL;
}
