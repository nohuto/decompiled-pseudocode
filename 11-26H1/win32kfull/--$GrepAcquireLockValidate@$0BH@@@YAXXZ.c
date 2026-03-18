/*
 * XREFs of ??$GrepAcquireLockValidate@$0BH@@@YAXXZ @ 0x140215F18
 * Callers:
 *     UnmapPrintKView @ 0x1400FD6F0 (UnmapPrintKView.c)
 *     ??0?$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140215EE4 (--0-$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<23>()
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
    result = 0xFFFFFFDFFF800000uLL;
    if ( (v3 & 0xFFFFFFDFFF800000uLL) != 0 && (v3 & 0x800000) == 0 )
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
      if ( (int)result > 23 && (_DWORD)result != 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *v2 |= 0x800000uLL;
  }
  return result;
}
