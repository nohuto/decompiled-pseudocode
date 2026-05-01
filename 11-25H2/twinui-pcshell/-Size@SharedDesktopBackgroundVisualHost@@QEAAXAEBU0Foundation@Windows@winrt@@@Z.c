/*
 * XREFs of ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1805E7090
 * Callers:
 *     ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1805E16B0 (-DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPE.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1805E1824 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1805EA248 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 *     ?put_Size@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x1805EAD30 (-put_Size@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@U.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@AEBMAEBM@UpdateSize@SharedVisualHostProvider@@SA?AV01@AEBM0@Z @ 0x1805E3FB8 (--$Start@AEBMAEBM@UpdateSize@SharedVisualHostProvider@@SA-AV01@AEBM0@Z.c)
 *     ??1UpdateSize@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E52F0 (--1UpdateSize@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorLeftTop@SharedDesktopBackgroundVisualHost@@AEAA?AV?$tuple@HH@std@@XZ @ 0x1805E6154 (-GetPrimaryMonitorLeftTop@SharedDesktopBackgroundVisualHost@@AEAA-AV-$tuple@HH@std@@XZ.c)
 *     ?Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1805E841C (-Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::Size(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Foundation::Size *a2)
{
  _DWORD *v2; // rsi
  HWND Ptr; // rbx
  __int64 v6; // rcx
  bool v7; // zf
  int Y[4]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v9[336]; // [rsp+50h] [rbp-168h] BYREF

  v2 = (_DWORD *)((char *)a2 + 4);
  SharedVisualHostProvider::UpdateSize::Start<float const &,float const &>(
    (SharedVisualHostProvider::UpdateSize *)v9,
    (float *)a2,
    (float *)a2 + 1);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)Y, this + 22);
  LODWORD(this[39].Ptr) = *(_DWORD *)a2;
  HIDWORD(this[39].Ptr) = *v2;
  Ptr = (HWND)this[34].Ptr;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)Y);
  v7 = Ptr == 0LL;
  if ( Ptr )
  {
    SharedDesktopBackgroundVisualHost::GetPrimaryMonitorLeftTop(v6, Y);
    SetWindowPos(Ptr, 0LL, Y[1], Y[0], (int)*(float *)a2, (int)*(float *)v2, 0x10u);
    v7 = Ptr == 0LL;
  }
  SharedVisualHostProvider::UpdateSize::Stop((SharedVisualHostProvider::UpdateSize *)v9, !v7);
  SharedVisualHostProvider::UpdateSize::~UpdateSize((SharedVisualHostProvider::UpdateSize *)v9);
}
