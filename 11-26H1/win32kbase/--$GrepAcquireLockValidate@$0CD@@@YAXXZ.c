/*
 * XREFs of ??$GrepAcquireLockValidate@$0CD@@@YAXXZ @ 0x1400453DC
 * Callers:
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400452D0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x1400454D0 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<35>()
{
  __int64 result; // rax
  unsigned __int64 v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // r8
  unsigned int v4; // edx

  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v1 = 0LL;
  v2 = (_QWORD *)result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    result = 0xFFFFFFD800000000uLL;
    if ( (v3 & 0xFFFFFFD800000000uLL) != 0 && (v3 & 0x800000000LL) == 0 )
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
      if ( (int)result > 35 && (_DWORD)result != 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, (unsigned int)result, v3);
    }
    *v2 |= 0x800000000uLL;
  }
  return result;
}
