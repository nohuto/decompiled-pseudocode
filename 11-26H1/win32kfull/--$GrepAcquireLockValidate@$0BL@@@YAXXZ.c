/*
 * XREFs of ??$GrepAcquireLockValidate@$0BL@@@YAXXZ @ 0x14031BC9C
 * Callers:
 *     ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14031BD24 (--0-$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<27>()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  _QWORD *v2; // rbx
  __int64 v3; // r9
  unsigned int v4; // edx

  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v1 = 0LL;
  v2 = (_QWORD *)result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    result = 0xFFFFFFDFF8000000uLL;
    if ( (v3 & 0xFFFFFFDFF8000000uLL) != 0 && (v3 & 0x8000000) == 0 )
    {
      v4 = 38;
      do
      {
        result = (unsigned int)v1;
        if ( ((1LL << v1) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          result = v4;
        ++v1;
        v4 = result;
      }
      while ( v1 < 0x40 );
      if ( (int)result > 27 && (_DWORD)result != 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *v2 |= 0x8000000uLL;
  }
  return result;
}
