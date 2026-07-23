/*
 * XREFs of MmScrubMemory @ 0x1408843D4
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     KeInitializeGate @ 0x1404D0428 (KeInitializeGate.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140883F14 (MiReferenceNonPagedMemoryProcessList.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmScrubMemory(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int CurrentProcessorColor; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v8; // rbp
  _QWORD *v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD *i; // r14
  int *v14; // r14
  unsigned __int64 v15; // rbx
  void *v16; // rcx
  __int64 v17; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *a3 = 0LL;
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a2, 0x72506D4Du, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_DWORD *)ExAllocatePoolMm(64LL, 208 * v5 + 88, 1667450189, CurrentProcessorColor | 0x80000000);
    v8 = Object;
    v9 = PoolMm;
    if ( PoolMm )
    {
      *PoolMm = v5;
      KeInitializeGate((__int64)(PoolMm + 2), 0);
      v9[4] = v8;
      v9[6] = &MiSystemPartition;
      MiReferenceNonPagedMemoryProcessList((__int64)v9);
      v11 = v9[6];
      v9[7] = KeGetCurrentThread();
      v9[5] = 0LL;
      v12 = 0;
      v9[10] = MiReferencePageRuns(v11, 1u);
      for ( i = v9 + 11; v12 < (unsigned int)v5; ++v12 )
      {
        *i = v9;
        *((_DWORD *)i + 2) = v12;
        i[4] = MiScrubMemoryWorker;
        i[2] = 0LL;
        i[5] = i;
        ExQueueWorkItemToPartition(i + 2, 4, v12);
        i += 26;
      }
      v10 = 0;
      KeWaitForGate((__int64)(v9 + 1), 0LL);
      v14 = (int *)i + 3;
      while ( 1 )
      {
        v14 -= 52;
        if ( *v14 < 0 )
          break;
        if ( !--v12 )
          goto LABEL_11;
      }
      v10 = *v14;
LABEL_11:
      v15 = 0LL;
      for ( *a3 = v9[5]; v15 < v9[8]; ++v15 )
        ObfDereferenceObjectWithTag(*(PVOID *)(v9[9] + 8 * v15), 0x72506D4Du);
      v16 = (void *)v9[9];
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v17 = v9[10];
      if ( v17 )
        MiDereferencePageRuns(v17);
      ExFreePoolWithTag(v9, 0);
      if ( v8[1] || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
        v10 = -1073741248;
      else
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E2ED08.SchedulerApcFill5[40]);
    }
    else
    {
      v10 = -1073741670;
    }
    ObfDereferenceObjectWithTag(v8, 0x72506D4Du);
    return v10;
  }
  return result;
}
