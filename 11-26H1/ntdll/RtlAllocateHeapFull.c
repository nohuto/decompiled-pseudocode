/*
 * XREFs of RtlAllocateHeapFull @ 0x18013FEB0
 * Callers:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAllocateHeapExport @ 0x18013FD50 (RtlAllocateHeapExport.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x180113150 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140418 (RtlpHeapFatalExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlAllocateHeapFull(_DWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 Heap; // rdi
  unsigned int v7; // r9d
  int v8; // eax
  bool v9; // zf
  struct _TEB *v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // r14d
  int v16; // r14d
  struct _TEB *v17; // rbx

  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a1[4] == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 4) != 0 )
    {
      return RtlpHpTagAllocateHeap(a1, a3, a2);
    }
    else
    {
      if ( a2 )
      {
        v7 = 2;
        if ( a2 != 8 )
        {
          v8 = 0;
          if ( (a2 & 8) != 0 )
            v8 = 2;
          v7 = v8;
          if ( (a2 & 4) != 0 )
            v7 = v8 | 0x80000000;
          if ( (a2 & 0x100) != 0 )
            v7 |= 0x100u;
          if ( (a2 & 0xE00) != 0 )
            v7 |= a2 & 0xE00;
          if ( (a2 & 0x10) != 0 )
            v7 |= 0x10000000u;
        }
      }
      else
      {
        v7 = 0;
      }
      v9 = NtCurrentTeb()->HeapPgSamplingCount == 1;
      __writegsqword(0x248u, NtCurrentTeb()->HeapPgSamplingCount - 1);
      if ( v9 )
      {
        v10 = NtCurrentTeb();
        if ( RtlpHpPgSamplingRateMask == -1 )
        {
          v10->HeapPgSamplingCount = 0LL;
        }
        else
        {
          v11 = v10->RngState[0];
          v12 = v10->RngState[1];
          v13 = (v12 + v11) >> 32;
          v14 = v11 ^ v12;
          v10->RngState[0] = v14 ^ __ROL8__(v11, 24) ^ (v14 << 16);
          v10->RngState[1] = __ROL8__(v14, 37);
          NtCurrentTeb()->HeapPgSamplingCount = ((unsigned int)RtlpHpPgSamplingRateMask & (unsigned int)v13) + 1;
        }
        v15 = 4096;
      }
      else
      {
        v15 = 0;
      }
      v16 = v7 | v15;
      Heap = RtlpHpAllocateHeap((__int64)a1, a3, (unsigned int)v16);
      if ( !Heap )
      {
        v17 = NtCurrentTeb();
        v17->LastStatusValue = -1073741801;
        v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000017);
        if ( v16 < 0 || (int)a1[5] < 0 )
          RtlpAllocateHeapRaiseException(a3);
      }
    }
  }
  else if ( (RtlpHpHeapFeatures & 4) != 0 )
  {
    return RtlpHpTagAllocateHeap(a1, a3, a2);
  }
  else
  {
    return RtlpAllocateNTHeapInternal(a1, a3, a2);
  }
  return Heap;
}
