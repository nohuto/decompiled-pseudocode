/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800ADE00
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800ADD14 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1802EC940 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AEDE4 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802EC864 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        _QWORD *a4)
{
  struct IUnknown *v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 i; // r14
  __int64 v9; // rbx
  bool v10; // si
  HWND v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  HWND v16; // rax
  HWND v17; // rax
  HWND v18; // rdx
  unsigned int v19; // ebx
  int v21; // eax
  int pvAttribute; // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+4Ch] [rbp-25h] BYREF
  __int16 v24; // [rsp+50h] [rbp-21h]
  struct IUnknown *v25; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-11h]
  __int64 v27; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+70h] [rbp-1h]
  _BYTE v29[80]; // [rsp+78h] [rbp+7h] BYREF

  v4 = a2;
  v5 = a1;
  *a4 = 0LL;
  v27 = a1 + 184;
  v6 = *(_QWORD *)(a1 + 200);
  v26 = v6;
  v7 = v6;
  for ( i = 0LL; i < v6; ++i )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8 * i);
    v28 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = 1;
    if ( !v4 )
      goto LABEL_6;
    v25 = 0LL;
    v4 = *(struct IUnknown **)(*(_QWORD *)v9 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v21 = ((__int64 (__fastcall *)(__int64, struct IUnknown **))v4)(v9, &v25);
    LODWORD(v4) = 0;
    if ( v21 >= 0 && !SHIsSameObject(a2, v25) )
    {
      pvAttribute = 0;
      if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**(_QWORD **)(v5 + 264) + 80LL))(
             *(_QWORD *)(v5 + 264),
             v25,
             &pvAttribute) >= 0 )
        v10 = pvAttribute == 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    if ( v10 )
    {
LABEL_6:
      v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      if ( IsIconic(v11) )
      {
        v10 = (char)v4;
      }
      else
      {
        v12 = *(_QWORD *)(v5 + 280);
        if ( v12 )
        {
          pvAttribute = (int)v4;
          v4 = *(struct IUnknown **)(*(_QWORD *)v12 + 48LL);
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
          v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *))v4)(v12, v13, 0LL, &pvAttribute);
          LODWORD(v4) = 0;
          v5 = a1;
          if ( v14 >= 0 && pvAttribute == 1 )
            v10 = 0;
        }
        else
        {
          v5 = a1;
        }
      }
      v6 = v26;
    }
    v15 = `wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v25 = *(struct IUnknown **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetCachedFeatureEnabledState(
                                   &`wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl,
                                   v29);
      v15 = (unsigned int)v25;
    }
    v23 = 0;
    v24 = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_1808DDEE8,
      0x22DCEAAu,
      (v15 >> 10) & 1,
      (v15 >> 11) & 1,
      (__int64)&v23,
      1u,
      3);
    if ( a3 != 1
      || (pvAttribute = (int)v4,
          v16 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9),
          DwmGetWindowAttribute(v16, 0xEu, &pvAttribute, 4u) < 0)
      || pvAttribute == (_DWORD)v4 )
    {
      if ( v10 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 152LL))(v9)
          || (v17 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9),
              CApplicationManagerUtility::IsValidAndVisibleWindow(v17, v18)) )
        {
          *a4 = v9;
          v19 = (unsigned int)v4;
          goto LABEL_25;
        }
        v7 = i;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = a2;
  }
  v19 = -2147024809;
LABEL_25:
  if ( v7 != v6 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27, v7);
  return v19;
}
