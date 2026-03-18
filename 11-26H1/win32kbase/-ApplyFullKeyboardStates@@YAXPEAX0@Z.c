/*
 * XREFs of ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x14021E04C
 * Callers:
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021ECE0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 */

void __fastcall ApplyFullKeyboardStates(_OWORD *a1, _OWORD *a2, int a3)
{
  __int64 UserSessionState; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  _QWORD **v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *i; // rbx
  __int64 v21; // rcx
  __m128i si128; // xmm0

  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  *(_OWORD *)(UserSessionState + 14392) = *a1;
  *(_OWORD *)(UserSessionState + 14408) = a1[1];
  *(_OWORD *)(UserSessionState + 14424) = a1[2];
  *(_OWORD *)(UserSessionState + 14440) = a1[3];
  v9 = W32GetUserSessionState(v7, v6, v8);
  *(_OWORD *)(v9 + 14328) = *a2;
  *(_OWORD *)(v9 + 14344) = a2[1];
  *(_OWORD *)(v9 + 14360) = a2[2];
  *(_OWORD *)(v9 + 14376) = a2[3];
  if ( *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 19176) )
  {
    v17 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 19176) + 176LL);
    for ( i = *v17; i != v17; i = (_QWORD *)*i )
    {
      v21 = *(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(v21 + 436) |= 1u;
      *(__m128i *)(v21 + 248) = si128;
      *(__m128i *)(v21 + 264) = si128;
      PostUpdateKeyStateEvent(v21, v16, v18, v19);
    }
  }
}
