/*
 * XREFs of PpProfileIncludeInHardwareProfileTransition @ 0x1407AD4F8
 * Callers:
 *     PipProcessStartPhase1 @ 0x1409108E0 (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PnpIrpQueryID @ 0x14090E818 (PnpIrpQueryID.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpProfileIncludeInHardwareProfileTransition(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  if ( a2 == 2 )
  {
    v4 = (__int64 *)(a1 + 576);
    if ( (__int64 *)*v4 == v4 )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      v5 = PiProfileDeviceListHead;
      if ( *(__int64 **)(PiProfileDeviceListHead + 8) != &PiProfileDeviceListHead )
        __fastfail(3u);
      v4[1] = (__int64)&PiProfileDeviceListHead;
      *v4 = v5;
      *(_QWORD *)(v5 + 8) = v4;
      ++PiProfileDeviceCount;
      PiProfileDeviceListHead = (__int64)v4;
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    if ( (int)PnpIrpQueryID(*(_QWORD *)(a1 + 32), 4LL, &P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedIncrement(&PiProfileDevicesInTransition);
  *(_DWORD *)(a1 + 568) = a2;
}
