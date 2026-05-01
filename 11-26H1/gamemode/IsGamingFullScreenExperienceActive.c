/*
 * XREFs of IsGamingFullScreenExperienceActive @ 0x18000E500
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800067AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800067C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008C88 (--$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000DD48 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x18000DE14 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     IsGamingFullScreenExperienceSupported @ 0x18000E8A0 (IsGamingFullScreenExperienceSupported.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 IsGamingFullScreenExperienceActive()
{
  unsigned int v0; // edi
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  __int64 result; // rax
  HRESULT v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 (__fastcall *v10)(LPVOID, SID *, GUID *, _QWORD **); // rsi
  _QWORD *v11; // rcx
  HRESULT v12; // eax
  int ActivationFactory; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  wil::details::in1diag3 *v19; // rcx
  unsigned int v20; // ebx
  int ppv; // [rsp+20h] [rbp-78h]
  _BYTE v22[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  int v24; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-50h] BYREF
  LPVOID v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27; // [rsp+58h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-38h] BYREF
  HSTRING string; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v0 = 0;
  v1 = IsGamingFullScreenExperienceSupported();
  try
  {
    if ( !v1 )
      return 0LL;
    v24 = 0;
    if ( wil::try_wnf_query<unsigned long>(v2, &v24, v3) )
    {
      LOBYTE(v0) = v24 != 0;
      return v0;
    }
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      return 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v6 = CoCreateInstance(&CLSID_AgileImmersiveShellBroker, 0LL, 4u, &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c, &v26);
    v7 = retaddr;
    if ( v6 >= 0 )
    {
      v9 = v26;
      v10 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, _QWORD **))(*(_QWORD *)v26 + 96LL);
      v11 = v25;
      v25 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
      v6 = v10(v9, &SID_GamingPostureBroker, &GUID_65a90a52_2944_5eb7_aaa6_65b56afe4cbc, &v25);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v23 = 0LL;
        v15 = *v25;
        v23 = 0LL;
        v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v15 + 64))(v25, &v23);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFB,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_41;
        }
        v27 = 0LL;
        v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
                v23,
                &GUID_1822e102_f6d0_5879_a944_49964b222126,
                &v27);
        v19 = retaddr;
        if ( v17 >= 0 )
        {
          if ( !v27 )
            goto LABEL_41;
          v22[0] = 0;
          if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 48LL))(v27, v22) < 0 || (v20 = 1, !v22[0]) )
            v20 = 0;
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          if ( v25 )
            (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
          if ( v26 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
          return v20;
        }
        goto LABEL_49;
      }
      v8 = 248LL;
    }
    else
    {
      v8 = 247LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      (const char *)(unsigned int)v6);
    v23 = 0LL;
    string = 0LL;
    v12 = WindowsCreateStringReference(
            L"Windows.Internal.GamingExperiences.Posture.GamingPostureConfiguration",
            0x45u,
            &hstringHeader,
            &string);
    if ( v12 >= 0 )
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_1822e102_f6d0_5879_a944_49964b222126, &v23);
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10A,
          (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
          (const char *)(unsigned int)ActivationFactory);
LABEL_41:
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v25 )
          (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
        if ( v26 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
        return 0LL;
      }
      v22[0] = 0;
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 48LL))(v23, v22) < 0 || (v14 = 1, !v22[0]) )
        v14 = 0;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v25 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      if ( v26 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
      return v14;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
LABEL_49:
    wil::details::in1diag3::_Throw_Hr(v19, v18, v3, (const char *)(unsigned int)v17, ppv);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x118, v3, v4);
    return 0LL;
  }
  return result;
}
