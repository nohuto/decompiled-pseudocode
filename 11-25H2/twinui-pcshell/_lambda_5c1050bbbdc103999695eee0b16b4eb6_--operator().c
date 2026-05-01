/*
 * XREFs of _lambda_5c1050bbbdc103999695eee0b16b4eb6_::operator() @ 0x18047B6F8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_367a5cd60e7da2009a0ae4f6d60c9cb3___::Invoke @ 0x18047C580 (CAsyncCallbackWithLambda__lambda_367a5cd60e7da2009a0ae4f6d60c9cb3___--Invoke.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801DF010 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180259094 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18047C8B4 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA_NXZ @ 0x18047E108 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5c1050bbbdc103999695eee0b16b4eb6_::operator()(
        int **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int *v4; // rax
  bool v6; // di
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rcx
  int v11; // edx
  int *v12; // rcx
  int *v13; // rax
  __int64 v14; // rcx
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF
  const wchar_t *v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a1;
  v16 = 0;
  v6 = 0;
  if ( v4[118] > 0 )
  {
    SHRegGetBOOLWithREGSAM(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", a4, &v16);
    if ( v16 )
      v6 = 1;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2508>::GetImpl'::`2'::impl) )
  {
    v7 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v10 = *a1;
      LOBYTE(v16) = v6;
      v11 = v10[118];
      v18 = (const wchar_t *)"AccessibilityExperienceManager::OnNotificationEvent";
      v17 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v7,
        byte_1807DA084,
        v8,
        v9,
        &v18,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
  v12 = *a1;
  if ( v6 )
  {
    if ( !*((_BYTE *)v12 + 465)
      && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync((AccessibilityExperienceManager *)v12) >= 0 )
    {
      v13 = *a1;
      *((_BYTE *)v13 + 465) = 1;
      v14 = *((_QWORD *)v13 + 47);
      if ( v14 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, 0LL);
    }
  }
  else
  {
    AccessibilityExperienceManager::_DismissView(
      (AccessibilityExperienceManager *)v12,
      (struct AccessibilityViewInfo *)(v12 + 92));
  }
  return 0LL;
}
