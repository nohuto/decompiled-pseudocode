/*
 * XREFs of ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18047C630
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x18013EC10 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801FAE18 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x1802CE660 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18047C8B4 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA_NXZ @ 0x18047E108 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@w.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceArrival(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF
  const wchar_t *v7; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 )
  {
    ++*((_DWORD *)this + 80);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2508>::GetImpl'::`2'::impl) )
    {
      v3 = GazeUITraceLogging::Provider();
      if ( *(_DWORD *)v3 > 5u )
      {
        v6 = *((_DWORD *)this + 80);
        v7 = (const wchar_t *)"AccessibilityExperienceManager::OnDeviceArrival";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)v3,
          byte_1807DA059,
          v4,
          v5,
          &v7,
          (__int64)&v6);
      }
    }
    if ( *((_DWORD *)this + 80) == 1 )
    {
      SHRegSetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 1);
      AccessibilityExperienceManager::OnNotificationEvent((AccessibilityExperienceManager *)((char *)this - 16), 0LL);
    }
  }
}
