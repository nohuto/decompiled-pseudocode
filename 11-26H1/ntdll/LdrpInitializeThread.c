/*
 * XREFs of LdrpInitializeThread @ 0x1800CF3C0
 * Callers:
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x18004C46C (LdrpCallInitRoutine.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

struct _TEB *__fastcall LdrpInitializeThread(__int64 a1, __int64 a2)
{
  char v2; // di
  struct _TEB *v3; // rbx
  _PEB *ProcessEnvironmentBlock; // r15
  struct _TEB *result; // rax
  int i; // ebx
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
  _QWORD v17[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+30h] [rbp-C8h]
  __int128 v19; // [rsp+40h] [rbp-B8h]
  __int128 v20; // [rsp+50h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-98h]
  _QWORD v22[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v23; // [rsp+80h] [rbp-78h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int128 v25; // [rsp+A0h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-38h]
  __int64 v28; // [rsp+C8h] [rbp-30h]
  __int64 v29; // [rsp+108h] [rbp+10h] BYREF

  v2 = 0;
  v29 = 0LL;
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
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    if ( (v3->SameTebFlags & 0x2000) == 0 )
    {
      for ( i = LdrpAllocateTls(); i < 0; i = LdrpAllocateTls() )
      {
        if ( i != -1073741801 )
          break;
        v29 = -3000000LL;
        ZwDelayExecution(0LL, &v29);
      }
      if ( i < 0 )
      {
        ZwTerminateProcess(-1LL, (unsigned int)i);
        RtlRaiseStatus(i);
      }
      v7 = LdrpLoadCompleteEvent;
      while ( 1 )
      {
        RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
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
              ++dword_1801CB624;
            else
              ++dword_1801CB628;
          }
        }
        RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
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
      v14 = qword_1801CB890;
      while ( (__int64 *)v14 != &qword_1801CB890 )
      {
        v27 = v14;
        v13 = *(unsigned int *)(*(_QWORD *)(v14 + 152) + 56LL);
        if ( (int)v13 >= 9 )
        {
          if ( ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(v14 + 48)
            && (*(_DWORD *)(v14 + 104) & 0x40000) == 0 )
          {
            v15 = *(_QWORD *)(v14 + 56);
            v28 = v15;
            if ( v15 )
            {
              if ( (*(_DWORD *)(v14 + 104) & 0x80000) != 0 && (*(_DWORD *)(v14 + 104) & 4) != 0 )
              {
                if ( byte_1801CB8C8 )
                  goto LABEL_46;
                v17[0] = 72LL;
                v17[1] = 1LL;
                v18 = 0LL;
                v19 = 0LL;
                v20 = 0LL;
                v21 = 0LL;
                RtlActivateActivationContextUnsafeFast((__int64)v17, *(_QWORD *)(v14 + 136));
                if ( *(_WORD *)(v14 + 110) )
                  LdrpCallTlsInitializers(2u, v14);
                LdrpCallInitRoutine(v15, *(_QWORD *)(v14 + 48), 2u, 0LL);
                RtlDeactivateActivationContextUnsafeFast((__int64)v17);
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
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_1801CB8C8 )
      {
        v22[0] = 72LL;
        v22[1] = 1LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v22, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v22);
      }
LABEL_46:
      LdrpReleaseLoaderLock(v13, 21, 0);
      v16 = NtCurrentTeb();
      v16->SameTebFlags &= ~0x1000u;
      RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
      LdrpWorkInProgress = 0;
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
      return (struct _TEB *)ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
    }
  }
  return result;
}
