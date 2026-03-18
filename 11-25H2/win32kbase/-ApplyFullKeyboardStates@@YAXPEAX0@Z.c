/*
 * XREFs of ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x140219624
 * Callers:
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A380 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1400943F0 (PostUpdateKeyStateEvent.c)
 */

void __fastcall ApplyFullKeyboardStates(_OWORD *a1, _OWORD *a2)
{
  _OWORD *UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD **v13; // rbx
  _QWORD *i; // rdi
  __int64 v15; // rcx
  __m128i si128; // xmm0

  UserSessionState = (_OWORD *)W32GetUserSessionState(a1, a2);
  UserSessionState[900] = *a1;
  UserSessionState[901] = a1[1];
  UserSessionState[902] = a1[2];
  UserSessionState[903] = a1[3];
  v7 = (_OWORD *)W32GetUserSessionState(v6, v5);
  v7[896] = *a2;
  v7[897] = a2[1];
  v7[898] = a2[2];
  v7[899] = a2[3];
  if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19144) )
  {
    v13 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19144) + 176LL);
    for ( i = *v13; i != v13; i = (_QWORD *)*i )
    {
      v15 = *(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(v15 + 412) |= 1u;
      *(__m128i *)(v15 + 224) = si128;
      *(__m128i *)(v15 + 240) = si128;
      PostUpdateKeyStateEvent(v15, v12);
    }
  }
}
