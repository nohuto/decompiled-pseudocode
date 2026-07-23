/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x140A57CE0
 * Callers:
 *     VmpPrefetchForVirtualFault @ 0x14082313C (VmpPrefetchForVirtualFault.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r11

  if ( *a1 != 1 )
    return 3221225711LL;
  if ( a1[1] >= 8u )
    return 3221225711LL;
  v1 = a1[1] & 6;
  if ( v1 > 4 )
    return 3221225711LL;
  if ( v1 )
  {
    if ( v1 != 2 )
      MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  }
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  return MmPrefetchVirtualMemory(*(_QWORD *)(v2 + 8));
}
