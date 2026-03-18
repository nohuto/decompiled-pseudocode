/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x140028570
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1400279C0 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiDecrementContextReference @ 0x140026270 (VidSchiDecrementContextReference.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140026CDC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x14003761C (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r14
  LARGE_INTEGER v6; // rax
  __int64 v7; // rdi
  LARGE_INTEGER v8; // r15
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int64 v13; // rcx
  struct _KEVENT *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 *v16; // rcx
  unsigned __int64 *v17; // rdx
  unsigned __int64 **v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 **v20; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 2016), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *(unsigned int *)(v3 + 1576);
  v8 = v6;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v7 + 1584), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v1);
    WdLogGlobalForLineNumber = 12948;
    DxgkLogInternalTriageEvent(
      v9,
      0x40000,
      v10,
      (unsigned int)L"Context running queue is inconsistant",
      v5,
      v1,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1576) = ((_BYTE)v7 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 792), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 3016), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(v3, *(_DWORD *)(v1 + 412), v8.QuadPart, PerformanceFrequency.QuadPart);
  v11 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1576) + 1584);
  if ( v11 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v11 + 412), v8.QuadPart);
  if ( *(int *)(v3 + 3000) > 0 )
    RtlSetBitEx(v5 + 552, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 796), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 192) & 1) != 0 )
      *(_DWORD *)(v1 + 192) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0, 13010LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 412) + 1896);
    v12 = *(unsigned int *)(v1 + 412);
    if ( !*(_DWORD *)(v3 + 4 * v12 + 1896) )
      *(_DWORD *)(v3 + 1892) &= ~(1 << v12);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 3028), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 3024), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 796), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    do
      v13 = *(_QWORD *)(a1 + 104);
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 120), v13, *(_QWORD *)(v3 + 120)) != v13 );
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 788), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 3012), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1844), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 792), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, 0LL, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v1 + 384));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v3 + 408));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1912));
  *(_QWORD *)(v1 + 360) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 328), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1720) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1688), 0, 0);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v3 + 424));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1928));
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1776) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1744), 0, 0);
  v14 = *(struct _KEVENT **)(a1 + 200);
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v15 = *(_QWORD *)(v3 + 232);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 192) & 1) != 0 )
      {
        v16 = (unsigned __int64 *)(v15 + 8);
        v17 = *(unsigned __int64 **)(v15 + 8);
        if ( v17[1] != v15 + 8
          || (v18 = *(unsigned __int64 ***)(v15 + 16), *v18 != v16)
          || (*v18 = v17,
              v17[1] = (unsigned __int64)v18,
              v19 = v3 + 16LL * *(unsigned int *)(v15 + 412) + 2184,
              v20 = *(unsigned __int64 ***)(v19 + 8),
              *v20 != (unsigned __int64 *)v19) )
        {
          __fastfail(3u);
        }
        *v16 = v19;
        *(_QWORD *)(v15 + 16) = v20;
        *v20 = v16;
        *(_QWORD *)(v19 + 8) = v16;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v15, 1);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 788) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 40) + 1496LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 40) + 1464LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
