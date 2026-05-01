/*
 * XREFs of ?GetPrimaryMonitorSize@@YA?AUSize@Foundation@Windows@winrt@@XZ @ 0x1805E1B38
 * Callers:
 *     ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1805E16B0 (-DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPE.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1805E1824 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

float *__fastcall GetPrimaryMonitorSize(float *a1)
{
  HMONITOR v2; // rbx
  unsigned int SystemMetrics; // eax
  __m128i v4; // xmm0
  float *result; // rax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-88h] BYREF

  *a1 = 0.0;
  a1[1] = 0.0;
  v2 = MonitorFromPoint(0LL, 1u);
  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    SystemMetrics = mi.rcMonitor.bottom - mi.rcMonitor.top;
    *a1 = (float)(mi.rcMonitor.right - mi.rcMonitor.left);
  }
  else
  {
    *a1 = (float)GetSystemMetrics(0);
    SystemMetrics = GetSystemMetrics(1);
  }
  v4 = _mm_cvtsi32_si128(SystemMetrics);
  result = a1;
  *((_DWORD *)a1 + 1) = _mm_cvtepi32_ps(v4).m128_u32[0];
  return result;
}
