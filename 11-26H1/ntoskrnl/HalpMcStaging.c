/*
 * XREFs of HalpMcStaging @ 0x140593950
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     HalpMcStagePayload @ 0x1405938EC (HalpMcStagePayload.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 HalpMcStaging()
{
  char v0; // r14
  NTSTATUS i; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Pool2; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v3; // rdi
  ULONG v4; // esi
  unsigned __int64 v5; // rcx
  LARGE_INTEGER v6; // rax
  __int64 Size; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+60h] [rbp+20h] BYREF

  Length = 0;
  v0 = 0;
  Affinity = 0LL;
  i = KeQueryLogicalProcessorRelationship(0LL, RelationProcessorPackage, 0LL, &Length);
  if ( i == -1073741820 && Length )
  {
    Pool2 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x100uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      v4 = 0;
      for ( i = KeQueryLogicalProcessorRelationship(0LL, RelationProcessorPackage, Pool2, &Length);
            v4 < Length;
            v3 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v3 + Size) )
      {
        _BitScanForward64(&v5, v3->Processor.GroupMask[0].Mask);
        Affinity.Group = v3->Processor.GroupMask[0].Group;
        Affinity.Mask = 1LL << v5;
        if ( v0 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v0 = 1;
        }
        v6.QuadPart = __readmsr(0x7A5u);
        if ( i < 0 )
          break;
        HalpMcStagePayload(v6);
        Size = v3->Size;
        v4 += Size;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)i;
}
