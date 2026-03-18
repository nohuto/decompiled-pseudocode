/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x140A4E9F0
 * Callers:
 *     VmpPrefetchForVirtualFault @ 0x14081CF2C (VmpPrefetchForVirtualFault.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1403750A0 (PsGetIoPriorityThread.c)
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
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
