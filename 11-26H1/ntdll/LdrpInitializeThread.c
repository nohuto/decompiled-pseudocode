/*
 * XREFs of LdrpInitializeThread @ 0x1800CCB30
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

int __fastcall LdrpInitializeThread(__int64 a1, __int64 a2)
{
  char v2; // di
  struct _TEB *v3; // rbx
  _PEB *ProcessEnvironmentBlock; // r15
  struct _TEB *v5; // rax
  NTSTATUS i; // ebx
  HANDLE v7; // r14
  char v8; // si
  __int64 *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // eax
  struct _TEB *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  struct _TEB *v16; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-B8h]
  __int128 v21; // [rsp+50h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-98h]
  _QWORD v23[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v24; // [rsp+80h] [rbp-78h]
  __int128 v25; // [rsp+90h] [rbp-68h]
  __int128 v26; // [rsp+A0h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-38h]
  __int64 v29; // [rsp+C8h] [rbp-30h]
  LARGE_INTEGER DelayInterval; // [rsp+108h] [rbp+10h] BYREF

  v2 = 0;
  DelayInterval.QuadPart = 0LL;
  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( UseCOR && (v3->SameTebFlags & 0x400) != 0 )
  {
    a2 = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    *(_QWORD *)(a1 + 128) = a2;
  }
  LdrpAcquireSchedulerSharedDataSlot(v3, a2, a1);
  if ( !v3->ActivationContextStackPointer )
  {
    v3->_ActivationStack.Flags = 0;
    v3->_ActivationStack.ActiveFrame = 0LL;
    v3->_ActivationStack.FrameListCache.Blink = &v3->_ActivationStack.FrameListCache;
    v3->_ActivationStack.FrameListCache.Flink = &v3->_ActivationStack.FrameListCache;
    v3->_ActivationStack.NextCookieSequenceNumber = 1;
    v3->_ActivationStack.StackId = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v3->_ActivationStack.Flags = 2;
    v3->ActivationContextStackPointer = &v3->_ActivationStack;
  }
  v5 = NtCurrentTeb();
  if ( (v5->SameTebFlags & 8) == 0 || (v5 = NtCurrentTeb(), (v5->SameTebFlags & 0x20) != 0) )
  {
    if ( (v3->SameTebFlags & 0x2000) == 0 )
    {
      for ( i = LdrpAllocateTls(); i < 0; i = LdrpAllocateTls() )
      {
        if ( i != -1073741801 )
          break;
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      if ( i < 0 )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, i);
        RtlRaiseStatus(i);
      }
      v7 = LdrpLoadCompleteEvent;
      while ( 1 )
      {
        RtlEnterCriticalSection(&LdrpWorkQueueLock);
        v8 = LdrpDetourExist;
        if ( LdrpDetourExist )
        {
          if ( !LdrpWorkInProgress )
          {
            LdrpWorkInProgress = 1;
            v2 = 1;
          }
          v9 = &LdrpWorkQueue;
        }
        else
        {
          v9 = (__int64 *)LdrpWorkQueue;
          v10 = *(_QWORD *)LdrpWorkQueue;
          if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v10 + 8) != LdrpWorkQueue )
            __fastfail(3u);
          LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
          *(_QWORD *)(v10 + 8) = &LdrpWorkQueue;
          if ( &LdrpWorkQueue == v9 )
          {
            if ( !LdrpWorkInProgress )
            {
              LdrpWorkInProgress = 1;
              v2 = 1;
            }
          }
          else
          {
            v11 = LdrpWorkInProgress + 1;
            LdrpWorkInProgress = v11;
            if ( LdrpStatistics < v11 )
              LdrpStatistics = v11;
            if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
              ++dword_1801CA684;
            else
              ++dword_1801CA688;
          }
        }
        RtlLeaveCriticalSection(&LdrpWorkQueueLock);
        if ( v2 )
          break;
        if ( &LdrpWorkQueue == v9 )
          NtWaitForSingleObject(v7, 0, 0LL);
        else
          LdrpProcessWork((__int64)(v9 - 8), v8);
      }
      v12 = NtCurrentTeb();
      v12->SameTebFlags |= 0x1000u;
      LdrpAcquireLoaderLock();
      v14 = qword_1801CA8D0;
      while ( (__int64 *)v14 != &qword_1801CA8D0 )
      {
        v28 = v14;
        v13 = *(unsigned int *)(*(_QWORD *)(v14 + 152) + 56LL);
        if ( (int)v13 >= 9 )
        {
          if ( ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(v14 + 48)
            && (*(_DWORD *)(v14 + 104) & 0x40000) == 0 )
          {
            v15 = *(_QWORD *)(v14 + 56);
            v29 = v15;
            if ( v15 )
            {
              if ( (*(_DWORD *)(v14 + 104) & 0x80000) != 0 && (*(_DWORD *)(v14 + 104) & 4) != 0 )
              {
                if ( byte_1801CA908 )
                  goto LABEL_46;
                v18[0] = 72LL;
                v18[1] = 1LL;
                v19 = 0LL;
                v20 = 0LL;
                v21 = 0LL;
                v22 = 0LL;
                RtlActivateActivationContextUnsafeFast((__int64)v18, *(_QWORD *)(v14 + 136));
                if ( *(_WORD *)(v14 + 110) )
                  LdrpCallTlsInitializers(2u, v14);
                LdrpCallInitRoutine(v15, *(_QWORD *)(v14 + 48), 2u, 0LL);
                RtlDeactivateActivationContextUnsafeFast((__int64)v18);
              }
            }
          }
          v14 = *(_QWORD *)v14;
        }
        else
        {
          v14 = *(_QWORD *)v14;
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_1801CA908 )
      {
        v23[0] = 72LL;
        v23[1] = 1LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v23, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v23);
      }
LABEL_46:
      LdrpReleaseLoaderLock(v13, 21, 0);
      v16 = NtCurrentTeb();
      v16->SameTebFlags &= ~0x1000u;
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      LdrpWorkInProgress = 0;
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      LODWORD(v5) = ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
    }
  }
  return (int)v5;
}
