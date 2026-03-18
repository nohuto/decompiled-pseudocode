/*
 * XREFs of ExNotifyBootDeviceRemoval @ 0x1406CD570
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

char __fastcall ExNotifyBootDeviceRemoval(__int64 a1)
{
  if ( *(_DWORD *)a1 != 1347306562 )
    return 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 4)) == 1 && _InterlockedIncrement(&dword_140EFEF38) == 1 )
    KeSetEvent((PRKEVENT)&ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage, 0, 0);
  return 1;
}
