/*
 * XREFs of MiReturnVadQuotaCharges @ 0x140A79C0C
 * Callers:
 *     MiFinishVadDeletion @ 0x140442CA8 (MiFinishVadDeletion.c)
 * Callees:
 *     MiVadPureReserve @ 0x1403173B0 (MiVadPureReserve.c)
 *     MiConfirmQuotaAmount @ 0x1403BCDC0 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403BCE04 (MiConfirmQuotaProcess.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 */

void __fastcall MiReturnVadQuotaCharges(__int64 a1, ULONG_PTR a2, int a3)
{
  _BYTE *v6; // rdi
  unsigned __int8 *v7; // rbx

  if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) >= 0x7FFFFFFFDLL )
  {
    if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) == 0x7FFFFFFFDLL )
    {
      v7 = (unsigned __int8 *)(a1 + 68);
      if ( a1 != -68 )
      {
        MiConfirmQuotaProcess(v7, a2);
        MiConfirmQuotaAmount(v7, 0x48uLL);
      }
      PsReturnProcessNonPagedPoolQuota(a2, 0x48uLL);
      if ( v7 )
        *v7 = 0;
    }
  }
  else
  {
    v6 = (_BYTE *)(a1 + 68);
    if ( a1 != -68 )
    {
      MiConfirmQuotaProcess((unsigned __int8 *)(a1 + 68), a2);
      MiConfirmQuotaAmount(v6, 0x90uLL);
    }
    PsReturnProcessNonPagedPoolQuota(a2, 0x90uLL);
    if ( v6 )
      *v6 = 0;
    if ( a3 )
    {
      if ( !MiVadPureReserve(a1) )
        PsReturnProcessPagedPoolQuota(
          a2,
          8
        * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
         - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
        + 8);
    }
  }
}
