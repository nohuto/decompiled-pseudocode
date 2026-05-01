/*
 * XREFs of ?UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ @ 0x180361AFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___::Run @ 0x180352F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___--Run.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x1803619D8 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall NexusPolicyManager::UpdateNexusChordEnablement(NexusPolicyManager *this)
{
  int v1; // eax
  unsigned int v2; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v4; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 1;
  SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"GamepadNexusChordEnabled", &v2);
  v3 = 192;
  SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"GamepadNexusChordCombo", &v3);
  v4 = v2 != 0 ? v3 : 0;
  v1 = RtlPublishWnfStateData(WNF_GIP_NEXUS_CHORD_COMBO, 0LL, &v4, 4LL) | 0x10000000;
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDE,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\NexusPolicyManager.cpp",
      (const char *)(unsigned int)v1);
}
