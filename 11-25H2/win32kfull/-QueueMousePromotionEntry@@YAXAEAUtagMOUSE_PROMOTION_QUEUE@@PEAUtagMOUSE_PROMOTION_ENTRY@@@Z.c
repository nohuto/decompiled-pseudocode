/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x14013A294
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1401398E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1402B03A0 (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     ?SaveLastEntryPromotionQueued@@YAXXZ @ 0x140136668 (-SaveLastEntryPromotionQueued@@YAXXZ.c)
 *     ?IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401374F0 (-IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HDdd @ 0x1402B0910 (WPP_RECORDER_AND_TRACE_SF_HDdd.c)
 */

void __fastcall QueueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1, struct tagMOUSE_PROMOTION_ENTRY *a2)
{
  _QWORD *v2; // rax
  char v4; // r15
  char v5; // r12
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v2 )
    *v2 = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a2;
  v4 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v4 = 0;
  }
  if ( v5 || v4 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v4;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_HDdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160));
  }
  if ( IsPromotionQueue(a1, (__int64)a2) )
    SaveLastEntryPromotionQueued(v10, v9);
}
