/*
 * XREFs of ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400A7644
 * Callers:
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A7728 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B8AA4 (--0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??0VIDMM_TELEMETRY_PAGING_COSTS@@QEAA@XZ @ 0x1400AB244 (--0VIDMM_TELEMETRY_PAGING_COSTS@@QEAA@XZ.c)
 */

VIDMM_WORKER_THREAD *__fastcall VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_GLOBAL *a2)
{
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 10;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 76;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 8;
  *((_WORD *)this + 106) = 0;
  *((_BYTE *)this + 215) = 1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  VIDMM_TELEMETRY_PAGING_COSTS::VIDMM_TELEMETRY_PAGING_COSTS((VIDMM_WORKER_THREAD *)((char *)this + 416));
  *((_DWORD *)this + 1332) = 0;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  return this;
}
