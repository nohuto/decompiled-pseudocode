/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18011B544
 * Callers:
 *     ??0CMonitor@@QEAA@PEAUStreamConnectionSettings@@_N@Z @ 0x18011B578 (--0CMonitor@@QEAA@PEAUStreamConnectionSettings@@_N@Z.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18011B684 (--0CMonitorManager@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
