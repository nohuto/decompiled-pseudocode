/*
 * XREFs of ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1401C1BD4
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14018A228 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::HandleDelayZonePalmRejectionTimer(CHidInput *this, char a2, int a3)
{
  void *v3; // r10
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  v3 = (void *)*((_QWORD *)this + 67);
  if ( a2 )
  {
    ZwCancelTimer(*((HANDLE *)this + 67), 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000LL * a3;
    ZwSetTimer(v3, &DueTime, 0LL, 0LL, 0, 0, 0LL);
  }
}
