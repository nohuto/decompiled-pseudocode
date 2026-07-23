/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140A08068
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiInitializeLockedPagesTracking @ 0x14086A25C (MiInitializeLockedPagesTracking.c)
 *     MiAllocateProcessVads @ 0x140A03904 (MiAllocateProcessVads.c)
 *     MiInsertProcessVads @ 0x140A085A8 (MiInsertProcessVads.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  _QWORD *ProcessVads; // rax
  int inserted; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  MiGetWsAndMakePageTablesNx((__int64)BugCheckParameter1, a2, a3);
  BugCheckParameter1[2].ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v7);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads(BugCheckParameter1, ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v7, 0);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking((__int64)BugCheckParameter1);
  return (unsigned int)inserted;
}
