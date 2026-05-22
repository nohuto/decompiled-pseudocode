/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x1801017F4
 * Callers:
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x180100F08 (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x180101870 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x1801DAB55 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x180101DB0 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x180101DE0 (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 */

void __fastcall MPCTarget::~MPCTarget(MPCTarget *this)
{
  *(_QWORD *)this = &MPCTarget::`vftable'{for `IMPCTarget'};
  *((_QWORD *)this + 1) = &MPCTarget::`vftable'{for `RefCountedObject'};
  MPCTarget::RemoveFromRouter(this);
  MPCTarget::StopWindowWatcher(this);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((MPCTarget *)((char *)this + 64));
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
