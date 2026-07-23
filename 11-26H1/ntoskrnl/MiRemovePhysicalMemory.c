/*
 * XREFs of MiRemovePhysicalMemory @ 0x14086D13C
 * Callers:
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14086E5A4 (MiRemoveMdlPages.c)
 *     MiHotRemovePartitionPageRun @ 0x14088253C (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405CA5C8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1405EE72C (KeConfigureDynamicMemory.c)
 *     MiAcquireRemoveMemoryResources @ 0x1406EC780 (MiAcquireRemoveMemoryResources.c)
 *     MiEntireRangeAlreadyExists @ 0x1406ED48C (MiEntireRangeAlreadyExists.c)
 *     MiReturnAddMemoryResources @ 0x1406EEE10 (MiReturnAddMemoryResources.c)
 *     MiPartitionDeleteMemoryNode @ 0x14070E194 (MiPartitionDeleteMemoryNode.c)
 *     MiFlushCacheRange @ 0x140712124 (MiFlushCacheRange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAcquireAddMemoryLocks @ 0x14086B2F4 (MiAcquireAddMemoryLocks.c)
 *     MiCompleteMemoryRemoval @ 0x14086C0DC (MiCompleteMemoryRemoval.c)
 *     MiNotifyMemoryChange @ 0x14086D084 (MiNotifyMemoryChange.c)
 *     MiReleaseAddMemoryLocks @ 0x14086D0EC (MiReleaseAddMemoryLocks.c)
 *     MiUnmapPfns @ 0x14086D48C (MiUnmapPfns.c)
 *     MiHotAddHugeRange @ 0x14086E030 (MiHotAddHugeRange.c)
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
  _BYTE v24[16]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v25; // [rsp+40h] [rbp-89h]
  unsigned __int64 v26; // [rsp+48h] [rbp-81h]
  unsigned __int64 v27; // [rsp+50h] [rbp-79h]
  int v28; // [rsp+58h] [rbp-71h]
  __int64 v29; // [rsp+60h] [rbp-69h]
  __int64 v30; // [rsp+98h] [rbp-31h]
  _BYTE v31[64]; // [rsp+A0h] [rbp-29h] BYREF

  memset_0(v24, 0, 0xB0uLL);
  v8 = 2LL;
  v9 = *(_QWORD *)(stru_140E2ED08.ThreadLock
                 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v10 = v31;
  v29 = v9;
  v11 = v31;
  v28 = a3;
  v25 = BugCheckParameter2;
  v27 = a2;
  v26 = a2 + BugCheckParameter2;
  v30 = 0LL;
  do
  {
    v10[1] = v11;
    *v10 = v11;
    v11 += 24;
    v10 += 3;
    --v8;
  }
  while ( v8 );
  MiAcquireAddMemoryLocks((__int64)v24, 0LL, v6, v7);
  ++qword_140E2D950;
  if ( (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 32) & 0x1000000) != 0 && (MiFlags & 0x4000) != 0 )
    {
      MiReleaseAddMemoryLocks((__int64)v24);
      v12 = KeConfigureDynamicMemory(BugCheckParameter2, v26 - 1, 2u);
      v13 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741670 )
          KeBugCheckEx(0x1Au, 0x515A0uLL, BugCheckParameter2, v26 - 1, v12);
        goto LABEL_24;
      }
      v14 = KeConfigureDynamicMemory(v25, v26 - 1, 4u);
      if ( v14 < 0 )
        KeBugCheckEx(0x1Au, 0x515A0uLL, BugCheckParameter2, v26 - 1, v14);
      MiAcquireAddMemoryLocks((__int64)v24, v15, v16, v17);
    }
    v13 = 0;
    goto LABEL_19;
  }
  if ( !(unsigned int)MiEntireRangeAlreadyExists(v25, v26) )
  {
    v13 = -1073741800;
    goto LABEL_24;
  }
  v13 = MiAcquireRemoveMemoryResources((__int64)v24);
  if ( v13 >= 0 )
  {
    MiReleaseAddMemoryLocks((__int64)v24);
    v18 = a2 + BugCheckParameter2 - 1;
    v13 = KeConfigureDynamicMemory(BugCheckParameter2, v18, 2u);
    if ( v13 >= 0 )
    {
      v22 = KeConfigureDynamicMemory(v25, v18, 4u);
      v13 = v22;
      if ( v22 < 0 )
        KeBugCheckEx(0x1Au, 0x515A0uLL, BugCheckParameter2, v18, v22);
    }
    MiAcquireAddMemoryLocks((__int64)v24, v19, v20, v21);
    if ( v13 >= 0 )
    {
      MiCompleteMemoryRemoval((__int64)v24);
LABEL_19:
      MiUnmapPfns(v24);
      if ( (a3 & 2) == 0 )
      {
        MiNotifyMemoryChange((__int64)v24);
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
  MiReturnAddMemoryResources((__int64)v24);
  if ( v13 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x80002) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v13;
}
