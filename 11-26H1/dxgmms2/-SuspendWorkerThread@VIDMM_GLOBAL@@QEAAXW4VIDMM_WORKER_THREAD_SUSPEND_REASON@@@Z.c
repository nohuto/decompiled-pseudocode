/*
 * XREFs of ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x14011537C
 * Callers:
 *     VidMmSuspendWorkerThread @ 0x140041F60 (VidMmSuspendWorkerThread.c)
 * Callees:
 *     VidMmRequestWorkerThreadStatus @ 0x1401153D0 (VidMmRequestWorkerThreadStatus.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SuspendWorkerThread(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)(a2 - 1);
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 != 1 )
        return result;
      LOBYTE(a2) = 5;
    }
    else
    {
      LODWORD(a2) = 4;
    }
  }
  else
  {
    LODWORD(a2) = 3;
  }
  return VidMmRequestWorkerThreadStatus(*a1, a2, 0LL);
}
