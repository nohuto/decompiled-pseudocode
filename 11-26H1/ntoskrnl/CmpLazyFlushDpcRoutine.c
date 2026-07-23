/*
 * XREFs of CmpLazyFlushDpcRoutine @ 0x1404D7B50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine5 @ 0x140737980 (KiCustomAccessRoutine5.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CmpLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _BYTE v8[46]; // [rsp+160h] [rbp-68h] BYREF
  __int64 v9; // [rsp+18Eh] [rbp-3Ah]
  unsigned __int64 v10; // [rsp+1B6h] [rbp-12h]

  memset_0(v8, 0, 0x5EuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v10 = SystemArgument1;
    v9 = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v8[38] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine5(DeferredContext);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 152));
  if ( CmpHoldLazyFlush )
    *(_QWORD *)(DeferredContext + 168) = 0LL;
  else
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 152));
}
