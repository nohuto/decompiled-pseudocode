/*
 * XREFs of ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x140083AD0
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vUnlockSingleThread(W32PIDLOCK *this)
{
  KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)this + 5) + 64LL), 0);
}
