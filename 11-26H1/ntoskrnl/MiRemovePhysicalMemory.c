/*
 * XREFs of MiRemovePhysicalMemory @ 0x140866D5C
 * Callers:
 *     MiReapFileOnlyPfns @ 0x1406FABB0 (MiReapFileOnlyPfns.c)
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408681C4 (MiRemoveMdlPages.c)
 *     MiHotRemovePartitionPageRun @ 0x14087C13C (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14024FD8C (MiFlushEntireTbDueToAttributeChange.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405C7CF8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1405EBDBC (KeConfigureDynamicMemory.c)
 *     MiAcquireRemoveMemoryResources @ 0x1406E7AD0 (MiAcquireRemoveMemoryResources.c)
 *     MiEntireRangeAlreadyExists @ 0x1406E87F0 (MiEntireRangeAlreadyExists.c)
 *     MiReturnAddMemoryResources @ 0x1406EA170 (MiReturnAddMemoryResources.c)
 *     MiPartitionDeleteMemoryNode @ 0x1407094E0 (MiPartitionDeleteMemoryNode.c)
 *     MiFlushCacheRange @ 0x14070D474 (MiFlushCacheRange.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiAcquireAddMemoryLocks @ 0x140864F14 (MiAcquireAddMemoryLocks.c)
 *     MiCompleteMemoryRemoval @ 0x140865CFC (MiCompleteMemoryRemoval.c)
 *     MiNotifyMemoryChange @ 0x140866CA4 (MiNotifyMemoryChange.c)
 *     MiReleaseAddMemoryLocks @ 0x140866D0C (MiReleaseAddMemoryLocks.c)
 *     MiUnmapPfns @ 0x1408670AC (MiUnmapPfns.c)
 *     MiHotAddHugeRange @ 0x140867C50 (MiHotAddHugeRange.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 BugCheckParameter2, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r13
  _QWORD *v10; // rax
  _BYTE *v11; // rcx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  ULONG_PTR v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE v27[16]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v28; // [rsp+40h] [rbp-89h]
  unsigned __int64 v29; // [rsp+48h] [rbp-81h]
  unsigned __int64 v30; // [rsp+50h] [rbp-79h]
  int v31; // [rsp+58h] [rbp-71h]
  __int64 v32; // [rsp+60h] [rbp-69h]
  __int64 v33; // [rsp+98h] [rbp-31h]
  _BYTE v34[64]; // [rsp+A0h] [rbp-29h] BYREF

  memset_0(v27, 0, 0xB0uLL);
  v8 = 2LL;
  v9 = *(_QWORD *)(stru_140E2EB88.ThreadLock
                 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v10 = v34;
  v32 = v9;
  v11 = v34;
  v31 = a3;
  v28 = BugCheckParameter2;
  v30 = a2;
  v29 = a2 + BugCheckParameter2;
  v33 = 0LL;
  do
  {
    v10[1] = v11;
    *v10 = v11;
    v11 += 24;
    v10 += 3;
    --v8;
  }
  while ( v8 );
  MiAcquireAddMemoryLocks((__int64)v27, 0LL, v6, v7);
  ++qword_140E2D7D0;
  if ( (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 32) & 0x1000000) != 0 && (MiFlags & 0x4000) != 0 )
    {
      MiReleaseAddMemoryLocks((__int64)v27);
      v12 = KeConfigureDynamicMemory(BugCheckParameter2, v29 - 1, 2u);
      v13 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741670 )
          KeBugCheckEx(0x1Au, 0x515A0uLL, BugCheckParameter2, v29 - 1, v12);
        goto LABEL_24;
      }
      v14 = KeConfigureDynamicMemory(v28, v29 - 1, 4u);
      if ( v14 < 0 )
        KeBugCheckEx(0x1Au, 0x515A0uLL, BugCheckParameter2, v29 - 1, v14);
      MiAcquireAddMemoryLocks((__int64)v27, v15, v16, v17);
    }
    v13 = 0;
    goto LABEL_19;
  }
  if ( !(unsigned int)MiEntireRangeAlreadyExists(v28, v29) )
  {
    v13 = -1073741800;
    goto LABEL_24;
  }
  v13 = MiAcquireRemoveMemoryResources((__int64)v27);
  if ( v13 >= 0 )
  {
    MiReleaseAddMemoryLocks((__int64)v27);
    v18 = a2 + BugCheckParameter2 - 1;
    v13 = KeConfigureDynamicMemory(BugCheckParameter2, v18, 2u);
    if ( v13 >= 0 )
    {
      v22 = KeConfigureDynamicMemory(v28, v18, 4u);
      v13 = v22;
      if ( v22 < 0 )
        KeBugCheckEx(0x1Au, 0x515A0uLL, BugCheckParameter2, v18, v22);
    }
    MiAcquireAddMemoryLocks((__int64)v27, v19, v20, v21);
    if ( v13 >= 0 )
    {
      MiCompleteMemoryRemoval((__int64)v27);
LABEL_19:
      MiUnmapPfns(v27);
      if ( (a3 & 2) == 0 )
      {
        MiNotifyMemoryChange((__int64)v27);
        if ( (a3 & 0x8000) != 0 )
        {
          MiPartitionDeleteMemoryNode(v9, BugCheckParameter2, a2);
          MiHotAddHugeRange(v9, BugCheckParameter2, a2, 2 - ((a3 & 0x100) != 0), 1);
        }
        if ( (a3 & 0x80000) == 0 )
        {
          MiFlushEntireTbDueToAttributeChange();
          MiFlushCacheRange(BugCheckParameter2, a2);
        }
      }
    }
  }
LABEL_24:
  MiReturnAddMemoryResources((__int64)v27);
  if ( v13 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x80002) == 0 )
    IoUpdateDumpPhysicalRanges(v24, v23, v25);
  return (unsigned int)v13;
}
