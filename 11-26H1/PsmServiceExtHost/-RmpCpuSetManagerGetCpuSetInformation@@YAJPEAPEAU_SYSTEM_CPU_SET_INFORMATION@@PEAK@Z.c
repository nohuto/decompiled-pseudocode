/*
 * XREFs of ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180085544
 * Callers:
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800857A0 (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x180086174 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerGetCpuSetInformation(struct _SYSTEM_CPU_SET_INFORMATION **a1, unsigned int *a2)
{
  struct _SYSTEM_CPU_SET_INFORMATION *Heap; // rbx
  int i; // eax
  int v6; // eax
  unsigned int v7; // edi
  unsigned __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  Heap = 0LL;
  LODWORD(v9) = 0;
  for ( i = 0; ; i = v9 )
  {
    v10 = 0LL;
    v6 = NtQuerySystemInformationEx(175LL, &v10, 8LL, Heap, i, &v9);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v9;
      *a1 = Heap;
      return v7;
    }
    if ( v6 != -1073741789 )
      break;
    if ( Heap )
      HampFreeHeap(Heap);
    Heap = (struct _SYSTEM_CPU_SET_INFORMATION *)HampAllocateHeap((unsigned int)v9);
    if ( !Heap )
      return (unsigned int)-1073741801;
  }
  if ( Heap )
    HampFreeHeap(Heap);
  return v7;
}
