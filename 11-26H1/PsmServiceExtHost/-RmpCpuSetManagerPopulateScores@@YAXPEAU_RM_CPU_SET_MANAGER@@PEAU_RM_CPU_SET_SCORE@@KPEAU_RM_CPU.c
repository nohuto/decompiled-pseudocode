/*
 * XREFs of ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180085D80
 * Callers:
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x180086174 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 * Callees:
 *     ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x180085600 (-RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z.c)
 *     ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180085EF0 (-RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SE.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall RmpCpuSetManagerPopulateScores(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_SCORE *a2,
        unsigned int a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _KAFFINITY_EX *a5,
        struct _SYSTEM_CPU_SET_INFORMATION *a6,
        unsigned int a7)
{
  __int64 v9; // r15
  _DWORD *v12; // rbx
  unsigned __int64 *v13; // r11
  unsigned int v14; // r12d
  char v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r10d
  __int64 v21; // r11
  struct _KAFFINITY_EX *v22; // r10
  _QWORD *v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v28 = 0;
  memset_0(a2, 0, 16LL * a3);
  v12 = (_DWORD *)((char *)a4 + 268);
  if ( a6 )
  {
    RmpCpuSetManagerPopulateScoresFromCpuSetInformation(a1, a2, a3, a4, a6, a7);
  }
  else
  {
    v13 = (unsigned __int64 *)((char *)a1 + 344);
    v14 = 0;
    v15 = (*v12 & 2) != 0;
    do
    {
      v16 = *v13;
      while ( RmpCpuSetManagerGetNextCandidateIndex(&v28, v16, v15) )
      {
        v17 = v28;
        v16 = v19 & ~(1LL << v28);
        v18 = 2LL * v14++;
        *((_DWORD *)a2 + 2 * v18) = v20;
        *((_DWORD *)a2 + 2 * v18 + 1) = v17;
      }
      v13 = (unsigned __int64 *)(v21 + 8);
    }
    while ( (unsigned int)(v20 + 1) < 0x20 );
  }
  if ( a3 )
  {
    v22 = a5;
    v23 = (_QWORD *)((char *)a2 + 8);
    do
    {
      v24 = *((_DWORD *)a4 + 66);
      if ( v24 )
      {
        if ( (v24 & 1) == 0
          || (v25 = *((_QWORD *)a4 + *((unsigned int *)v23 - 2) + 1), _bittest64(&v25, *((unsigned int *)v23 - 1))) )
        {
          *v23 |= 0x80000000uLL;
        }
      }
      v26 = *v23 | 1LL;
      *v23 = v26;
      if ( (*(_BYTE *)v12 & 1) != 0 && *(_WORD *)v22 && *((_DWORD *)v23 - 2) < (unsigned int)*(unsigned __int16 *)v22 )
      {
        v27 = *((_QWORD *)v22 + *((unsigned int *)v23 - 2) + 1);
        if ( _bittest64(&v27, *((unsigned int *)v23 - 1)) )
          *v23 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v23 += 2;
      --v9;
    }
    while ( v9 );
  }
}
