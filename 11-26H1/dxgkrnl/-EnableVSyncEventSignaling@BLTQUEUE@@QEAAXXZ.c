/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1402A1460
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14029F3D0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402A12F8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED684 (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14004D29C (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ @ 0x1403DB27C (-LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedExchange64((volatile __int64 *)this + 120, KeQueryPerformanceCounter(0LL).QuadPart);
  else
    *((LARGE_INTEGER *)this + 120) = KeQueryPerformanceCounter(0LL);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) |= 8u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
  {
    _InterlockedExchange((volatile __int32 *)this + 168, 1);
  }
  else
  {
    *((_BYTE *)this + 659) = 1;
  }
  KeSetEvent((PRKEVENT)this + 23, 0, 0);
  BLTQUEUE::LogWaitForVsyncCalls(this);
}
