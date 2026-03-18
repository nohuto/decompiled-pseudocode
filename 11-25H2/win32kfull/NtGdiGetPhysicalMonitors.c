/*
 * XREFs of NtGdiGetPhysicalMonitors @ 0x140210160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetPhysicalMonitors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  __int64 v8; // rdi
  int PhysicalMonitorObjects; // ebx

  v6 = a2;
  v8 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  OPM::CMutex::Lock(*(OPM::CMutex **)(v8 + 128));
  PhysicalMonitorObjects = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( PhysicalMonitorObjects >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, 1LL, 1LL, 1LL, v6, a3, a4);
    ReleaseUserCriticalSection();
  }
  OPM::CMutex::Unlock(*(OPM::CMutex **)(v8 + 128));
  return (unsigned int)PhysicalMonitorObjects;
}
