/*
 * XREFs of NvmeControllerCommandTimeoutDetectDpcRoutine @ 0x1400F1800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerCommandTimeoutDetectDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG *v5; // rbx
  __int64 v6; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(ULONGLONG **)(*((_QWORD *)DeferredContext + 161) + 40LL);
  *v5 = KeQueryUnbiasedInterruptTime();
  _InterlockedOr(v7, 0);
  if ( !**((_DWORD **)DeferredContext + 161) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)DeferredContext + 16) + 160LL);
    if ( *(_DWORD *)(v6 + 68) == 1
      && (*(_BYTE *)v6 != 1 || *(_BYTE *)(*(_QWORD *)(v6 + 8) + 64LL))
      && !_interlockedbittestandset((volatile signed __int32 *)DeferredContext + 268, 3u) )
    {
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*((_QWORD *)DeferredContext + 161) + 40LL) + 200LL), 0, 0);
    }
  }
}
