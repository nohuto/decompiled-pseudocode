/*
 * XREFs of IovFreeIrpPrivate @ 0x140C4B9D0
 * Callers:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopFreeIrp @ 0x140267B00 (IopFreeIrp.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     IovLogIrpMdlEvent @ 0x140533384 (IovLogIrpMdlEvent.c)
 *     IovAiRemoveIrp @ 0x140645E54 (IovAiRemoveIrp.c)
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14064BA3C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14064BA84 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140C276C8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

void __fastcall IovFreeIrpPrivate(_BYTE *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  const void *retaddr; // [rsp+58h] [rbp+0h]
  KIRQL v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter2 != 6 )
      CarReportRuleViolationFromNt(201, 1LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 4u, 0LL);
    if ( *((_BYTE **)BugCheckParameter2 + 4) != BugCheckParameter2 + 32 )
      CarReportRuleViolationFromNt(201, 2LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 4u, 0LL);
  }
  if ( (VfRuleClasses & 0x20000000000000LL) != 0 && VfEnabledOnKernel() )
  {
    v7 = IovAiRemoveIrp((__int64)BugCheckParameter2);
    if ( v7 )
      IovLogIrpMdlEvent(v7, (__int64)BugCheckParameter2, (__int64)retaddr);
  }
  if ( (BugCheckParameter2[71] & 0x21) == 0x21 )
    goto LABEL_12;
  v4 = VfIrpDatabaseEntryFindAndLock(BugCheckParameter2);
  v5 = v4;
  if ( !v4 )
    goto LABEL_12;
  if ( *((_BYTE **)BugCheckParameter2 + 4) != BugCheckParameter2 + 32 )
  {
    v6 = 524;
    goto LABEL_16;
  }
  v8 = *(_DWORD *)(v4 + 56);
  if ( *(_QWORD *)(v5 + 240) )
  {
    if ( (v8 & 0x400000) != 0 )
      goto LABEL_17;
    v6 = 523;
LABEL_16:
    ViErrorReport1(v6, retaddr, BugCheckParameter2);
LABEL_17:
    VfIrpDatabaseEntryReleaseLock(v5);
    return;
  }
  if ( (v8 & 0x200000) == 0 )
  {
LABEL_26:
    VfIrpDatabaseEntryReleaseLock(v5);
LABEL_12:
    IopFreeIrp((ULONG_PTR)BugCheckParameter2, a2, a3);
    return;
  }
  if ( (v8 & 8) == 0 )
  {
    v9 = (*(_DWORD *)(v5 + 24))-- == 1;
    v13 = 0;
    if ( v9 )
    {
      ViIrpDatabaseAcquireLockExclusive(&v13);
      v10 = *(_QWORD *)v5;
      guard_dispatch_icall_no_overrides(v5, *(_QWORD *)v5);
      *(_QWORD *)v5 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v10 >> 12))),
        v10);
      ViIrpDatabaseReleaseLockExclusive(v13);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
    goto LABEL_26;
  }
  v9 = (BugCheckParameter2[71] & 1) == 0;
  *(_WORD *)BugCheckParameter2 = 0;
  if ( !v9 )
  {
    PsReturnProcessNonPagedPoolQuota(*(_QWORD *)(v5 + 88), *(unsigned int *)(v5 + 84));
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 88), 0x49667256u);
  }
  v9 = (*(_DWORD *)(v5 + 24))-- == 1;
  v13 = 0;
  if ( v9 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v13);
    v11 = *(_QWORD *)v5;
    guard_dispatch_icall_no_overrides(v5, *(_QWORD *)v5);
    *(_QWORD *)v5 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v11 >> 12))),
      v11);
    ViIrpDatabaseReleaseLockExclusive(v13);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
  VfIrpDatabaseEntryReleaseLock(v5);
  ExFreePoolWithTag(BugCheckParameter2, 0);
}
