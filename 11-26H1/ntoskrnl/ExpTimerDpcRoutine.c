/*
 * XREFs of ExpTimerDpcRoutine @ 0x1406D35D0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine0 @ 0x140737800 (KiCustomAccessRoutine0.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // esi
  int v9; // r14d
  __int64 v10; // [rsp+0h] [rbp-1F8h] BYREF
  int v11; // [rsp+30h] [rbp-1C8h]
  _BYTE v12[73]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+179h] [rbp-7Fh]
  unsigned __int64 v14; // [rsp+181h] [rbp-77h]
  __int64 *v15; // [rsp+1B8h] [rbp-40h]

  v15 = &v10;
  memset_0(v12, 0, 0x59uLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v11 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v14 = SystemArgument1;
    *(_QWORD *)&v12[1] = __ROL8__(DeferredContext, SystemArgument1);
    v13 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
  }
  v8 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  v9 = 1;
  if ( (*(_BYTE *)(DeferredContext + 304) & 1) != 0 )
  {
    ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x41695445u);
    LOBYTE(v8) = (unsigned __int8)KeInsertQueueApc(
                                    DeferredContext + 72,
                                    MEMORY[0xFFFFF78000000014],
                                    HIDWORD(MEMORY[0xFFFFF78000000014]),
                                    0) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x44695445u);
      if ( (*(_BYTE *)(DeferredContext + 304) & 2) == 0 )
      {
        if ( KeSetCoalescableTimer(
               (PKTIMER)DeferredContext,
               (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
               0,
               *(_DWORD *)(DeferredContext + 320),
               Dpc) )
        {
          v9 = 2;
        }
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  ObDereferenceObjectExWithTag2(DeferredContext, v9, 0x44695445u, 1);
  if ( v8 )
    ObDereferenceObjectExWithTag2(DeferredContext, v8, 0x41695445u, 1);
}
