/*
 * XREFs of MiIsPfnSystemCharged @ 0x14042F8E0
 * Callers:
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x14042F7F4 (MiReturnPagedPoolLockCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnSystemCharged(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
    || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
  {
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  }
  else
  {
    return 0LL;
  }
}
