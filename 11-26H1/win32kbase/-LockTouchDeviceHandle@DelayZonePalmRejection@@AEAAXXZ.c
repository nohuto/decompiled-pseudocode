/*
 * XREFs of ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1401C506C
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 */

void __fastcall DelayZonePalmRejection::LockTouchDeviceHandle(DelayZonePalmRejection *this, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // r8d
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    v3 = *((_QWORD *)this + 2);
    v5[0] = (__int64 *)((char *)this + 24);
    v5[1] = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19864) + 40LL
                                                                                            * (unsigned __int16)v3);
    HMAssignmentLock(v5, 0, v4);
  }
}
