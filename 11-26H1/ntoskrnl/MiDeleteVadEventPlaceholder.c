/*
 * XREFs of MiDeleteVadEventPlaceholder @ 0x140B01CC0
 * Callers:
 *     <none>
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403C6C30 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403C6C74 (MiConfirmQuotaProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteVadEventPlaceholder(__int64 a1)
{
  unsigned __int8 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Process; // rsi

  v1 = *(unsigned __int8 **)(a1 + 24);
  if ( v1 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
    if ( v1 != (unsigned __int8 *)-68LL )
    {
      MiConfirmQuotaProcess(v1 + 68, (ULONG_PTR)CurrentThread->ApcState.Process);
      MiConfirmQuotaAmount(v1 + 68, 0x48uLL);
    }
    PsReturnProcessNonPagedPoolQuota(Process, 0x48uLL);
    if ( v1 != (unsigned __int8 *)-68LL )
      v1[68] = 0;
    ExFreePoolWithTag(v1, 0);
  }
}
