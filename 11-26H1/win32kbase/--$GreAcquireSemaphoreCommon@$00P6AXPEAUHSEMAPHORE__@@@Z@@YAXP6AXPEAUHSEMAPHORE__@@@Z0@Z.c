/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7164 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7268 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v8; // rbx
  _BYTE *v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // rcx
  int v12; // r8d
  int v13; // eax

  a1(a2);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v3),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    result = PsGetThreadWin32Thread(CurrentThread);
    if ( result )
    {
      result = *(_QWORD *)result;
      if ( result )
      {
        v8 = (_QWORD *)(result + 8);
        v9 = (_BYTE *)(result + 17);
        if ( result != -8 )
        {
          if ( (*v8 & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*v8 & 2) == 0 )
          {
            v11 = 0LL;
            v12 = 38;
            do
            {
              v13 = v11;
              if ( ((1LL << v11) & 0xFFFFFFDFFFFFFFFFuLL & *v8) == 0 )
                v13 = v12;
              ++v11;
              v12 = v13;
            }
            while ( v11 < 0x40 );
            if ( v13 > 1 && v13 != 38 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
          }
          v10 = (unsigned __int8)*v9;
          result = (unsigned int)(v10 + 1);
          *v9 = v10 + 1;
          if ( !(_BYTE)v10 )
            *v8 |= 2uLL;
        }
      }
    }
  }
  return result;
}
