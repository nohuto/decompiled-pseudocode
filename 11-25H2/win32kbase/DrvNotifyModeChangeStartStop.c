/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x140074AC0
 * Callers:
 *     ApplyPathsModality @ 0x1401C9D0C (ApplyPathsModality.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140043A70 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046760 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140072A48 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400735C4 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400877D0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(__int64 a1)
{
  char v1; // bp
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  PDEV *i; // rcx
  PDEV *v6; // rax
  PDEV *v7; // rbx
  int v8; // ecx
  __int64 v9; // rcx
  PDEV *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v12, v2);
  v3 = *v2 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  v4 = *v2 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  for ( i = 0LL; ; i = v7 )
  {
    v6 = hdevEnumerate<1>(i);
    v7 = v6;
    if ( !v6 )
      break;
    v8 = *((_DWORD *)v6 + 10) & 0x20401;
    v11 = v6;
    if ( v8 == 1 )
    {
      v9 = *((_QWORD *)v6 + 321);
      if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
      {
        GreAcquireSemaphore<8,PDEVOBJ>(v6);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v11,
          (struct _SURFOBJ *)((*((_QWORD *)v7 + 318) + 24LL) & -(__int64)(*((_QWORD *)v7 + 318) != 0LL)),
          0LL,
          v1 != 0 ? 30 : 18);
        GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *((_QWORD *)v7 + 6));
      }
    }
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v4);
  if ( v3 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v3);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v12);
}
