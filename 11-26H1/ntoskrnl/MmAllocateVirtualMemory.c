/*
 * XREFs of MmAllocateVirtualMemory @ 0x1409EEA70
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     sub_1409ED914 @ 0x1409ED914 (sub_1409ED914.c)
 *     NtAllocateVirtualMemoryEx @ 0x1409EEA10 (NtAllocateVirtualMemoryEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1409EEE14 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409EF464 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(
        int a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        int a5,
        volatile void *Address,
        int a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 ULong64FromUser; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  int MapExtendedParameters; // ebx
  __int64 v19; // r8
  int VirtualMemory; // eax
  unsigned __int64 v22; // [rsp+70h] [rbp-128h] BYREF
  __int64 v23; // [rsp+78h] [rbp-120h] BYREF
  __int64 v24; // [rsp+80h] [rbp-118h]
  __int64 v25; // [rsp+88h] [rbp-110h]
  PVOID Object; // [rsp+90h] [rbp-108h] BYREF
  __int64 v27; // [rsp+98h] [rbp-100h] BYREF
  _QWORD v28[3]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-E0h]
  int v30; // [rsp+DCh] [rbp-BCh]
  int v31; // [rsp+E0h] [rbp-B8h]
  __int64 *v32; // [rsp+E8h] [rbp-B0h]
  _BYTE v33[24]; // [rsp+120h] [rbp-78h] BYREF
  __int64 v34; // [rsp+138h] [rbp-60h]
  char v35; // [rsp+150h] [rbp-48h]

  memset_0(v33, 0, 0x48uLL);
  v24 = 0LL;
  v25 = 0LL;
  if ( a8 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, ULong64FromUser);
    v15 = RtlReadULong64FromUser(a3);
    RtlWriteULong64ToUser(a3, v15);
    v17 = RtlReadULong64FromUser(a2);
  }
  else
  {
    v17 = *a2;
  }
  v24 = v17;
  if ( a8 )
    v16 = RtlReadULong64FromUser(a3);
  else
    v16 = *a3;
  v25 = v16;
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, v33);
  if ( MapExtendedParameters < 0 )
    return (unsigned int)MapExtendedParameters;
  memset_0(v28, 0, 0x80uLL);
  v23 = 0LL;
  Object = 0LL;
  v22 = 0LL;
  MapExtendedParameters = MiAllocateVirtualMemoryPrepare(
                            a1,
                            v17,
                            0,
                            v16,
                            a4,
                            a5,
                            (__int64)v33,
                            a8,
                            a9,
                            a10,
                            a11,
                            (__int64)v28,
                            (__int64)&Object);
  if ( MapExtendedParameters >= 0 )
  {
    if ( v34 )
    {
      if ( v34 == -3 )
      {
        v22 = 1LL;
      }
      else
      {
        LOBYTE(v19) = a8;
        MapExtendedParameters = PsReferencePartitionByHandle(v34, 2LL, v19, 1633054029LL, &v22);
        if ( MapExtendedParameters < 0 )
          goto LABEL_15;
      }
    }
    if ( v35 && (a4 & 0x20400000) != 0x400000 )
    {
      MapExtendedParameters = -1073741811;
LABEL_30:
      if ( v28[0] )
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[60];
      else
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[56];
      goto LABEL_16;
    }
    if ( a9 < 0 )
    {
      v27 = 0LL;
      if ( (v30 & 0x40000000) != 0 )
      {
        v32 = &v27;
        v31 = 536870913;
      }
      VirtualMemory = MiAllocateVirtualMemory((unsigned int)v28, 0, 0, 0, (__int64)&v23);
      v32 = 0LL;
      v31 = 0;
      MapExtendedParameters = 0;
      if ( VirtualMemory < 0 )
        MapExtendedParameters = VirtualMemory;
    }
    else
    {
      MapExtendedParameters = MiAllocateVirtualMemory((unsigned int)v28, v22, 0, 0, (__int64)&v23);
    }
    if ( MapExtendedParameters < 0 )
      goto LABEL_30;
    v17 = v23;
    v24 = v23;
    v16 = v29;
    v25 = v29;
  }
LABEL_15:
  if ( MapExtendedParameters < 0 )
    goto LABEL_30;
LABEL_16:
  if ( v22 >= 2 )
    PsDereferencePartition(v22);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  LODWORD(v22) = MapExtendedParameters;
  if ( MapExtendedParameters >= 0 )
  {
    if ( a8 )
      RtlWriteULong64ToUser(a2, v17);
    else
      *a2 = v17;
    if ( a8 )
      RtlWriteULong64ToUser(a3, v16);
    else
      *a3 = v16;
  }
  return (unsigned int)MapExtendedParameters;
}
