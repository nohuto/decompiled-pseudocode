/*
 * XREFs of ??$GrepAcquireLockValidate@$0CC@@@YAXXZ @ 0x14028B11C
 * Callers:
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x140318F6C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<34>()
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
    if ( (*(_QWORD *)result & 0xFFFFFFDC00000000uLL) != 0 && (*(_QWORD *)result & 0x400000000LL) == 0 )
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
      if ( v5 > 34 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    result = 0x400000000LL;
    *v2 |= 0x400000000uLL;
  }
  return result;
}
