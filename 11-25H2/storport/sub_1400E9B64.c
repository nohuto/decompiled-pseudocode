/*
 * XREFs of sub_1400E9B64 @ 0x1400E9B64
 * Callers:
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400E9A60 @ 0x1400E9A60 (sub_1400E9A60.c)
 */

__int64 __fastcall sub_1400E9B64(_QWORD *DeferredContext)
{
  __int64 v2; // rax
  int v3; // edi
  void *v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = sub_1400143E0(72LL, 1752LL, 1380147538LL, *(_QWORD *)(DeferredContext[16] + 8LL));
  DeferredContext[159] = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 32) = v2 + 64;
    *(_QWORD *)(DeferredContext[159] + 40LL) = *(_QWORD *)(DeferredContext[159] + 32LL) + 64LL;
    *(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 32LL) + 16LL) = *(_QWORD *)(DeferredContext[159] + 40LL) + 256LL;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 32LL) + 16LL) + 63LL) = 10;
    v6 = *(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 32LL) + 16LL);
    *(_QWORD *)(v6 + 64) = v6 + 72;
    *(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 40LL) + 240LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 32LL)
                                                                                          + 16LL)
                                                                              + 64LL)
                                                                  + 160LL;
    v7 = *(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 40LL) + 240LL);
    *(_QWORD *)(v7 + 8) = v7 + 16;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(DeferredContext[159] + 40LL) + 240LL) + 5LL) = 10;
    InitializeSListHead(*(PSLIST_HEADER *)(DeferredContext[159] + 32LL));
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(DeferredContext[159] + 32LL) + 24LL), SynchronizationEvent, 0);
    *(_DWORD *)(*(_QWORD *)(DeferredContext[159] + 40LL) + 196LL) = 2;
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(DeferredContext[159] + 40LL) + 200LL), SynchronizationEvent, 0);
    v3 = sub_1400E9A60(DeferredContext);
    if ( v3 >= 0 )
    {
      KeInitializeDpc(
        (PRKDPC)(*(_QWORD *)(DeferredContext[159] + 40LL) + 64LL),
        (PKDEFERRED_ROUTINE)sub_1400E9120,
        DeferredContext);
      KeInitializeTimer((PKTIMER)(*(_QWORD *)(DeferredContext[159] + 40LL) + 128LL));
      return (unsigned int)v3;
    }
  }
  else
  {
    v3 = -1073741670;
  }
  v4 = (void *)DeferredContext[159];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x52436152u);
    DeferredContext[159] = 0LL;
  }
  return (unsigned int)v3;
}
