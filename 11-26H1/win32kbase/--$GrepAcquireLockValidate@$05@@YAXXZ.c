/*
 * XREFs of ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278
 * Callers:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C5E40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<6>()
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFC0uLL) != 0 && (v3 & 0x40) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 6 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *((_BYTE *)v2 + 14);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 14) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 0x40uLL;
  }
  return result;
}
