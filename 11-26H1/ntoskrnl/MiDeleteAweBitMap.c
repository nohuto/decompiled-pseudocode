/*
 * XREFs of MiDeleteAweBitMap @ 0x140878E00
 * Callers:
 *     MiDeleteAweInfo @ 0x140878E84 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403BCDC0 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403BCE04 (MiConfirmQuotaProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweBitMap(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // rdi

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( a2 )
    {
      MiConfirmQuotaProcess((unsigned __int8 *)(a1 + 56), a2);
      v5 = *(_QWORD *)(a1 + 24);
      LOBYTE(v2) = (v5 & 0x3F) != 0;
      v6 = 8 * ((v5 >> 6) + v2);
      MiConfirmQuotaAmount((_BYTE *)(a1 + 56), v6);
      PsReturnProcessNonPagedPoolQuota(a2, v6);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
