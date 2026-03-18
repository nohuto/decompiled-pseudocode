/*
 * XREFs of MmChargeResources @ 0x140394570
 * Callers:
 *     SmFpAllocate @ 0x14035D180 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1403944B0 (SmKmAllocateMdlForLock.c)
 * Callees:
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

__int64 __fastcall MmChargeResources(ULONG **a1, unsigned __int64 a2, char a3)
{
  ULONG *v3; // rbp
  int v4; // edi

  v3 = *a1;
  v4 = 0;
  if ( (a3 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(*a1, a2, 0LL) )
      return 0LL;
    v4 = 2;
  }
  if ( (a3 & 1) != 0 && !(unsigned int)MiChargeCommit(v3, a2, 1u) )
  {
    if ( v4 )
      MiReturnResident((__int64)*a1, a2);
    return 0LL;
  }
  return 1LL;
}
