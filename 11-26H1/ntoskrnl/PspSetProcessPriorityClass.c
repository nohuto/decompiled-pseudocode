/*
 * XREFs of PspSetProcessPriorityClass @ 0x140B11C80
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x14077BC3C (PspApplyIFEOPerfOptions.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  ULONG_PTR v15[10]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v15, 0, 0x48uLL);
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4 && *(_BYTE *)(a1 + 839) != 4 )
  {
    v11 = a3
        ? SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, a3, 512, a4)
        : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4);
    if ( !v11 )
      return 3221225569LL;
  }
  v8 = *(_QWORD *)(a1 + 672);
  CurrentThread = KeGetCurrentThread();
  if ( v8 )
  {
    --CurrentThread->KernelApcDisable;
    ExInitializeFastOwnerEntry((__int64)v15);
    ExAcquireFastResourceShared((__int64 *)(v8 + 56), (ULONG_PTR)v15, 1);
    if ( (*(_DWORD *)(v8 + 1056) & 0x20) != 0 )
      a2 = *(_BYTE *)(v8 + 1100);
    ExReleaseFastResourceShared(v8 + 56, (ULONG_PTR)v15, v12, v13);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v14);
  }
  *(_BYTE *)(a1 + 839) = a2;
  return 0LL;
}
