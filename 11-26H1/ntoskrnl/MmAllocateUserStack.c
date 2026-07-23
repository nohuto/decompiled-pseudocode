/*
 * XREFs of MmAllocateUserStack @ 0x1409EE7D8
 * Callers:
 *     PspReserveAndCommitUserShadowStack @ 0x1409EE630 (PspReserveAndCommitUserShadowStack.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409EF464 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MmAllocateUserStack(__int64 *a1, int a2, __int64 *a3, int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  int VirtualMemoryPrepare; // ebx
  int VirtualMemory; // eax
  int v16; // eax
  unsigned __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  __int64 v18; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v20[7]; // [rsp+98h] [rbp-70h] BYREF
  int v21; // [rsp+D4h] [rbp-34h]
  int v22; // [rsp+D8h] [rbp-30h]
  unsigned __int64 *v23; // [rsp+E0h] [rbp-28h]
  _BYTE v24[24]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v25; // [rsp+130h] [rbp+28h]
  int v26; // [rsp+138h] [rbp+30h]
  char v27; // [rsp+148h] [rbp+40h]

  memset_0(v24, 0, 0x48uLL);
  v26 = a4;
  v9 = a5 != 0 ? -1073741824 : 0x80000000;
  if ( (v9 & 0x40000000) != 0 && (MiFlags & 0x4000000) == 0 )
    return 3221225659LL;
  memset_0(v20, 0, 0x80uLL);
  v10 = *a3;
  v11 = *a1;
  v12 = 0LL;
  v18 = 0LL;
  Object[0] = 0LL;
  v17 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           -1,
                           v11,
                           a2,
                           v10,
                           0x2000,
                           a5 != 0 ? 2 : 4,
                           (__int64)v24,
                           0,
                           v9,
                           0,
                           0LL,
                           (__int64)v20,
                           (__int64)Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_16;
  if ( v25 )
  {
    if ( v25 == -3 )
    {
      v12 = 1LL;
    }
    else
    {
      v16 = PsReferencePartitionByHandle(v25, 2LL, 0LL, 1633054029LL, &v17);
      v12 = v17;
      VirtualMemoryPrepare = v16;
      if ( v16 < 0 )
      {
LABEL_16:
        if ( v20[0] )
          ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[60];
        else
          ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[56];
        goto LABEL_11;
      }
    }
  }
  if ( v27 )
  {
    VirtualMemoryPrepare = -1073741811;
    goto LABEL_16;
  }
  v17 = 0LL;
  if ( (v21 & 0x40000000) != 0 )
  {
    v22 = 536870913;
    v23 = &v17;
  }
  VirtualMemory = MiAllocateVirtualMemory((unsigned int)v20, 0, 0, 0, (__int64)&v18);
  v23 = 0LL;
  v22 = 0;
  VirtualMemoryPrepare = 0;
  if ( VirtualMemory < 0 )
    VirtualMemoryPrepare = VirtualMemory;
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_16;
  *a1 = v18;
  *a3 = v20[3];
LABEL_11:
  if ( v12 >= 2 )
    PsDereferencePartition(v12);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}
