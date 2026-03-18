/*
 * XREFs of ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x1402883CC
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     ClearKeyboardStates @ 0x140247ACC (ClearKeyboardStates.c)
 */

void __fastcall UpdateKeyboardStateOnDesktopSwitch(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  __m128i *v8; // rcx
  __m128i si128; // xmm0

  v2 = a1;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144);
  if ( v5 && v2 != 1 )
  {
    ClearKeyboardStates(v4, v3);
    v6 = (_QWORD **)(v5 + 176);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = (__m128i *)*(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v8[14] = si128;
      v8[15] = si128;
      v8[25].m128i_i32[3] |= 1u;
      PostUpdateKeyStateEvent(v8);
    }
  }
}
