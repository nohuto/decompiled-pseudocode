/*
 * XREFs of PopDevicePowerTransitionInProgressWorker @ 0x1404C7FB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

void PopDevicePowerTransitionInProgressWorker()
{
  KIRQL v0; // dl
  BOOL v1; // [rsp+58h] [rbp+10h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F10570);
  do
  {
    v1 = dword_140F0FB44 != 0;
    KeReleaseSpinLock(&qword_140F10570, v0);
    ZwUpdateWnfStateData(&WNF_PO_DEVICE_POWER_TRANSITION, &v1, 4LL, 0LL, 0LL, 0, 0);
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F10570);
  }
  while ( v1 != (dword_140F0FB44 != 0) );
  byte_140F0FB48 = 0;
  KeReleaseSpinLock(&qword_140F10570, v0);
}
