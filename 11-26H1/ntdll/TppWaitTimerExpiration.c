/*
 * XREFs of TppWaitTimerExpiration @ 0x1800FBF7C
 * Callers:
 *     TppSingleTimerExpiration @ 0x180068DF0 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppRaiseHandleStatus @ 0x1800C9DE8 (TppRaiseHandleStatus.c)
 *     ZwCancelWaitCompletionPacket @ 0x180160210 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TppWaitTimerExpiration(unsigned __int64 a1)
{
  int v2; // eax

  v2 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 0LL);
  if ( v2 )
  {
    if ( v2 != -1073741536 && v2 != 259 )
      TppRaiseHandleStatus(v2, *(_QWORD *)(a1 + 360), a1);
    return 0;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(unsigned __int64))(a1 + 8))(a1);
    *(_QWORD *)(a1 + 360) = 0LL;
    return 1;
  }
}
