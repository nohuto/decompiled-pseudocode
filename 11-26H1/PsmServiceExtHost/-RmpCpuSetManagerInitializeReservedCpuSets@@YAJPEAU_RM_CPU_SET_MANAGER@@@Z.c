/*
 * XREFs of ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800857A0
 * Callers:
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800847B8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180085544 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerInitializeReservedCpuSets(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // eax
  _BYTE *v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // r10d
  __int64 i; // r8
  unsigned __int64 v7; // rdx
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v10 = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&v10, &v9);
  v3 = v10;
  v4 = CpuSetInformation;
  if ( CpuSetInformation >= 0 )
  {
    memset_0((char *)a1 + 600, 0, 0x100uLL);
    v5 = v9;
    for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(*(_DWORD *)&v3[i] + i) )
    {
      if ( !*(_DWORD *)&v3[i + 4] && (v3[i + 19] & 2) != 0 )
      {
        v7 = (unsigned __int64)(unsigned int)(*(_DWORD *)&v3[i + 8] - 256) >> 16;
        *((_QWORD *)a1 + v7 + 75) |= 1LL << v3[i + 8];
      }
    }
    v4 = 0;
  }
  if ( v3 )
    HampFreeHeap(v3);
  return v4;
}
