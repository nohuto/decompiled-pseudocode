/*
 * XREFs of MiReturnResavailToPrcb @ 0x14031B360
 * Callers:
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResavailToPrcb(ULONG *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 CachedResidentAvailable; // ecx
  bool v5; // zf
  signed __int32 v6; // eax

  v2 = a2;
  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable != -1 )
    {
      do
      {
        if ( a2 + CachedResidentAvailable > 0x100 || a2 >= 0x80000 )
          break;
        v6 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               a2 + CachedResidentAvailable,
               CachedResidentAvailable);
        v5 = CachedResidentAvailable == v6;
        CachedResidentAvailable = v6;
        if ( v5 )
          return 0LL;
      }
      while ( v6 != -1 );
      if ( CachedResidentAvailable > 192
        && CachedResidentAvailable == _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        192,
                                        CachedResidentAvailable) )
      {
        return CachedResidentAvailable - 192 + a2;
      }
    }
  }
  return v2;
}
