/*
 * XREFs of ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400B5BF0
 * Callers:
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 * Callees:
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400FA25C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(
        VIDMM_SEGMENT *this,
        __int64 a2,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a3,
        char a4,
        char a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // r12
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 result; // rax
  unsigned int v16; // eax
  unsigned __int64 v17; // r14
  char v18; // bp
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r10
  int (*v22)(VIDMM_SEGMENT *__hidden, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, bool *, void *); // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  int (*v25)(VIDMM_SEGMENT *__hidden, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, bool *, void *); // [rsp+60h] [rbp-58h] BYREF
  int v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v28; // [rsp+70h] [rbp-48h] BYREF
  __int64 v29; // [rsp+78h] [rbp-40h]
  union _LARGE_INTEGER v30; // [rsp+C8h] [rbp+10h] BYREF
  char v31; // [rsp+D0h] [rbp+18h] BYREF
  char v32; // [rsp+D8h] [rbp+20h]

  v32 = a4;
  v5 = *((unsigned int *)a3 + 8);
  v7 = *((_QWORD *)a3 + 2);
  v9 = ~(v5 - 1);
  v10 = a2 & v9;
  if ( (a2 & (unsigned __int64)v9) < v7 || v10 - v7 <= *((_QWORD *)this + 6) )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    v11 = -1073741801;
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41328LL), Executive, 0, 0, 0LL);
    if ( !*((_QWORD *)this + 55) )
    {
      v12 = *((_QWORD *)this + 59);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 53);
        v14 = v13 - v12;
        result = VIDMM_LINEAR_POOL::Allocate(
                   *((VIDMM_LINEAR_POOL **)this + 32),
                   v12,
                   1u,
                   0,
                   v13 - v12,
                   v13,
                   v32,
                   a5,
                   0LL,
                   &v30,
                   (void **)this + 58);
        v11 = result;
        if ( (int)result < 0 )
          return result;
        v10 = v14 & v9;
      }
    }
    v16 = v5;
    v17 = v9 & (v10 - v7) & ~*((_QWORD *)this + 51);
    v18 = a5;
    if ( (unsigned int)v5 <= *((_DWORD *)this + 104) )
      v16 = *((_DWORD *)this + 104);
    if ( !(v7 % v16) )
      v11 = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)this + 32),
              v7,
              v5,
              0,
              v17,
              v10,
              v32,
              a5,
              a3,
              (union _LARGE_INTEGER *)a3 + 15,
              (void **)a3 + 14);
    if ( v11 < 0 )
    {
      v19 = *((_QWORD *)this + 1);
      v20 = *(_QWORD *)(v19 + 24);
      if ( (*(_DWORD *)(352LL * *((unsigned __int16 *)this + 34) + *(_QWORD *)(v20 + 3032) + 16) & 4) != 0 )
      {
        v21 = *((_QWORD *)this + 32);
        v29 = *((_QWORD *)this + 54);
        LOBYTE(v30.LowPart) = 0;
        v28 = v17;
        if ( !*(_BYTE *)(v20 + 3096)
          || (v22 = VIDMM_SEGMENT::ReserveOutsideRangeCB,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 744LL) + 160LL) != 1) )
        {
          v22 = VIDMM_SEGMENT::ReserveOutsideRangeNoDisplayingCB;
        }
        v25 = v22;
        v27 = HIDWORD(v29);
        v26 = 0;
        v11 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                v21,
                v17,
                v10,
                0,
                (__int64)&v25,
                (__int64)this,
                (__int64)&v28,
                (__int64)&v31,
                (__int64)&v30);
        if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 6984LL) & 0x80000) != 0 )
        {
          v11 = -1073741823;
        }
        else if ( v11 >= 0 )
        {
          v11 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 32),
                  v7,
                  v5,
                  0,
                  v17,
                  v10,
                  v32,
                  v18,
                  a3,
                  (union _LARGE_INTEGER *)a3 + 15,
                  (void **)a3 + 14);
          if ( v11 >= 0 )
            return (unsigned int)v11;
        }
        WdLogSingleEntry1(3LL, v11);
        v23 = *((_QWORD *)this + 5);
        v24 = *((_QWORD *)this + 32);
        WdLogGlobalForLineNumber = 1709;
        VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(v24, 0LL, v23, 0LL);
      }
    }
  }
  return (unsigned int)v11;
}
