/*
 * XREFs of VmpFreeMemoryRanges @ 0x140B020AC
 * Callers:
 *     VmpSplitMemoryRange @ 0x1404C2504 (VmpSplitMemoryRange.c)
 *     VmpInsertMemoryRange @ 0x1404D1D84 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14050AC9C (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x140513450 (VmpMergeMemoryRanges.c)
 *     VmCreateMemoryRange @ 0x140821FF0 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x1408222A0 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x140B01FC0 (VmpAllocateMemoryRanges.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VmpFreeMemoryRanges(struct _PRIVILEGE_SET **P)
{
  struct _PRIVILEGE_SET **v2; // rbx
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rax

  v2 = P + 5;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _PRIVILEGE_SET *)v2 )
      break;
    if ( (struct _PRIVILEGE_SET **)v3->Privilege[0].Luid != v2
      || (v4 = *(_QWORD *)&v3->PrivilegeCount, *(struct _PRIVILEGE_SET **)(*(_QWORD *)&v3->PrivilegeCount + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *v2 = (struct _PRIVILEGE_SET *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    CmSiFreeMemory(v3);
  }
  ExFreePoolWithTag(P, 0);
}
