/*
 * XREFs of ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x18005835C
 * Callers:
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180057C30 (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(PVOID *a1, unsigned int *a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  char *Heap; // rax
  PVOID v12; // rdi

  if ( *a2 >= a3 )
  {
    return 0;
  }
  else
  {
    v5 = a3 - 1;
    if ( ((unsigned int)v5 & a3) != 0 )
    {
      v6 = v5 | ((unsigned __int64)(unsigned int)v5 >> 1) | ((v5 | ((unsigned __int64)(unsigned int)v5 >> 1)) >> 2);
      v7 = v6 | (v6 >> 4) | ((v6 | (v6 >> 4)) >> 8);
      v8 = (v7 | (v7 >> 16)) + 1;
    }
    else
    {
      v8 = 2 * a3;
    }
    if ( v8 <= 0xFFFFFFFF && (v9 = 0, v10 = v8, is_mul_ok((unsigned int)v8, 0x10uLL)) )
    {
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, *a1, 16LL * (unsigned int)v8);
      else
        Heap = (char *)HampAllocateHeap(16LL * (unsigned int)v8);
      v12 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * (v10 - *a2));
        *a2 = v10;
        *a1 = v12;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v9;
}
