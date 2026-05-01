/*
 * XREFs of ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x180086174
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180084594 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180085544 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180085D80 (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerRankCpuSets(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        struct _RM_CPU_SET_SCORE **a3,
        unsigned int *a4)
{
  rsize_t v4; // r14
  unsigned int v5; // ebx
  unsigned int v9; // ebp
  struct _SYSTEM_CPU_SET_INFORMATION *v10; // rdi
  struct _RM_CPU_SET_SCORE *Heap; // r15
  unsigned int *v12; // rax
  unsigned int v14; // [rsp+40h] [rbp-188h] BYREF
  struct _SYSTEM_CPU_SET_INFORMATION *v15; // [rsp+48h] [rbp-180h] BYREF
  unsigned int *v16; // [rsp+50h] [rbp-178h]
  _BYTE SystemInformation[272]; // [rsp+60h] [rbp-168h] BYREF

  v4 = *((unsigned int *)a1 + 350);
  v5 = 0;
  v16 = a4;
  v14 = 0;
  v15 = 0LL;
  v9 = 0;
  v10 = 0LL;
  Heap = (struct _RM_CPU_SET_SCORE *)HampAllocateHeap(16LL * (unsigned int)v4);
  if ( Heap )
  {
    memset_0(SystemInformation, 0, 0x108uLL);
    if ( (*((_BYTE *)a2 + 268) & 1) != 0
      && NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0x108u, 0LL) < 0 )
    {
      memset_0(SystemInformation, 0, 0x108uLL);
    }
    if ( (*((_BYTE *)a2 + 268) & 4) != 0 )
    {
      RmpCpuSetManagerGetCpuSetInformation(&v15, &v14);
      v9 = v14;
      v10 = v15;
    }
    RmpCpuSetManagerPopulateScores(a1, Heap, v4, a2, (struct _KAFFINITY_EX *)SystemInformation, v10, v9);
    qsort_s(Heap, v4, 0x10uLL, (_CoreCrtSecureSearchSortCompareFunction)RmpCpuSetManagerCompareScores, a2);
    v12 = v16;
    *a3 = Heap;
    *v12 = v4;
    if ( v10 )
      HampFreeHeap(v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
