/*
 * XREFs of _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator() @ 0x1801CA058
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run @ 0x1801C9FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___--Run.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801FE130 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator()(unsigned int *a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // r8d
  const char *v6; // r9
  int v7; // [rsp+48h] [rbp+7h] BYREF
  __int16 v8; // [rsp+4Ch] [rbp+Bh]
  __int64 v9; // [rsp+50h] [rbp+Fh]
  _QWORD v10[3]; // [rsp+58h] [rbp+17h] BYREF
  _BYTE v11[8]; // [rsp+70h] [rbp+2Fh] BYREF
  __int128 v12; // [rsp+78h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v1 = *((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 120) + 112LL))(*(_QWORD *)(v1 + 120), *a1, a1[1]);
  v3 = (a1[1] & 0x20) == 0;
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  v12 = 0LL;
  if ( !v3 )
    v4 = 5;
  LODWORD(v12) = v4;
  v5 = `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
                      v11);
    v5 = v9;
  }
  v7 = 0;
  v8 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_180899A48,
    0x1389317u,
    (v5 >> 10) & 1,
    (v5 >> 11) & 1,
    (__int64)&v7,
    1u,
    3);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v12) |= 0x1E0u;
  v10[0] = 19LL;
  v10[1] = &v12;
  v10[2] = 16LL;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v1 + 128), v10) )
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
      *(_QWORD *)(v1 + 128),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
