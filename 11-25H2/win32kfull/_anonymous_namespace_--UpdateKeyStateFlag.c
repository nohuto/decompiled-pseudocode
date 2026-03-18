/*
 * XREFs of _anonymous_namespace_::UpdateKeyStateFlag @ 0x1401B7694
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall anonymous_namespace_::UpdateKeyStateFlag(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *i; // rdx
  __m128i si128; // xmm0

  v2 = PtiCurrent(a1, a2);
  result = W32GetUserSessionState(v4, v3);
  v7 = *(_QWORD *)(result + 19144);
  if ( *((_QWORD *)v2 + 62) == v7 )
  {
    result = W32GetUserSessionState(v7, v6);
    v8 = (_QWORD **)(*(_QWORD *)(result + 19144) + 176LL);
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
    {
      result = *(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(result + 412) |= 1u;
      *(__m128i *)(result + 224) = si128;
      *(__m128i *)(result + 240) = si128;
    }
  }
  return result;
}
