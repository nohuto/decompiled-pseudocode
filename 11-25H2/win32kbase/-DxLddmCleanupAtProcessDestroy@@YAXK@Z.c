/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1400854F0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockSprite @ 0x1400863E0 (GreLockSprite.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x140086668 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401D01E4 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  PDEV *v2; // rbx
  int v3; // ecx
  void (__fastcall *v4)(_QWORD, __int64); // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rcx
  __int64 SessionState; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  PDEV *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v11);
  v2 = hdevEnumerate<1>(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10) & 0x20001;
      v10 = v2;
      if ( v3 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v10) )
      {
        GreLockVisRgn((__int64)v2);
        GreLockSprite(v2);
        GreAcquireSemaphore<8,PDEVOBJ>(v2);
        DxLddmPrimaryLockProcessDestroy((HDEV)v2, a1, &v9);
        v4 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v2 + 331);
        if ( v4 )
        {
          CurrentProcess = PsGetCurrentProcess();
          v4(*((_QWORD *)v2 + 223), CurrentProcess);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry1(2LL, CurrentProcessSessionId);
          WdLogGlobalForLineNumber = 1099;
        }
        GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *((_QWORD *)v2 + 6));
        SessionState = W32GetSessionState(v6);
        GreReleaseSemaphoreExclusive<6,>(*(_QWORD *)(SessionState + 88));
        GreUnlockVisRgn((__int64)v2);
      }
      v2 = hdevEnumerate<1>(v2);
    }
    while ( v2 );
    if ( v9 )
      DxLddmLogProcessPrimaryLockCount(v9);
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v11);
}
