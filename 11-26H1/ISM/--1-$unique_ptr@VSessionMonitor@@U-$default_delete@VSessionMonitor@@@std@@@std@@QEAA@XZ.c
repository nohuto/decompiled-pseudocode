/*
 * XREFs of ??1?$unique_ptr@VSessionMonitor@@U?$default_delete@VSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x1800A18CC
 * Callers:
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A18EC (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z @ 0x1800A1A68 (--R-$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SessionMonitor>::~unique_ptr<SessionMonitor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SessionMonitor>::operator()();
  return result;
}
