/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x1408A6504
 * Callers:
 *     DestroyAggregateSession @ 0x1408A6758 (DestroyAggregateSession.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExDeleteTimer @ 0x1403B48D0 (ExDeleteTimer.c)
 */

char __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 v4; // rcx
  char result; // al
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 360) )
  {
    v2 = *(_QWORD *)(a1 + 264);
    v3 = *(_WORD *)(v2 + 56);
    *(_WORD *)(v2 + 56) = 2;
    if ( v3 == 1 )
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 264) + 32LL), Executive, 0, 0, 0LL);
    v4 = *(_QWORD *)(a1 + 360);
    v6 = 0LL;
    v7 = 0LL;
    result = ExDeleteTimer(v4, 1, 1, (unsigned int *)&v6);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  return result;
}
