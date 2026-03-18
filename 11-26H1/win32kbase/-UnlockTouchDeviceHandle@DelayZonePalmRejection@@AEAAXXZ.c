/*
 * XREFs of ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140194FE4
 * Callers:
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1401BF140 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1401C439C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 */

void __fastcall DelayZonePalmRejection::UnlockTouchDeviceHandle(DelayZonePalmRejection *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 24);
  if ( *v1 )
    HMAssignmentUnlock(v1);
}
