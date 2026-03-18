/*
 * XREFs of CmpLazyFlushDpcRoutine @ 0x1404DE470
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     RtlpComputeEpilogueOffset @ 0x1405531C8 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine5 @ 0x140732DB0 (KiCustomAccessRoutine5.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
