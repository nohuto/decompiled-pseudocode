/*
 * XREFs of ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x180049EA8
 * Callers:
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180049DE0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpReallocateHeap@@YAPEAXPEAX_K@Z @ 0x180049F94 (-RmpReallocateHeap@@YAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_HAM_TERMINATION_HOST_BLOCK>(void **a1, unsigned int *a2, unsigned int a3)
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
        Heap = (char *)RmpReallocateHeap(*a1, 16LL * (unsigned int)v8);
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
