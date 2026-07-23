/*
 * XREFs of MiInsertProcessVads @ 0x140A085A8
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiReturnProcessVads @ 0x140A08654 (MiReturnProcessVads.c)
 */

__int64 __fastcall MiInsertProcessVads(ULONG_PTR a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
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
    inserted = MiInsertVadCharges((__int64)a2, a1);
    if ( inserted < 0 )
      break;
    MiInsertVad((ULONG_PTR)a2, a1, 0);
    a2 = v9;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  MiReturnProcessVads(a2);
  return (unsigned int)inserted;
}
