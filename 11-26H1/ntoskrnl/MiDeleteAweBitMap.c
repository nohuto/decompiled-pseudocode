/*
 * XREFs of MiDeleteAweBitMap @ 0x14087F1E0
 * Callers:
 *     MiDeleteAweInfo @ 0x14087F264 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x14087F5D8 (MiResizeAweBitMap.c)
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403C6C30 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403C6C74 (MiConfirmQuotaProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
