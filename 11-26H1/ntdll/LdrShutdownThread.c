/*
 * XREFs of LdrShutdownThread @ 0x18007E040
 * Callers:
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     RtlpFreeHeapMetadata @ 0x18007EFA0 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 *     RtlpHpEnvFlsCleanup @ 0x18007FF10 (RtlpHpEnvFlsCleanup.c)
 *     RtlFreeThreadActivationContextStack @ 0x18007FF90 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x1800D4260 (LdrpFreeTls.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 */

void __noreturn LdrShutdownThread(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // r13
  void *FlsData; // r12
  __int16 v3; // si
  __int64 v4; // rcx
  __int64 *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  void **TlsExpansionSlots; // rbx
  void *FiberData; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+30h] [rbp-C8h]
  __int128 v12; // [rsp+40h] [rbp-B8h]
  __int128 v13; // [rsp+50h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-98h]
  _QWORD v15[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v16; // [rsp+80h] [rbp-78h]
  __int128 v17; // [rsp+90h] [rbp-68h]
  __int128 v18; // [rsp+A0h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-38h]
  __int64 v21; // [rsp+C8h] [rbp-30h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  FlsData = v0->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(&RtlpFlsContext);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v0->SameTebFlags & 0x2000) == 0 )
  {
    v3 = NtCurrentTeb()->SameTebFlags & 0x1000;
    if ( !v3 )
      LdrpDrainWorkQueue(0LL);
    LdrpAcquireLoaderLock();
    v5 = (__int64 *)qword_1801CA8F8;
    while ( v5 != &qword_1801CA8F0 )
    {
      v6 = (__int64)(v5 - 4);
      v20 = v6;
      v5 = (__int64 *)v5[1];
      v4 = *(unsigned int *)(v6 + 104);
      if ( ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(v6 + 48) && (v4 & 0x40000) == 0 )
      {
        v7 = *(_QWORD *)(v6 + 56);
        if ( v7 )
        {
          v4 &= 0x80004u;
          if ( (_DWORD)v4 == 524292 )
          {
            v21 = *(_QWORD *)(v6 + 56);
            v10[0] = 72LL;
            v10[1] = 1LL;
            v11 = 0LL;
            v12 = 0LL;
            v13 = 0LL;
            v14 = 0LL;
            RtlActivateActivationContextUnsafeFast((__int64)v10, *(_QWORD *)(v6 + 136));
            if ( *(_WORD *)(v6 + 110) )
              LdrpCallTlsInitializers(3u, v6);
            LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 3u, 0LL);
            RtlDeactivateActivationContextUnsafeFast((__int64)v10);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v15[0] = 72LL;
      v15[1] = 1LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)v15, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)v15);
    }
    LdrpReleaseLoaderLock(v4, 19, 0);
    if ( !v3 )
      LdrpDropLastInProgressCount();
    LdrpFreeTls();
  }
  if ( FlsData )
  {
    v0->FlsData = 0LL;
    RtlpFlsDataCleanup(&RtlpFlsContext);
  }
  if ( (v0->SameTebFlags & 4) != 0 )
  {
    FiberData = v0->NtTib.FiberData;
    v0->NtTib.FiberData = 0LL;
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack();
  if ( (v0->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools();
  RtlpHpEnvFlsCleanup(3LL);
  TlsExpansionSlots = v0->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v0->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFreeHeapMetadata(NtCurrentPeb()->ProcessHeap, TlsExpansionSlots);
  }
}
