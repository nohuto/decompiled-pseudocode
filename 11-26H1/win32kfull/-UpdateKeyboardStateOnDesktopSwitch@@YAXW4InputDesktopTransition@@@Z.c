/*
 * XREFs of ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x140278B60
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     ClearKeyboardStates @ 0x1402796E0 (ClearKeyboardStates.c)
 */

__int64 __fastcall UpdateKeyboardStateOnDesktopSwitch(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // rdi
  _QWORD **v5; // rdi
  _QWORD *i; // rbx
  __int64 v7; // rcx
  __m128i si128; // xmm0

  v2 = a1;
  result = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(result + 19176);
  if ( v4 && v2 != 1 )
  {
    result = ClearKeyboardStates();
    v5 = (_QWORD **)(v4 + 176);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      v7 = *(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(__m128i *)(v7 + 248) = si128;
      *(__m128i *)(v7 + 264) = si128;
      *(_DWORD *)(v7 + 436) |= 1u;
      result = PostUpdateKeyStateEvent(v7);
    }
  }
  return result;
}
