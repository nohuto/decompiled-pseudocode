/*
 * XREFs of ForceUpdatePointerDeviceSystemMetrics @ 0x1401919F0
 * Callers:
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140219890 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x140190B78 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1401BFA3C (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 */

void __fastcall ForceUpdatePointerDeviceSystemMetrics(int a1, int a2, int a3)
{
  unsigned int *v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  CInputSystemMetrics *v7; // rcx
  CInputSystemMetrics *v8; // rcx

  v3 = *(unsigned int **)(W32GetUserSessionState(a1, a2, a3) + 18992);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4, v6) + 356) )
  {
    CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(v7, *v3);
    CInputSystemMetrics::WritePointerDevicePresenceKey(v8, v3[1]);
  }
}
