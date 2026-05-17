/*
 * XREFs of RtlDestroyHeap @ 0x18007EAC0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x1800274C0 (RtlpHeapHandleError.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpTagDestroyHeap @ 0x180072524 (RtlpHpTagDestroyHeap.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18007DD44 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHeapLogRangeDestroy @ 0x18007E840 (RtlpHeapLogRangeDestroy.c)
 *     RtlpProcessHeapsRemove @ 0x18007E93C (RtlpProcessHeapsRemove.c)
 *     RtlpDestroyHeapSegment @ 0x18007E9E8 (RtlpDestroyHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x18008A90C (RtlpHeapLogRangeRelease.c)
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 *     RtlpLogHeapDestroyEvent @ 0x18010E640 (RtlpLogHeapDestroyEvent.c)
 *     RtlDebugDestroyHeap @ 0x18011FBB4 (RtlDebugDestroyHeap.c)
 *     RtlpDebugPageHeapDestroy @ 0x180123BA0 (RtlpDebugPageHeapDestroy.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+40h] BYREF
  __int64 v18; // [rsp+80h] [rbp+48h] BYREF
  __int64 v19; // [rsp+88h] [rbp+50h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( !a1 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError();
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v15 = *(_DWORD *)(a1 + 24);
      if ( v15 )
        RtlpCallInterceptRoutine(v15, a1, 0LL, 8);
      RtlpHpStackTraceHeapDestroy(a1, a2);
      RtlpHpTagDestroyHeap(a1);
      RtlpProcessHeapsRemove(a1);
      RtlpHpHeapDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 144);
    if ( v3 )
      RtlpCallInterceptRoutine(v3, a1, 0LL, 8);
    RtlpHpStackTraceHeapDestroy(a1, a2);
    if ( ((((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) == 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpProcessHeapsRemove(a1);
      v6 = 2147353480LL;
      v7 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v7 )
      {
        v14 = (unsigned __int64)v7;
        v7 = (_QWORD *)*v7;
        v16 = 0LL;
        v17 = v14 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v5, &v17, &v16, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v5 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v5 = 2147353480LL;
        if ( *(_BYTE *)v5 )
          RtlpHeapLogRangeRelease(a1, v17, v16);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      {
        v19 = *(_QWORD *)(a1 + 408);
        v18 = 0LL;
        RtlpSecMemFreeVirtualMemory(v5, &v19, &v18, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v18 = 0LL;
        RtlpSecMemFreeVirtualMemory(v5, a1 + 232, &v18, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(__int64 **)(a1 + 352), v4);
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v8 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v8);
      }
      while ( v8 != a1 );
      v9 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v10 = 2147353472LL;
      if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapDestroyEvent(a1, *(unsigned __int8 *)v9);
      }
      v11 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v12 = 2147353482LL;
      if ( *(_BYTE *)v12 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapDestroyEvent(a1, *(unsigned __int8 *)v11);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v6 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  return RtlpDebugPageHeapDestroy();
}
