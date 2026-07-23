/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x140345D88
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CEAAC (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x1403460B4 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpCheckTermination @ 0x1403460E4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpWriteBuffer @ 0x140346114 (IopLiveDumpWriteBuffer.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     RtlpComputeCrcInternal @ 0x140481430 (RtlpComputeCrcInternal.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404DDEB4 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x1405D1D0C (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpWriteSecondaryData @ 0x1405D6154 (IopLiveDumpWriteSecondaryData.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x1405D8E70 (SecureDump_Get_SecureDumpHeader.c)
 *     IopLiveDumpTraceChunkCRCMismatchWrite @ 0x1405DA0F0 (IopLiveDumpTraceChunkCRCMismatchWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFile(__int64 a1)
{
  void *v1; // r12
  __int64 v2; // rbx
  LARGE_INTEGER *v3; // r15
  void *v4; // r13
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int SecureDumpHeader; // r14d
  ULONG v10; // r12d
  ULONG_PTR v11; // rcx
  struct _MDL *v12; // r14
  struct _MDL *v13; // r14
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rbx
  __int128 v24; // xmm0
  __int64 v25; // rdx
  struct _MDL *Next; // r12
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  struct _MDL *v29; // r12
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  int v32; // ecx
  __int128 v33; // xmm0
  HANDLE v34; // r12
  int v35; // ecx
  __int64 Pool2; // rax
  ULONG v37; // r8d
  unsigned __int8 v38; // [rsp+38h] [rbp-59h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-51h] BYREF
  __int64 v40; // [rsp+48h] [rbp-49h]
  HANDLE FileHandle; // [rsp+50h] [rbp-41h]
  struct _KTHREAD *v42; // [rsp+58h] [rbp-39h]
  __int64 v43; // [rsp+60h] [rbp-31h]
  __int128 v44; // [rsp+68h] [rbp-29h] BYREF
  __int128 v45; // [rsp+78h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-9h]
  __int128 v47; // [rsp+90h] [rbp-1h] BYREF
  __int128 v48; // [rsp+A0h] [rbp+Fh]
  __int64 v49; // [rsp+B0h] [rbp+1Fh]

  v1 = *(void **)(a1 + 64);
  v2 = a1 + 680;
  v3 = *(LARGE_INTEGER **)(a1 + 560);
  v4 = 0LL;
  v43 = 0LL;
  v38 = 0;
  v40 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  FileHandle = v1;
  v48 = 0LL;
  if ( *(_BYTE *)(a1 + 984) )
    v6.QuadPart = v3[1028].QuadPart + *(unsigned int *)(a1 + 992);
  else
    v6 = v3[1028];
  ByteOffset = v6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  while ( v7 < *(_QWORD *)(v2 + 56) )
  {
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_20;
    if ( v7 >= *(_QWORD *)(v2 + 56) - 1LL )
      v10 = *(_DWORD *)(v2 + 40) << 12;
    else
      v10 = BufferChunkSizeInBytes;
    if ( (unsigned __int8)IopLiveDumpShouldCheckChunkCRC(v2, v7) )
      v40 = RtlpComputeCrcInternal(*(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v7), v10, 0LL, &Crc64Ctrl);
    SecureDumpHeader = IopLiveDumpWriteBuffer(
                         FileHandle,
                         *(PVOID *)(*(_QWORD *)(v2 + 72) + 8 * v7),
                         v10,
                         &ByteOffset,
                         a1,
                         0);
    if ( (unsigned __int8)IopLiveDumpShouldCheckChunkCRC(v2, v7) )
    {
      v16 = v40;
      if ( *(_QWORD *)(*(_QWORD *)(v2 + 200) + 8 * v7) == v40 )
      {
        v38 = 1;
        v16 = RtlpComputeCrcInternal(*(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v7), v10, 0LL, &Crc64Ctrl);
        v40 = v16;
      }
      v25 = *(_QWORD *)(*(_QWORD *)(v2 + 200) + 8 * v7);
      if ( v25 != v16 )
        IopLiveDumpTraceChunkCRCMismatchWrite(v7, v25, v38, v16, v10, ByteOffset.QuadPart);
    }
    if ( SecureDumpHeader < 0 )
      goto LABEL_20;
    v11 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v7);
    if ( v11 )
    {
      MiFreePagesFromMdl(v11);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v2 + 80) + 8 * v7), 0x706D644Cu);
      *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v7) = 0LL;
      v14 = *(_QWORD *)(v2 + 80);
      goto LABEL_16;
    }
    v12 = *(struct _MDL **)(v2 + 136);
    if ( v12 && (v17 = *(_QWORD *)(v2 + 128)) != 0 && (v18 = *(_QWORD *)(v2 + 120), v7 >= v18) )
    {
      if ( v7 - v18 + 1 == v17 )
      {
        do
        {
          Next = v12->Next;
          if ( (v12->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v12->MappedSystemVa, v12);
          ExFreePoolWithTag(v12, 0x706D644Cu);
          v12 = Next;
        }
        while ( Next );
        v27 = *(unsigned int *)(v2 + 152);
        *(_QWORD *)(v2 + 136) = 0LL;
        IopLiveDumpFreeIoSpaceRanges(v2 + 144, v27);
        while ( 1 )
        {
          v28 = *(_QWORD *)(v2 + 120);
          if ( v28 > v7 )
            break;
          *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v28) = 0LL;
          ++*(_QWORD *)(v2 + 120);
        }
        *(_QWORD *)(v2 + 128) = 0LL;
      }
    }
    else
    {
      v13 = *(struct _MDL **)(v2 + 176);
      if ( !v13 || (v19 = *(_QWORD *)(v2 + 168)) == 0 || (v20 = *(_QWORD *)(v2 + 160), v7 < v20) )
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v7), BufferChunkSizeInBytes);
        v14 = *(_QWORD *)(v2 + 72);
LABEL_16:
        *(_QWORD *)(v14 + 8 * v7) = 0LL;
        goto LABEL_17;
      }
      if ( v7 - v20 + 1 == v19 )
      {
        do
        {
          v29 = v13->Next;
          if ( (v13->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v13->MappedSystemVa, v13);
          ExFreePoolWithTag(v13, 0x706D644Cu);
          v13 = v29;
        }
        while ( v29 );
        v30 = *(unsigned int *)(v2 + 192);
        *(_QWORD *)(v2 + 176) = 0LL;
        IopLiveDumpFreeIoSpaceRanges(v2 + 184, v30);
        while ( 1 )
        {
          v31 = *(_QWORD *)(v2 + 160);
          if ( v31 > v7 )
            break;
          *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v31) = 0LL;
          ++*(_QWORD *)(v2 + 160);
        }
        *(_QWORD *)(v2 + 168) = 0LL;
      }
    }
