/*
 * XREFs of MiDeleteVadEventBlock @ 0x14095C520
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14095C4CC (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403BCDC0 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403BCE04 (MiConfirmQuotaProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteVadEventBlock(ULONG_PTR BugCheckParameter1, unsigned __int8 *P)
{
  unsigned __int8 *v2; // rdi
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  ULONG_PTR v7; // rbx

  v2 = P + 11;
  MiConfirmQuotaProcess(P + 11, BugCheckParameter1);
  if ( *((_QWORD *)P + 2) )
    guard_dispatch_icall_no_overrides((__int64)P, v5);
  v6 = P[10];
  if ( (v6 & 1) != 0 )
  {
    v7 = 104LL;
    if ( (v6 & 2) != 0 )
      v7 = 8 * ((*((_QWORD *)P + 3) >> 6) + ((*((_QWORD *)P + 3) & 0x3F) != 0) + 13LL);
    if ( v2 )
    {
      MiConfirmQuotaProcess(v2, BugCheckParameter1);
      MiConfirmQuotaAmount(v2, v7);
    }
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v7);
    if ( v2 )
      *v2 = 0;
  }
  ExFreePoolWithTag(P, 0);
}
