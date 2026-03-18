/*
 * XREFs of ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140215254
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C3C98 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 */

void __fastcall DelayZonePalmRejection::LockTouchDeviceHandle(DelayZonePalmRejection *this, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    v2 = (unsigned __int16)*((_DWORD *)this + 4);
    v3[0] = (char *)this + 24;
    v3[1] = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19832) + 40 * v2);
    HMAssignmentLock((__int64)v3, 0LL);
  }
}
