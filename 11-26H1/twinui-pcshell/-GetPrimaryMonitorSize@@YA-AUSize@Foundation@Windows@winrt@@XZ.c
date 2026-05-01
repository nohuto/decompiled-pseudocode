/*
 * XREFs of ?GetPrimaryMonitorSize@@YA?AUSize@Foundation@Windows@winrt@@XZ @ 0x180606768
 * Callers:
 *     ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806062D0 (-DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPE.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180606450 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall GetPrimaryMonitorSize(__int64 a1)
{
  HMONITOR v2; // rbx
  unsigned int SystemMetrics; // eax
  __m128i v4; // xmm0
  __int64 result; // rax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-88h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    SystemMetrics = mi.rcMonitor.bottom - mi.rcMonitor.top;
    *(float *)a1 = (float)(mi.rcMonitor.right - mi.rcMonitor.left);
  }
  else
  {
    *(float *)a1 = (float)GetSystemMetrics(0);
    SystemMetrics = GetSystemMetrics(1);
  }
  v4 = _mm_cvtsi32_si128(SystemMetrics);
  result = a1;
  *(_DWORD *)(a1 + 4) = _mm_cvtepi32_ps(v4).m128_u32[0];
  return result;
}
