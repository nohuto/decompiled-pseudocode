/*
 * XREFs of ?GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA?AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUIImmersiveMonitor@@@Z @ 0x1802BA530
 * Callers:
 *     ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x180233B98 (-SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonit.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapComponentTelemetry::GetDistanceFromScreenEdge(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int128 *); // rax
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = *(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 72LL);
  v14 = 0LL;
  if ( v6(a3, &v14) >= 0 )
  {
    v7 = a2 - 1;
    if ( !v7
      || (v8 = v7 - 1) == 0
      || (v9 = v8 - 1) == 0
      || (v10 = v9 - 1) == 0
      || (v11 = v10 - 1) == 0
      || (unsigned int)(v11 - 2) <= 1 )
    {
      LODWORD(v13) = DWORD2(v14) - a1;
      HIDWORD(v13) = HIDWORD(v14) - HIDWORD(a1);
      return v13;
    }
  }
  return v5;
}
