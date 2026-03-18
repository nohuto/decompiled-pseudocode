/*
 * XREFs of ??$GrepAcquireLockValidate@$0CB@@@YAXXZ @ 0x1401C3FF4
 * Callers:
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14010E4D0 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013898C (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<33>()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  _QWORD *v2; // rbx
  __int64 v3; // r9
  int v4; // edx
  int v5; // eax

  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v1 = 0LL;
  v2 = (_QWORD *)result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDE00000000uLL) != 0 && (*(_QWORD *)result & 0x200000000LL) == 0 )
    {
      v4 = 38;
      do
      {
        v5 = v1;
        if ( ((1LL << v1) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        ++v1;
        v4 = v5;
      }
      while ( v1 < 0x40 );
      if ( v5 > 33 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    result = 0x200000000LL;
    *v2 |= 0x200000000uLL;
  }
  return result;
}
