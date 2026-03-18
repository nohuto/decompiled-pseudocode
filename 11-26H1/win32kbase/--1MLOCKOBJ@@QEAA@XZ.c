/*
 * XREFs of ??1MLOCKOBJ@@QEAA@XZ @ 0x14012E5BC
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B0C0 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall MLOCKOBJ::~MLOCKOBJ(MLOCKOBJ *this)
{
  __int64 SessionState; // rax
  int v2; // r8d

  if ( *(_DWORD *)this )
  {
    SessionState = W32GetSessionState(this);
    GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
      *(_QWORD *)(SessionState + 88),
      (HSEMAPHORE)(**(_QWORD **)(SessionState + 88) + 1512LL),
      v2);
  }
}
