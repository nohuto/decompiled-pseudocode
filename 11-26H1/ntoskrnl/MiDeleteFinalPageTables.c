/*
 * XREFs of MiDeleteFinalPageTables @ 0x1404C7A8C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiDeleteVirtualAddresses @ 0x14036358C (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 *     KeFlushProcessTb @ 0x14047DA1C (KeFlushProcessTb.c)
 *     MiDeleteTopLevelPage @ 0x14047DA4C (MiDeleteTopLevelPage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsUnlinkProcessFromSession @ 0x140AF9554 (PsUnlinkProcessFromSession.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // r15
  struct _KLOCK_ENTRIES *v5; // r9
  int i; // esi
  unsigned __int64 v7; // rdi
  __int64 *v8; // r8
  __int64 PteShadow; // rax
  KIRQL v10; // al
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 result; // rax
  _OWORD v16[3]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+68h] [rbp-9h]
  _OWORD v18[3]; // [rsp+70h] [rbp-1h] BYREF

  v17 = 0LL;
  v2 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v18, 0, sizeof(v18));
  v3 = 48 * v2;
  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0, (__int64)v18);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v7 = qword_140E2D7B8;
      if ( !qword_140E2D7B8 )
        continue;
    }
    else
    {
      v7 = 2147352576LL;
    }
    v8 = (__int64 *)(8 * ((v7 >> 39) & 0x1FF) - 0x90482413000LL);
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(8 * ((v7 >> 39) & 0x1FF) - 0x90482413000LL, *v8);
    if ( PteShadow )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter2, (__int64)v8, v5);
      MiDeleteVirtualAddresses(v7, v7, 0, (__int64)v16);
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter2);
  if ( (*(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter2,
      v3 / 48,
      *(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow((__int64)BugCheckParameter2, 1LL);
  KiUnstackDetachProcess((__int64)v18, 0);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->136, 0xBu);
  PsUnlinkProcessFromSession(BugCheckParameter2);
  v10 = ExAcquireSpinLockExclusive(&dword_140E36200);
  Flink = BugCheckParameter2[2].CpuPartitionList.Flink;
  if ( Flink->Blink != &BugCheckParameter2[2].CpuPartitionList
    || (Blink = BugCheckParameter2[2].CpuPartitionList.Blink, Blink->Flink != &BugCheckParameter2[2].CpuPartitionList) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( v10 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
  else
    ExReleaseSpinLockExclusive(&dword_140E36200, v10);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v14 = (unsigned int)MiDeleteTopLevelPage(v13, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v16[0] + 1);
  if ( v14 )
    return *((_QWORD *)&v16[0] + 1) + 1LL;
  return result;
}
