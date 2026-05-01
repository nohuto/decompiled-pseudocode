/*
 * XREFs of ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086AE4
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180006CE0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800083CC (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18005F0EC (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180085B84 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 */

void __fastcall RmpCpuSetManagerSweepInvalidAllocations(struct _RM_CPU_SET_MANAGER *a1)
{
  __int64 v2; // rbp
  char v3; // r15
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _RM_OBJECT_HEADER *Next; // rbx
  _BYTE v9[56]; // [rsp+20h] [rbp-38h] BYREF

  memset(v9, 0, 32);
  RmpObjectTableEnumerationBegin(
    (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v9);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v9);
    if ( !Next )
      break;
    v2 = 0LL;
    v3 = 0;
    v4 = 32LL;
    do
    {
      v5 = *(_QWORD *)((_BYTE *)Next + v2 + 104) & ~*(_QWORD *)((char *)a1 + v2 + 88);
      if ( v5 )
      {
        v3 = 1;
        *(_QWORD *)((char *)Next + v2 + 104) &= ~v5;
        *((_DWORD *)Next + 90) -= RtlNumberOfSetBitsUlongPtr(v5, v6, v7);
      }
      v2 += 8LL;
      --v4;
    }
    while ( v4 );
    if ( v3 )
      RmpCpuSetManagerInvalidateAllocation(a1, Next);
    RmpObjectRelease((char *)Next);
  }
  RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v9);
  RmpCpuSetManagerApplyAllPolicyChanges(a1);
}
