/*
 * XREFs of LdrShutdownThread @ 0x180086CA0
 * Callers:
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x18004C46C (LdrpCallInitRoutine.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     RtlpFreeHeapMetadata @ 0x180087C20 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsDataCleanup @ 0x180087C90 (RtlpFlsDataCleanup.c)
 *     RtlFreeThreadActivationContextStack @ 0x180088B90 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x1800D72A0 (LdrpFreeTls.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     TpTrimPools @ 0x1800E86D0 (TpTrimPools.c)
 */

__int64 LdrShutdownThread()
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // r13
  void *FlsData; // r12
  __int16 v3; // si
  __int64 v4; // rcx
  __int64 *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 result; // rax
  void *HeapFlsData; // rdx
  void **TlsExpansionSlots; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+30h] [rbp-C8h]
  __int128 v13; // [rsp+40h] [rbp-B8h]
  __int128 v14; // [rsp+50h] [rbp-A8h]
  __int64 v15; // [rsp+60h] [rbp-98h]
  _QWORD v16[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v17; // [rsp+80h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-68h]
  __int128 v19; // [rsp+A0h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-38h]
  __int64 v22; // [rsp+C8h] [rbp-30h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  FlsData = v0->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(&RtlpFlsContext, v0->FlsData, 1LL);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v0->SameTebFlags & 0x2000) == 0 )
  {
    v3 = NtCurrentTeb()->SameTebFlags & 0x1000;
    if ( !v3 )
      LdrpDrainWorkQueue(0LL);
    LdrpAcquireLoaderLock();
    v5 = (__int64 *)qword_1801CB8B8;
    while ( v5 != &qword_1801CB8B0 )
    {
      v6 = (__int64)(v5 - 4);
      v21 = v6;
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
            v22 = *(_QWORD *)(v6 + 56);
            v11[0] = 72LL;
            v11[1] = 1LL;
            v12 = 0LL;
            v13 = 0LL;
            v14 = 0LL;
            v15 = 0LL;
            RtlActivateActivationContextUnsafeFast((__int64)v11, *(_QWORD *)(v6 + 136));
            if ( *(_WORD *)(v6 + 110) )
              LdrpCallTlsInitializers(3u, v6);
            LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 3u, 0LL);
            RtlDeactivateActivationContextUnsafeFast((__int64)v11);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v16[0] = 72LL;
      v16[1] = 1LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)v16, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)v16);
    }
    LdrpReleaseLoaderLock(v4, 19, 0);
    if ( !v3 )
      LdrpDropLastInProgressCount();
    LdrpFreeTls();
  }
  if ( FlsData )
  {
    v0->FlsData = 0LL;
    RtlpFlsDataCleanup(&RtlpFlsContext, FlsData, 2LL);
  }
  if ( (v0->SameTebFlags & 4) != 0 )
  {
    v0->NtTib.FiberData = 0LL;
    RtlFreeHeap_0();
  }
  RtlFreeThreadActivationContextStack();
  result = 1024LL;
  if ( (v0->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    result = TpTrimPools();
  HeapFlsData = NtCurrentTeb()->HeapFlsData;
  if ( HeapFlsData )
  {
    RtlpFlsDataCleanup(&RtlpHpEnvFlsContext, HeapFlsData, 3LL);
    result = (__int64)NtCurrentTeb();
    *(_QWORD *)(result + 600) = -1LL;
  }
  TlsExpansionSlots = v0->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v0->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    return RtlpFreeHeapMetadata(NtCurrentPeb()->ProcessHeap, TlsExpansionSlots);
  }
  return result;
}
