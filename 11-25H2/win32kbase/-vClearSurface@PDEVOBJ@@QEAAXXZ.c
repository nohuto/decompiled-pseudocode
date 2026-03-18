/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C3EE4
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014ED30 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  struct _ERESOURCE **v2; // rbx
  struct _ERESOURCE *v3; // rdx
  _BYTE v4[152]; // [rsp+20h] [rbp-98h] BYREF
  struct _ERESOURCE *v5; // [rsp+C0h] [rbp+8h] BYREF

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(this) + 88);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v4, this);
  SEMOBJ<19>::SEMOBJ<19>(&v5, v2);
  v3 = v5;
  *(_QWORD *)(*(_QWORD *)this + 2544LL) = 0LL;
  if ( v3 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v3);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v4);
}
