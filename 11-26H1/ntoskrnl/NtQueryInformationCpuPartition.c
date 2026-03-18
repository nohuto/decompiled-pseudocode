/*
 * XREFs of NtQueryInformationCpuPartition @ 0x1407F1ED0
 * Callers:
 *     DifNtQueryInformationCpuPartitionWrapper @ 0x1406828B0 (DifNtQueryInformationCpuPartitionWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeQueryMaximumGroupCount @ 0x1404BB300 (KeQueryMaximumGroupCount.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F3D38 (KeQueryCpuPartitionAffinity.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F2CB4 (PspReferenceCpuPartitionByHandle.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryInformationCpuPartition(
        ULONG_PTR a1,
        int a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  SIZE_T v5; // r12
  void *v8; // rbx
  unsigned int v9; // r14d
  char PreviousMode; // r15
  int ULongFromUser; // eax
  int CpuPartitionAffinity; // esi
  USHORT v14; // r12
  USHORT MaximumGroupCount; // si
  void *Pool2; // rax
  unsigned int v17[4]; // [rsp+30h] [rbp-48h] BYREF
  void *v18; // [rsp+40h] [rbp-38h]
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF

  v5 = a4;
  Object = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v9 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
    return 3221225475LL;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
    ProbeForWrite(a3, v5, 8u);
  }
  CpuPartitionAffinity = PspReferenceCpuPartitionByHandle(a1, (__int64)&Object);
  if ( CpuPartitionAffinity >= 0 )
  {
    if ( (unsigned int)v5 < 0x10 || (v5 & 0xF) != 0 )
    {
      CpuPartitionAffinity = -1073741811;
    }
    else
    {
      v14 = (unsigned __int16)v5 >> 4;
      MaximumGroupCount = KeQueryMaximumGroupCount();
      if ( v14 < MaximumGroupCount )
        MaximumGroupCount = v14;
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v8 = Pool2;
      v18 = Pool2;
      if ( Pool2 )
      {
        LOWORD(v17[0]) = 0;
        CpuPartitionAffinity = KeQueryCpuPartitionAffinity(
                                 *(struct _KAFFINITY_EX ***)Object,
                                 Pool2,
                                 MaximumGroupCount,
                                 (unsigned __int16 *)v17);
        v9 = 16 * LOWORD(v17[0]);
        v17[0] = v9;
        if ( CpuPartitionAffinity >= 0 )
        {
          if ( PreviousMode )
            RtlCopyToUser((void *)a3, v8, v9);
          else
            memmove((void *)a3, v8, v9);
        }
      }
      else
      {
        CpuPartitionAffinity = -1073741670;
      }
    }
  }
  if ( PreviousMode )
    RtlWriteULongToUser(a5, v9);
  else
    *a5 = v9;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x50707350u);
  return (unsigned int)CpuPartitionAffinity;
}
