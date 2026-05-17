/*
 * XREFs of RtlValidateHeap @ 0x1800156C0
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x1801446F0 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x180015970 (RtlpValidateHeapEntry.c)
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180015FD0 (RtlLockHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpSizeHeap @ 0x18001A0F0 (RtlpHpSizeHeap.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapValidateEvent @ 0x180120B74 (RtlpLogHeapValidateEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlValidateHeap(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6; // di
  unsigned __int8 v7; // si
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v16; // r8
  unsigned int v17; // edx
  int v18; // r8d
  unsigned int v19; // ecx

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (a2 & 1) == 0 )
      RtlLockHeap();
    if ( a2 )
    {
      if ( a2 == 8 )
      {
        v16 = 2LL;
      }
      else
      {
        v17 = (a2 >> 2) & 2 | 0x80000000;
        if ( (a2 & 4) == 0 )
          v17 = (a2 >> 2) & 2;
        v18 = v17 | 0x100;
        if ( (a2 & 0x100) == 0 )
          v18 = v17;
        v19 = a2 & 0xE00 | v18;
        if ( (a2 & 0xE00) == 0 )
          v19 = v18;
        v16 = v19;
        LODWORD(v16) = v19 | 0x10000000;
        if ( (a2 & 0x10) == 0 )
          v16 = v19;
      }
    }
    else
    {
      v16 = 0LL;
    }
    if ( a3 )
      v7 = RtlpHpSizeHeap(a1, a3, v16) != -1;
    else
      v7 = 1;
    if ( (a2 & 1) == 0 )
      RtlUnlockHeap(a1);
  }
  else
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 116);
    if ( (v8 & 0x1000000) != 0 )
    {
      v7 = ((__int64 (*)(void))qword_1801C55F8)();
    }
    else if ( *(_DWORD *)(a1 + 152) == -285217025 )
    {
      if ( (((unsigned __int8)a2 | (unsigned __int8)v8) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v9 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        v7 = RtlpValidateHeapEntry(a1, v9, "RtlValidateHeap");
      }
      else
      {
        v7 = RtlpValidateHeap(a1, 1);
      }
    }
    else
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", (const void *)a1);
      DbgPrint(", passed to %s", "RtlValidateHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapValidateEvent(a1);
  }
  return v7;
}
