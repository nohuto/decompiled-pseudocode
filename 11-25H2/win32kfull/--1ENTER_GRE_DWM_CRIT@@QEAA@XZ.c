/*
 * XREFs of ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400957C0 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT(ENTER_GRE_DWM_CRIT *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v1);
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v5);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v6);
    *((_QWORD *)this + 3) = 0LL;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *((_BYTE *)this + 8) )
  {
    GreReleaseSemaphoreShared<1,>(*(__int64 **)this);
    *((_BYTE *)this + 8) = 0;
  }
}
