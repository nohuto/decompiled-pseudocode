/*
 * XREFs of ?ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ @ 0x14015B8B8
 * Callers:
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x14015B890 (ForceUpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x140152E44 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x140223B44 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 */

void __fastcall CInputSystemMetrics::ForceUpdatePointerDeviceSystemMetrics(CInputSystemMetrics *this, __int64 a2)
{
  CInputSystemMetrics *v3; // rcx
  CInputSystemMetrics *v4; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 356) )
  {
    CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(v3, *(unsigned int *)this);
    CInputSystemMetrics::WritePointerDevicePresenceKey(v4, *((_DWORD *)this + 1));
  }
}
