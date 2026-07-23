/*
 * XREFs of RtlValidateHeap @ 0x180060DF0
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x1801445A0 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180061700 (RtlLockHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapValidateEvent @ 0x180120924 (RtlpLogHeapValidateEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // di
  BOOLEAN v7; // si
  int v8; // eax
  char *v9; // rdx
  __int64 v10; // rcx
  int v12; // r8d
  ULONG v13; // edx
  int v14; // r8d
  ULONG v15; // ecx

  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    if ( Flags )
    {
      if ( Flags == 8 )
      {
        v12 = 2;
      }
      else
      {
        v13 = (Flags >> 2) & 2 | 0x80000000;
        if ( (Flags & 4) == 0 )
          v13 = (Flags >> 2) & 2;
        v14 = v13 | 0x100;
        if ( (Flags & 0x100) == 0 )
          v14 = v13;
        v15 = Flags & 0xE00 | v14;
        if ( (Flags & 0xE00) == 0 )
          v15 = v14;
        v12 = v15 | 0x10000000;
        if ( (Flags & 0x10) == 0 )
          v12 = v15;
      }
    }
    else
    {
      v12 = 0;
    }
    if ( BaseAddress )
      v7 = RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v12) != -1;
    else
      v7 = 1;
    if ( (Flags & 1) == 0 )
      RtlUnlockHeap(HeapHandle);
  }
  else
  {
    v7 = 0;
    v8 = *((_DWORD *)HeapHandle + 29);
    if ( (v8 & 0x1000000) != 0 )
    {
      v7 = ((__int64 (*)(void))qword_1801C45F8)();
    }
    else if ( *((_DWORD *)HeapHandle + 38) == -285217025 )
    {
      if ( (((unsigned __int8)Flags | (unsigned __int8)v8) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
      }
      if ( BaseAddress )
      {
        v9 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v9 -= 16 * (unsigned __int8)v9[14];
        v7 = RtlpValidateHeapEntry(HeapHandle, v9, "RtlValidateHeap");
      }
      else
      {
        v7 = RtlpValidateHeap((unsigned __int64)HeapHandle, 1);
      }
    }
    else
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", HeapHandle);
      DbgPrint(", passed to %s", "RtlValidateHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapValidateEvent(HeapHandle);
  }
  return v7;
}
