/*
 * XREFs of ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x140133B80
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_HDdd @ 0x1402CC05C (WPP_RECORDER_AND_TRACE_SF_HDdd.c)
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall DequeueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r15
  char v4; // r14
  char v5; // r12
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v1 = *(_QWORD **)a1;
  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD **)a1;
    *(_QWORD *)a1 = *v1;
    if ( *((_QWORD **)a1 + 1) == v1 )
      *((_QWORD *)a1 + 1) = 0LL;
    v4 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v5 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v4 = 0;
    }
    if ( v5 || v4 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v1);
      LOBYTE(v7) = v4;
      LOBYTE(v8) = v5;
      WPP_RECORDER_AND_TRACE_SF_HDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v8, v7, *(_QWORD *)(UserSessionState + 69152));
    }
  }
  return (struct tagMOUSE_PROMOTION_ENTRY *)v2;
}
