/*
 * XREFs of ViMapDoubleBuffer @ 0x140C2D778
 * Callers:
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ViAllocateMapRegistersFromFile @ 0x140C2C19C (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(
        __int64 a1,
        PMDL MemoryDescriptorList,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // esi
  PMDL v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  CHAR *v13; // rsi
  KIRQL v14; // r14
  PVOID MappedSystemVa; // rbp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  ULONG_PTR v18; // rbx
  __int64 v19; // r8
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  char *v22; // r9
  PMDL v23; // r15
  unsigned int v24; // ebp
  struct _MDL *Next; // rax
  __int64 v26; // rbx
  const char *v27; // rdx
  CHAR *v28; // rbp
  ULONG ByteCount; // ecx
  KIRQL v30; // al
  bool v31; // zf
  PVOID v32; // rbx
  ULONG_PTR v33; // rcx
  PMDL BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v36; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v38; // [rsp+40h] [rbp-48h]
  char *v39; // [rsp+48h] [rbp-40h]
  unsigned __int64 v40; // [rsp+50h] [rbp-38h]
  int v41; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  v41 = 0;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_140E0EB00, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_140E0EB00;
    v9 = 0LL;
    BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33LL;
LABEL_3:
    VfReportIssueWithOptions(0xE6u, v11, v10, (ULONG_PTR)v9, (ULONG_PTR)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( (PVOID)a3 < (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset )
  {
    v13 = (CHAR *)&dword_140E0EB04;
    ViHalPreprocessOptions(
      &dword_140E0EB04,
      "Virtual address %p is before the first MDL %p.",
      268435487LL,
      1LL,
      a3,
      (__int64)MemoryDescriptorList);
    v10 = 1LL;
    goto LABEL_10;
  }
  if ( (unsigned int)(a3 - MemoryDescriptorList->ByteOffset - LODWORD(MemoryDescriptorList->StartVa)) >= MemoryDescriptorList->ByteCount )
  {
    v13 = (CHAR *)&dword_140E0EB08;
    ViHalPreprocessOptions(
      &dword_140E0EB08,
      "Virtual address %p is after the first MDL %p.",
      268435487LL,
      2LL,
      a3,
      (__int64)MemoryDescriptorList);
    v10 = 2LL;
LABEL_10:
    Priority = v13;
    v9 = (PMDL)a3;
    BugCheckOnFailure = MemoryDescriptorList;
LABEL_11:
    v11 = 31LL;
    goto LABEL_3;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 80), v14);
  if ( !MappedSystemVa )
    return 0LL;
  v16 = a3 - MemoryDescriptorList->ByteOffset - (unsigned __int64)MemoryDescriptorList->StartVa;
  v17 = MemoryDescriptorList->ByteCount - v16;
  v18 = (ULONG_PTR)MappedSystemVa + v16;
  v36 = 1;
  v40 = v17;
  Src = (void *)v18;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v18, v5, a5, &v41) )
    return 0LL;
  v20 = (unsigned int)(v41 << 12) + (v18 & 0xFFF);
  v21 = *(_QWORD *)(a1 + 72);
  v22 = (char *)(v20 + *(_QWORD *)(a1 + 64));
  v39 = v22;
  if ( !v21 )
    return 0LL;
  v23 = MemoryDescriptorList;
  v38 = (char *)(v20 + v21);
  v24 = v5;
  while ( v24 )
  {
    if ( !v23 )
      return 0LL;
    Next = v23->Next;
    if ( v36 )
    {
      v36 = 0;
      if ( !Next && v24 > v17 )
      {
        v26 = v5;
        if ( (((v5 - 1) ^ (v17 + v5 - (unsigned __int64)v24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          v27 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
          v28 = (CHAR *)&unk_140E0EB0C;
LABEL_28:
          ViHalPreprocessOptions(v28, v27, 268435487LL, 3LL, (__int64)MemoryDescriptorList, v26);
          Priority = v28;
          v9 = MemoryDescriptorList;
          BugCheckOnFailure = (PMDL)v26;
          v10 = 3LL;
          goto LABEL_11;
        }
LABEL_32:
        LODWORD(v17) = v24;
        goto LABEL_36;
      }
    }
    else
    {
      if ( !Next )
      {
        ByteCount = v23->ByteCount;
        if ( v24 > ByteCount )
        {
          if ( (((v5 - 1) ^ (v5 + ByteCount - v24)) & 0xFFFFF000) != 0 )
          {
            v26 = v5;
            v27 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
            v28 = (CHAR *)&unk_140E0EB10;
            goto LABEL_28;
          }
          goto LABEL_32;
        }
      }
      LODWORD(v17) = v23->ByteCount;
    }
    if ( v24 < (unsigned int)v17 )
      LODWORD(v17) = v24;
LABEL_36:
    memmove(v22, Src, (unsigned int)v17);
    v39 += (unsigned int)v17;
    memmove(v38, Src, (unsigned int)v17);
    v38 += (unsigned int)v17;
    v23 = v23->Next;
    if ( v23 )
    {
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
      v31 = (v23->MdlFlags & 5) == 0;
      LOBYTE(v41) = v30;
      if ( v31 )
      {
        v32 = MmMapLockedPagesSpecifyCache(v23, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v32;
        v30 = v41;
      }
      else
      {
        v32 = v23->MappedSystemVa;
        Src = v32;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 80), v30);
      if ( !v32 )
        return 0LL;
    }
    v22 = v39;
    v24 -= v17;
    v17 = v40;
  }
  v33 = *(_QWORD *)(a1 + 56);
  if ( v33 )
  {
    LOBYTE(v19) = 1;
    KeFlushIoBuffers(v33, a5 == 0, v19, (__int64)v22);
  }
  return v5;
}
