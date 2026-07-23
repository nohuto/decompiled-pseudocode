/*
 * XREFs of KxSetTimeStampBusy @ 0x140252AF4
 * Callers:
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KxSetTimeStampBusy(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // esi
  int v7; // eax

  v4 = 0;
  _m_prefetchw(a1);
  v5 = (unsigned int)*a1;
  v6 = v5;
  while ( (v5 & 1) != 0 || _interlockedbittestandset(a1, 0) )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5, a2, a3) )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
    v5 = (unsigned int)*a1;
    v7 = *a1 - v6;
    if ( v7 >= 3 || v7 >= 2 && (v6 & 1) == 0 )
      return 0;
  }
  return 1;
}
