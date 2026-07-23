/*
 * XREFs of SmRecordDecompressionFailureDumpPayload @ 0x140642BD8
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x1403A1980 (MmProbeAndLockPages.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     SmGetPhysicalAddress @ 0x1404FEF68 (SmGetPhysicalAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmRecordDecompressionFailureDumpPayload(
        __int64 a1,
        ULONG a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _DWORD *a9)
{
  struct _MDL *v10; // rdi
  PVOID v11; // r15
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // ebx
  unsigned __int64 v16; // rbx
  struct _MDL *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  KIRQL v20; // al
  void *FirstArgument; // rbx
  size_t Size; // [rsp+40h] [rbp-58h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = a2;
  Size = a2;
  v14 = SmAllocEx(a2 + 56LL, 0x50626D73u, -1);
  if ( !v14 )
    goto LABEL_2;
  v16 = ((unsigned __int64)(a1 & 0xFFF) + v13 + 4095) >> 12;
  v17 = (struct _MDL *)SmAllocEx(8 * v16 + 48, 0x50426D73u, -1);
  v10 = v17;
  if ( !v17 )
    goto LABEL_2;
  v17->Next = 0LL;
  v17->Size = 8 * (v16 + 6);
  v17->MdlFlags = 0;
  v17->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v17->ByteOffset = a1 & 0xFFF;
  v17->ByteCount = a2;
  MmProbeAndLockPages(v17, 0, IoReadAccess);
  v12 = 1;
  v11 = (v10->MdlFlags & 5) != 0
      ? v10->MappedSystemVa
      : MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( v11 )
  {
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_DWORD *)v14 = 65539;
    *(_DWORD *)(v14 + 4) = a3;
    *(_DWORD *)(v14 + 8) = a4;
    *(_DWORD *)(v14 + 12) = a2;
    *(_DWORD *)(v14 + 16) = a5;
    v18 = (unsigned int)(a7 - a1);
    *(_DWORD *)(v14 + 20) = v18;
    *(_QWORD *)(v14 + 24) = a6;
    *(_QWORD *)(v14 + 32) = SmGetPhysicalAddress((__int64)v11 + v18) / 4096;
    if ( (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000 )
      v19 = -1LL;
    else
      v19 = SmGetPhysicalAddress((__int64)v11 + a3 + *(unsigned int *)(v14 + 20) - 1) / 4096;
    *(_QWORD *)(v14 + 40) = v19;
    *(_QWORD *)(v14 + 48) = SmGetPhysicalAddress(a8) / 4096;
    memmove((void *)(v14 + 56), v11, Size);
    v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E27C48.ExpectedRunTime);
    FirstArgument = stru_140E27C48.FirstArgument;
    stru_140E27C48.FirstArgument = (void *)v14;
    LODWORD(stru_140E27C48.TrapFrame) = *a9;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E27C48.ExpectedRunTime, v20);
    v14 = (__int64)FirstArgument;
    v15 = 0;
  }
  else
  {
LABEL_2:
    v15 = -1073741670;
  }
  if ( v11 )
    MmUnmapLockedPages(v11, v10);
  if ( v12 )
    MmUnlockPages(v10);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v14 )
    ExFreePoolWithTag((PVOID)v14, 0);
  return v15;
}
