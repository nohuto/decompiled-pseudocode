/*
 * XREFs of ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E386C
 * Callers:
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800898E4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800E348C (--1PnpDeviceWatcher@@QEAA@XZ.c)
 * Callees:
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E3720 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NtList<PnpDeviceWatcher::DeviceListEntry>::Clear(PnpDeviceWatcher::RetryDeviceListEntry *a1)
{
  PnpDeviceWatcher::RetryDeviceListEntry *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(PnpDeviceWatcher::RetryDeviceListEntry **)a1;
    if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)a1 + 8LL) != a1
      || (result = *(_QWORD *)v2, *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    if ( v2 )
      PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v2);
    --*((_DWORD *)a1 + 4);
  }
  return result;
}
