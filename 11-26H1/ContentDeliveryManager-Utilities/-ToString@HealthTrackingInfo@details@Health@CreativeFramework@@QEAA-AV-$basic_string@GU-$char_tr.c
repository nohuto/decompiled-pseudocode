/*
 * XREFs of ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800598E0
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004F91C (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003BCB0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::Health::details::HealthTrackingInfo::ToString(__int64 a1, __int64 a2)
{
  int v4; // [rsp+58h] [rbp-460h]
  int v5; // [rsp+60h] [rbp-458h]
  int v6; // [rsp+68h] [rbp-450h]
  int v7; // [rsp+70h] [rbp-448h]
  BOOL v8; // [rsp+78h] [rbp-440h]
  BOOL v9; // [rsp+80h] [rbp-438h]
  BOOL v10; // [rsp+88h] [rbp-430h]
  unsigned __int16 v11[512]; // [rsp+A0h] [rbp-418h] BYREF

  v10 = *(_BYTE *)(a1 + 82) != 0;
  v9 = *(_BYTE *)(a1 + 81) != 0;
  v8 = *(_BYTE *)(a1 + 80) != 0;
  v7 = *(_DWORD *)(a1 + 76);
  v6 = *(_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(a1 + 68);
  v4 = *(_DWORD *)(a1 + 64);
  StringCchPrintfW(
    v11,
    0x200uLL,
    (size_t *)L"{ %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %u; %u; %u; %u; %u; %u; %u }",
    *(_QWORD *)a1,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)(a1 + 56),
    v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  std::wstring::wstring(a2);
  return a2;
}
