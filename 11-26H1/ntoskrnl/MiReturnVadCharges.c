/*
 * XREFs of MiReturnVadCharges @ 0x1409C6974
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x14087EFD4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 * Callees:
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiConfirmQuotaAmount @ 0x1403BCDC0 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403BCE04 (MiConfirmQuotaProcess.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 */

void __fastcall MiReturnVadCharges(__int64 a1, _QWORD *a2)
{
  unsigned __int8 *v2; // rbx
  _KPROCESS *Process; // rdi
  ULONG_PTR v5; // rbp
  ULONG_PTR v6; // rdx
  __int64 ProcessPartition; // rax
  unsigned __int64 v8; // r8

  v2 = (unsigned __int8 *)(a1 + 68);
  Process = KeGetCurrentThread()->ApcState.Process;
  MiConfirmQuotaProcess((unsigned __int8 *)(a1 + 68), (ULONG_PTR)Process);
  v5 = a2[2];
  if ( v5 )
  {
    if ( v2 )
    {
      MiConfirmQuotaProcess(v2, (ULONG_PTR)Process);
      MiConfirmQuotaAmount(v2, v5);
    }
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, v5);
    if ( v2 )
      *v2 = 0;
  }
  v6 = a2[1];
  if ( v6 )
    PsReturnProcessPagedPoolQuota((ULONG_PTR)Process, v6);
  if ( *a2 )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    MiReturnResident(ProcessPartition, v8);
  }
}
