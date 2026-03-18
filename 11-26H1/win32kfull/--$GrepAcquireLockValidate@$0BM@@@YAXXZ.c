/*
 * XREFs of ??$GrepAcquireLockValidate@$0BM@@@YAXXZ @ 0x140102008
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ??$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402955B8 (--$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<28>()
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
    result = 0xFFFFFFDFF0000000uLL;
    if ( (v3 & 0xFFFFFFDFF0000000uLL) != 0 && (v3 & 0x10000000) == 0 )
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
      if ( (int)result > 28 && (_DWORD)result != 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *v2 |= 0x10000000uLL;
  }
  return result;
}
