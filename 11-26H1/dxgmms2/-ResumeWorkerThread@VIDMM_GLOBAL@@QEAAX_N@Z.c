/*
 * XREFs of ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1401153B0
 * Callers:
 *     VidMmResumeWorkerThread @ 0x140042040 (VidMmResumeWorkerThread.c)
 * Callees:
 *     VidMmRequestWorkerThreadStatus @ 0x1401153D0 (VidMmRequestWorkerThreadStatus.c)
 */

void __fastcall VIDMM_GLOBAL::ResumeWorkerThread(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  LOBYTE(a2) = 1;
  VidMmRequestWorkerThreadStatus(*(_QWORD *)this, a2, a3);
}
