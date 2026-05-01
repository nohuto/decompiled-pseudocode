/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800D9E68
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800D9D8C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1802F1D10 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D8E48 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F1C24 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        _QWORD *a4)
{
  struct IUnknown *v4; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 i; // r14
  __int64 v9; // rbx
  bool v10; // si
  HWND v11; // rax
  __int64 v12; // r12
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rbx
  HWND v17; // rax
  CApplicationManagerUtility *v18; // rax
  HWND v19; // rdx
  unsigned int v20; // ebx
  int v22; // eax
  int v23; // [rsp+40h] [rbp-38h] BYREF
  __int16 v24; // [rsp+44h] [rbp-34h]
  struct IUnknown *v25; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  _BYTE v28[24]; // [rsp+60h] [rbp-18h] BYREF
  __int64 pvAttribute; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v30; // [rsp+C8h] [rbp+50h]
  int v31; // [rsp+D0h] [rbp+58h]
  _QWORD *v32; // [rsp+D8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v4 = a2;
  *a4 = 0LL;
  v6 = *(_QWORD *)(a1 + 200);
  v26 = v6;
  v7 = v6;
  for ( i = 0LL; i < v6; ++i )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v27 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = 1;
    if ( !v4 )
      goto LABEL_36;
    v25 = 0LL;
    v4 = *(struct IUnknown **)(*(_QWORD *)v9 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v22 = ((__int64 (__fastcall *)(__int64, struct IUnknown **))v4)(v9, &v25);
    LODWORD(v4) = 0;
    if ( v22 >= 0 && !SHIsSameObject(v30, v25) )
    {
      LODWORD(pvAttribute) = 0;
      if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**(_QWORD **)(a1 + 264) + 80LL))(
             *(_QWORD *)(a1 + 264),
             v25,
             &pvAttribute) >= 0 )
        v10 = (_DWORD)pvAttribute == 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    if ( v10 )
    {
LABEL_36:
      v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      if ( IsIconic(v11) )
        goto LABEL_11;
      v12 = *(_QWORD *)(a1 + 280);
      if ( !v12
        || (LODWORD(pvAttribute) = (_DWORD)v4,
            v4 = *(struct IUnknown **)(*(_QWORD *)v12 + 48LL),
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9),
            v14 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))v4)(v12, v13, 0LL, &pvAttribute),
            LODWORD(v4) = 0,
            v14 < 0) )
      {
        v6 = v26;
        goto LABEL_13;
      }
      v6 = v26;
      if ( (_DWORD)pvAttribute == 1 )
LABEL_11:
        v10 = (char)v4;
    }
LABEL_13:
    v15 = `wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl & 4) == 0 )
    {
      pvAttribute = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetCachedFeatureEnabledState(
                                 &`wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl,
                                 v28);
      v15 = pvAttribute;
    }
    v23 = 0;
    v24 = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_18089D8D8,
      0x22DCEAAu,
      (v15 >> 10) & 1,
      (v15 >> 11) & 1,
      (__int64)&v23,
      1u,
      3);
    v16 = v27;
    if ( v31 != 1
      || (LODWORD(pvAttribute) = (_DWORD)v4,
          v17 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27),
          DwmGetWindowAttribute(v17, 0xEu, &pvAttribute, 4u) < 0)
      || (_DWORD)pvAttribute == (_DWORD)v4 )
    {
      if ( v10 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 152LL))(v16)
          || (v18 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16),
              CApplicationManagerUtility::IsValidAndVisibleWindow(v18, v19)) )
        {
          *v32 = v16;
          v20 = (unsigned int)v4;
          goto LABEL_25;
        }
        v7 = i;
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v4 = v30;
  }
  v20 = -2147024809;
LABEL_25:
  if ( v7 != v6 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(a1 + 184) + 16LL))(a1 + 184, v7);
  return v20;
}
