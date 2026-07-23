/*
 * XREFs of ExpWaitForFastResource @ 0x140275550
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ExpWaitForFastResource(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r13d
  unsigned int *v7; // r15
  int v8; // eax
  signed __int8 *v9; // r14
  char v10; // cl
  LARGE_INTEGER *Timeout; // rdi
  NTSTATUS result; // eax
  unsigned int v13; // r13d
  signed __int8 v14; // al
  signed __int8 v15; // tt
  __int64 Pool2; // rax
  int v17; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+B8h] [rbp+20h]

  v18.QuadPart = 0LL;
  __incgsdword(0x90A8u);
  v6 = 0;
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000008];
  v17 = 0;
  ++*(_DWORD *)(a1 + 60);
  v7 = (unsigned int *)(a1 + 28);
  v19 = a1 + 28;
  v8 = *(_DWORD *)(a1 + 28);
  if ( v8 == -1 )
    v8 = ExResourceTimeoutCount;
  v9 = (signed __int8 *)(a1 + 25);
  v20 = a1 + 25;
  v10 = *(_BYTE *)(a1 + 25);
  if ( !v8 || (v10 & 1) != 0 )
  {
    Timeout = 0LL;
  }
  else
  {
    v18.QuadPart = -5000000LL;
    Timeout = &v18;
  }
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, Timeout);
    if ( result != 258 )
      return result;
    v21 = ++v6;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v6);
    if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    {
      Timeout = 0LL;
    }
    else
    {
      v13 = *v7;
      if ( *v7 == -1 )
        v13 = ExResourceTimeoutCount;
      if ( v13 )
      {
        if ( ++v17 <= v13 )
        {
          *Timeout = (LARGE_INTEGER)WheapConfigTableLock.WaitBlock[0].Thread;
          goto LABEL_17;
        }
        Timeout = 0LL;
        _m_prefetchw(v9);
        v14 = *v9;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange8(v9, v14 | 1, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 1) != 0 )
        {
LABEL_17:
          v6 = v21;
        }
        else
        {
          v17 = 0;
          DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", (const void *)a1);
          Pool2 = ExAllocatePool2(0x40uLL);
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
            *(_QWORD *)(Pool2 + 24) = Pool2;
            *(_QWORD *)Pool2 = 0LL;
            *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
            *(_QWORD *)(Pool2 + 40) = a1;
            *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(Pool2 + 52) = v13;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
          }
          __debugbreak();
          v6 = v21;
        }
      }
      else
      {
        Timeout = 0LL;
        v6 = v21;
      }
    }
  }
}
