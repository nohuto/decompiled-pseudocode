/*
 * XREFs of ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x14010131C
 * Callers:
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::FaultAllDemotableAllocations(
        _BYTE *a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        _BYTE *a9)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 result; // rax
  _QWORD **v14; // r12
  _QWORD *v15; // rsi
  struct VIDMM_ALLOC *v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx

  v10 = a4;
  v11 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    WdLogGlobalForLineNumber = 1346;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40320LL) + 8 * v11) + 1752LL) + 8 * v10);
  result = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8 * v11);
  v14 = (_QWORD **)(*(_QWORD *)(result + 16) + 56 * v10 + 32);
  v15 = *v14;
  while ( v15 != v14 )
  {
    v16 = (struct VIDMM_ALLOC *)(v15 - 7);
    v15 = (_QWORD *)*v15;
    v17 = **(__int64 ***)v16;
    v18 = *v17;
    result = *((unsigned int *)v17 + 6);
    if ( (result & 1) != 0 )
    {
      if ( a5 != 7
        || (*(_BYTE *)(v12 + 66) & 1) == 0
        || (v20 = *(_QWORD *)(v18 + 72), v21 = *(_QWORD *)(v12 + 48), v20 < v21)
        || *(_QWORD *)(v18 + 16) + v20 > *(_QWORD *)(v12 + 56) + v21 )
      {
        v19 = *(_DWORD *)(v18 + 48);
        if ( v19 <= a6 )
        {
          if ( (a1[312] & 7) == 0 )
            VIDMM_DEVICE::PartiallySuspend((VIDMM_DEVICE *)a1);
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)a1, v16);
          v22 = *(_QWORD *)(v18 + 16);
          *a9 = 1;
          result = *a8;
          if ( v22 >= *a8 )
          {
            *a8 = 0LL;
            return result;
          }
          result -= v22;
          *a8 = result;
        }
        else
        {
          result = *a7;
          if ( (_DWORD)result )
          {
            if ( (unsigned int)result >= v19 )
              result = v19;
            *a7 = result;
          }
          else
          {
            *a7 = v19;
          }
        }
      }
    }
  }
  return result;
}
