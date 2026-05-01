/*
 * XREFs of ?Show@AccessibilityExperienceManager@@UEAAJH@Z @ 0x180251BC0
 * Callers:
 *     ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048D270 (-OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000A3FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x18000A660 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlg_ea_18000A660.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x18048EBB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibilityExperienceManager::Show(AccessibilityExperienceManager *this, int a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  const char *v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  const char *v16; // [rsp+B0h] [rbp+40h] BYREF
  int pvParam; // [rsp+B8h] [rbp+48h] BYREF

  pvParam = 0;
  if ( !SystemParametersInfoW(0xAAu, 0, &pvParam, 0) || pvParam )
    a2 = 0;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v4 + 40LL))(v4, a2 == 0);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
    {
      v5 = GazeUITraceLogging::Provider();
      if ( *(_DWORD *)v5 > 5u )
      {
        v16 = "AccessibilityExperienceManager::Show";
        v13 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)v5,
          (__int64)&unk_180811269,
          v6,
          v7,
          (__int64)&v13,
          &v16);
      }
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    v8 = *((_QWORD *)this + 29);
    v9 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      LODWORD(v13) = a2;
      v14 = "AccessibilityExperienceManager::Show";
      v15 = 0x1000000LL;
      LOBYTE(v16) = v8 != 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v9,
        (__int64)&unk_18081129D,
        v10,
        v11,
        (__int64)&v15,
        &v14);
    }
  }
  return 0LL;
}
