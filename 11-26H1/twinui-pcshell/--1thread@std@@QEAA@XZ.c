/*
 * XREFs of ??1thread@std@@QEAA@XZ @ 0x1802C6ED8
 * Callers:
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x180583FE0 (--1StartupAppMonitor@@UEAA@XZ.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1806D4588 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$2 @ 0x1806DA375 (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::thread::~thread(std::thread *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    _o_terminate();
    __debugbreak();
  }
}
