/*
 * XREFs of _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator() @ 0x1801C03D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run @ 0x1801C0350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___--Run.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180124A00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator()(unsigned int *a1)
{
  bool v2; // zf
  int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // rcx
  const char *v6; // r9
  int v7; // [rsp+40h] [rbp-40h] BYREF
  __int16 v8; // [rsp+44h] [rbp-3Ch]
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v11; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 120LL) + 112LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 120LL),
    *a1,
    a1[1]);
  v2 = (a1[1] & 0x20) == 0;
  v3 = _mm_cvtsi128_si32((__m128i)0LL);
  v11 = 0LL;
  if ( !v2 )
    v3 = 5;
  LODWORD(v11) = v3;
  v4 = `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v9 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
            &v9);
    v4 = v9;
  }
  v7 = 0;
  v8 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1808DA038,
    0x1389317u,
    (v4 >> 10) & 1,
    (v4 >> 11) & 1,
    (__int64)&v7,
    1u,
    3);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v11) |= 0x1E0u;
  v5 = *((_QWORD *)a1 + 2);
  v10[0] = 19LL;
  v10[1] = &v11;
  v10[2] = 16LL;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v5 + 128), v10) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x542,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v6);
  if ( *((_BYTE *)a1 + 8) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 128LL),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
