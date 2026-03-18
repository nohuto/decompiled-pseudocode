/*
 * XREFs of ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1401A1DEC
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400CF1E8 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140214D28 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 */

void __fastcall DelayZonePalmRejection::UnlockTouchDeviceHandle(DelayZonePalmRejection *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 24);
  if ( *v1 )
    HMAssignmentUnlock(v1);
}
