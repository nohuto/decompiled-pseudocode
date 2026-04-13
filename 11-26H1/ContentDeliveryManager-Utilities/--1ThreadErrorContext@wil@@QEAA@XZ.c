/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x18002A3D0
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$0 @ 0x1800BA2AD (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800BF1CF (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
