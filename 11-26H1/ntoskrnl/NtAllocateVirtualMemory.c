/*
 * XREFs of NtAllocateVirtualMemory @ 0x1409EF150
 * Callers:
 *     DifNtAllocateVirtualMemoryWrapper @ 0x14066F600 (DifNtAllocateVirtualMemoryWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409EF464 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  int v7; // ebx
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // r14
  void *v13; // r15
  NTSTATUS VirtualMemoryPrepare; // ebx
  __int64 v15; // r8
  unsigned __int64 v17; // [rsp+78h] [rbp-120h] BYREF
  void *v18; // [rsp+80h] [rbp-118h] BYREF
  void *v19; // [rsp+88h] [rbp-110h]
  ULONG_PTR v20; // [rsp+90h] [rbp-108h]
  PVOID Object; // [rsp+98h] [rbp-100h] BYREF
  _BYTE v22[24]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-E0h]
  ULONG v24; // [rsp+C0h] [rbp-D8h]
  char v25; // [rsp+D0h] [rbp-C8h]
  _QWORD v26[3]; // [rsp+F0h] [rbp-A8h] BYREF
  ULONG_PTR v27; // [rsp+108h] [rbp-90h]
  int v28; // [rsp+1A0h] [rbp+8h]

  v28 = (int)ProcessHandle;
  v7 = ZeroBits;
  v19 = 0LL;
  v20 = 0LL;
  memset_0(v22, 0, 0x48uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(BaseAddress);
    RtlWriteULong64ToUser(BaseAddress, ULong64FromUser);
    v11 = RtlReadULong64FromUser(RegionSize);
    RtlWriteULong64ToUser(RegionSize, v11);
    v13 = (void *)RtlReadULong64FromUser(BaseAddress);
  }
  else
  {
    v13 = *BaseAddress;
  }
  v19 = v13;
  if ( PreviousMode )
    v12 = RtlReadULong64FromUser(RegionSize);
  else
    v12 = *RegionSize;
  v20 = v12;
  v24 = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  memset_0(v26, 0, 0x80uLL);
  v18 = 0LL;
  Object = 0LL;
  v17 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           v28,
                           (_DWORD)v13,
                           v7,
                           v12,
                           AllocationType & 0xFFFFFF80,
                           Protect,
                           (__int64)v22,
                           PreviousMode,
                           0,
                           0,
                           0LL,
                           (__int64)v26,
                           (__int64)&Object);
  if ( VirtualMemoryPrepare >= 0 )
  {
    if ( v23 )
    {
      if ( v23 == -3 )
      {
        v17 = 1LL;
      }
      else
      {
        LOBYTE(v15) = PreviousMode;
        VirtualMemoryPrepare = PsReferencePartitionByHandle(v23, 2LL, v15, 1633054029LL, &v17);
        if ( VirtualMemoryPrepare < 0 )
          goto LABEL_13;
      }
    }
    if ( v25 && (AllocationType & 0x20400000) != 0x400000 )
    {
      VirtualMemoryPrepare = -1073741811;
LABEL_29:
      if ( v26[0] )
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[60];
      else
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[56];
      goto LABEL_14;
    }
    VirtualMemoryPrepare = MiAllocateVirtualMemory((unsigned int)v26, v17, 0, 0, (__int64)&v18);
    if ( VirtualMemoryPrepare >= 0 )
    {
      v13 = v18;
      v19 = v18;
      v12 = v27;
      v20 = v27;
    }
  }
LABEL_13:
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_29;
LABEL_14:
  if ( v17 >= 2 )
    PsDereferencePartition(v17);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( VirtualMemoryPrepare >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(BaseAddress, (__int64)v13);
    else
      *BaseAddress = v13;
    if ( PreviousMode )
      RtlWriteULong64ToUser(RegionSize, v12);
    else
      *RegionSize = v12;
  }
  return VirtualMemoryPrepare;
}