LABEL_17:
    CurrentThread = v42;
    ++v7;
  }
  v21 = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544));
  v22 = *(_DWORD *)(a1 + 1088);
  v23 = v21;
  if ( v22 )
  {
    v24 = *(_OWORD *)(a1 + 1064);
    *(_QWORD *)&v45 = *(_QWORD *)(a1 + 1080);
    v46 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v44;
    v44 = v24;
    DWORD2(v45) = v22;
  }
  v32 = *(_DWORD *)(a1 + 1040);
  if ( v32 )
  {
    v33 = *(_OWORD *)(a1 + 1016);
    *(_QWORD *)&v48 = *(_QWORD *)(a1 + 1032);
    v49 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v47;
    v47 = v33;
    DWORD2(v48) = v32;
  }
  v34 = FileHandle;
  SecureDumpHeader = IopLiveDumpWriteSecondaryData(FileHandle, a1);
  if ( SecureDumpHeader >= 0 )
  {
    v3[500].QuadPart = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
    v35 = v3[522].LowPart | 0x10;
    v3[522].LowPart = v35;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
      v3[522].LowPart = v35 | 0x4000;
    v3[1024].LowPart = 1347241043;
    v3[1024].HighPart = 1347245380;
    v3[1029].QuadPart = v23;
    if ( *(_BYTE *)(a1 + 984) )
    {
      ByteOffset.QuadPart = *(unsigned int *)(a1 + 992);
      Pool2 = ExAllocatePool2(0x40uLL);
      v4 = (void *)Pool2;
      if ( !Pool2 )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_20;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v3, Pool2, *(unsigned int *)(a1 + 992));
      if ( SecureDumpHeader < 0 )
      {
LABEL_64:
        ExFreePoolWithTag(v4, 0);
        goto LABEL_20;
      }
    }
    else
    {
      ByteOffset.QuadPart = 0LL;
    }
    SecureDumpHeader = IopLiveDumpWriteBuffer(v34, v3, v3[1028].LowPart, &ByteOffset, a1, 0);
    if ( *(_BYTE *)(a1 + 984) )
    {
      v37 = *(_DWORD *)(a1 + 992);
      ByteOffset.QuadPart = 0LL;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v34, v4, v37, &ByteOffset, a1, 1);
    }
    if ( v4 )
      goto LABEL_64;
  }
LABEL_20:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
