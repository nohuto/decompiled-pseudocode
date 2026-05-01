/*
 * XREFs of ?StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ @ 0x18060C5B8
 * Callers:
 *     ?EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060AC78 (-EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18001A16C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C89D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803CECB0 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 *     ?copy_ref@?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806078BC (-copy_ref@-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackground.c)
 *     ??$StartXamlHostThreadEnd@AEAY0BP@$$CBG@SharedVisualHostProvider@@SAXAEAY0BP@$$CBG@Z @ 0x180608CA4 (--$StartXamlHostThreadEnd@AEAY0BP@$$CBG@SharedVisualHostProvider@@SAXAEAY0BP@$$CBG@Z.c)
 *     ??$StartXamlHostThreadEnd@AEAY0DG@$$CBG@SharedVisualHostProvider@@SAXAEAY0DG@$$CBG@Z @ 0x180608CEC (--$StartXamlHostThreadEnd@AEAY0DG@$$CBG@SharedVisualHostProvider@@SAXAEAY0DG@$$CBG@Z.c)
 *     ??$StartXamlHostThreadStart@AEAY0BN@$$CBG@SharedVisualHostProvider@@SAXAEAY0BN@$$CBG@Z @ 0x180608D34 (--$StartXamlHostThreadStart@AEAY0BN@$$CBG@SharedVisualHostProvider@@SAXAEAY0BN@$$CBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SharedDesktopBackgroundVisualHost::StartXamlHostThread(SharedDesktopBackgroundVisualHost *this)
{
  char v2; // di
  const WCHAR *v3; // rcx
  void *v5; // rdx
  BOOL v6; // eax
  const WCHAR *v7; // rcx
  const char *v8; // r9
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+70h] [rbp+8h] BYREF
  void *pData; // [rsp+78h] [rbp+10h] BYREF
  HANDLE pHandle; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+20h] BYREF

  v12 = (RTL_SRWLOCK *)this;
  SharedVisualHostProvider::StartXamlHostThreadStart<unsigned short const (&)[29]>((const WCHAR *)this);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&pData, (RTL_SRWLOCK *)this + 22);
  if ( *((_DWORD *)this + 46) || *((_BYTE *)this + 210) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    *((_DWORD *)this + 46) = 1;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&pData);
  if ( v2 )
  {
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&pData, (RTL_SRWLOCK *)this + 22);
    wil::details::ResetEvent(*((wil::details **)this + 29), v5);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&pData);
    pHandle = 0LL;
    pData = 0LL;
    winrt::com_ptr<SharedDesktopBackgroundVisualHost>::copy_ref((__int64 *)&pData, (__int64)this);
    v9 = 0;
    v10 = 0LL;
    v6 = SHCreateThreadWithHandle(
           (LPTHREAD_START_ROUTINE)lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_,
           pData,
           0xC000u,
           (LPTHREAD_START_ROUTINE)lambda_3a06c2c252ae701a17f26d0b735b6b61_::_lambda_invoker_cdecl_,
           &pHandle);
    try
    {
      winrt::check_bool<int>(v6, (winrt *)&v9);
      pData = 0LL;
      wil::AcquireSRWLockExclusive(&v15, (RTL_SRWLOCK *)this + 22);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 31,
        pHandle);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
      SharedVisualHostProvider::StartXamlHostThreadEnd<unsigned short const (&)[31]>(v7);
      winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&pData);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
        v8);
      wil::AcquireSRWLockExclusive(&v12, v12 + 22);
      LODWORD(v12[23].Ptr) = 0;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    }
    return 1;
  }
  else
  {
    SharedVisualHostProvider::StartXamlHostThreadEnd<unsigned short const (&)[54]>(v3);
    return 0;
  }
}
