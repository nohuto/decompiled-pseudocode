/*
 * XREFs of ??1SURFREFGC@@QEAA@XZ @ 0x140157B88
 * Callers:
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1680 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 */

void __fastcall SURFREFGC::~SURFREFGC(SURFREFGC *this)
{
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *((_QWORD *)this + 5));
  SURFREF::~SURFREF(this);
}
