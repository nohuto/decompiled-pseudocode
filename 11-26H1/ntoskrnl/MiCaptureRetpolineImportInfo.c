/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x140B3E80C
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140429D68 (RtlCaptureRetpolineImportRvas.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiIsRetpolineEnabled @ 0x1404793CC (MiIsRetpolineEnabled.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A08A4 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7D54 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 */

__int64 __fastcall MiCaptureRetpolineImportInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 PoolMm; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int CurrentProcessorColor; // eax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  PoolMm = 0LL;
  v5 = *(_QWORD *)(a2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = 0;
  v6 = *(_QWORD *)(v5 + 32);
  v8 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)MiIsRetpolineEnabled();
  result = RtlCaptureRetpolineImportRvas(
             *(void **)(v7 + 48),
             *(_QWORD *)(v7 + 48),
             *(unsigned int *)(a1 + 64),
             v8,
             0LL,
             &v13);
  if ( (int)result >= 0 )
    goto LABEL_6;
  if ( (_DWORD)result != -1073741789 )
    return result;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, v13, 1767009613, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225495LL;
  result = RtlCaptureRetpolineImportRvas(
             *(void **)(a1 + 48),
             *(_QWORD *)(a1 + 48),
             *(unsigned int *)(a1 + 64),
             v8,
             PoolMm,
             &v13);
  if ( (int)result >= 0 )
  {
LABEL_6:
    MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v6, v10, v11);
    *(_QWORD *)(*(_QWORD *)(v6 + 88) + 16LL) = PoolMm;
    MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v6);
    return 0LL;
  }
  return result;
}
