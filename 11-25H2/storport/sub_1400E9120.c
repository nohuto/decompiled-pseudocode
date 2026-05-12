/*
 * XREFs of sub_1400E9120 @ 0x1400E9120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1400E9120(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v5; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  **(_QWORD **)(*((_QWORD *)DeferredContext + 159) + 40LL) = KeQueryUnbiasedInterruptTime();
  _InterlockedOr(v6, 0);
  if ( !**((_DWORD **)DeferredContext + 159) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)DeferredContext + 16) + 160LL);
    if ( *(_DWORD *)(v5 + 68) == 1
      && (*(_BYTE *)v5 != 1 || *(_BYTE *)(*(_QWORD *)(v5 + 8) + 64LL))
      && !_interlockedbittestandset((volatile signed __int32 *)DeferredContext + 268, 3u) )
    {
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*((_QWORD *)DeferredContext + 159) + 40LL) + 200LL), 0, 0);
    }
  }
}
