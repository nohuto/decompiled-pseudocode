/*
 * XREFs of ?zzzSetMoveSizeCursor@MoveSizeApi@@YAXW4_MOVESIZE_OPERATION@@@Z @ 0x1402AC100
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagCURSOR *__fastcall MoveSizeApi::zzzSetMoveSizeCursor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  __m128i si128; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-18h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v2 = (int)a1;
  v6 = 6553705;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return zzzSetCursor(
           *(struct tagCURSOR **)(UserSessionState + 552LL * si128.m128i_i16[v2] - 33320),
           si128.m128i_i16[v2]);
}
