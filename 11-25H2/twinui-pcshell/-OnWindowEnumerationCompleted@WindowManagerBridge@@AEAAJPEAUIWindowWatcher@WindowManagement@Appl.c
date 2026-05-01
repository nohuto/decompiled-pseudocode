/*
 * XREFs of ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18041F620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x180420938 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowEnumerationCompleted(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v8, this + 31);
  LOBYTE(this[25].Ptr) = 1;
  v4 = WindowManagerBridge::WindowManagerWatcherConnected((WindowManagerBridge *)this);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return v5;
}
