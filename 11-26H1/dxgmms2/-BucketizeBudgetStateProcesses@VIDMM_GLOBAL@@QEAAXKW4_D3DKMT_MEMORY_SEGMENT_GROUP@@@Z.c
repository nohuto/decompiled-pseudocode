/*
 * XREFs of ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@QEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400C6324
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400C6224 (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::BucketizeBudgetStateProcesses(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  char *v3; // r11
  __int64 v4; // rsi
  char *v5; // r9
  __int64 v7; // rbp
  VIDMM_PROCESS *v8; // r10
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rax

  v3 = (char *)this + 41264;
  v4 = a3;
  v5 = (char *)*((_QWORD *)this + 5158);
  v7 = a2;
  while ( v5 != v3 )
  {
    v8 = (VIDMM_PROCESS *)*((_QWORD *)v5 - 3);
    if ( *((_QWORD *)v8 + 9) && v8 != g_pVidMmSystemProcess )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v7);
      if ( (*(_BYTE *)(v9 + 24 * v4 + 632) & 1) != 0 )
        v10 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                        + *(_QWORD *)(*((_QWORD *)v8 + 42) + 40LL)
                        + 24)
            + 344 * v7;
      else
        v10 = 344 * v4 + v9 + 664;
      v11 = (__int64 *)(v5 + 32);
      v12 = v10 + 16 * ((unsigned __int8)v5[138] + 9LL);
      v13 = *(__int64 ***)(v12 + 8);
      if ( *v13 != (__int64 *)v12 )
        __fastfail(3u);
      *v11 = v12;
      *((_QWORD *)v5 + 5) = v13;
      *v13 = v11;
      *(_QWORD *)(v12 + 8) = v11;
      *(_DWORD *)(v10 + 4LL * (unsigned __int8)v5[138] + 324) += dword_1400604E0[(unsigned __int8)v5[136]];
    }
    v5 = *(char **)v5;
  }
}
