/*
 * XREFs of MiInsertProcessVads @ 0x140962720
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140964050 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiReturnProcessVads @ 0x1409627CC (MiReturnProcessVads.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertProcessVads(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  int inserted; // edi
  __int64 Process; // rbp
  _QWORD *v9; // r15

  CurrentThread = KeGetCurrentThread();
  inserted = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, a3, a4);
  while ( 1 )
  {
    if ( !a2 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      return (unsigned int)inserted;
    }
    v9 = (_QWORD *)*a2;
    inserted = MiInsertVadCharges(a2, a1);
    if ( inserted < 0 )
      break;
    MiInsertVad((ULONG_PTR)a2, a1, 0);
    a2 = v9;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  MiReturnProcessVads(a2);
  return (unsigned int)inserted;
}
