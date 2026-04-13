/*
 * XREFs of ?get_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x18003F540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z @ 0x18003259C (-GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_SuggestionsDisabled(
        ContentManagement::MobilityExperienceSettings *this,
        bool *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int MobilityValue; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MobilityValue = CreativeFramework::MobilityExperienceSettings::GetMobilityValue(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
                    L"SuggestionsEnabled",
                    (unsigned __int16 *)a2,
                    a4);
  v6 = MobilityValue;
  if ( MobilityValue >= 0 )
  {
    *a2 = a2 == 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
      (const char *)(unsigned int)MobilityValue);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v6);
    return v6;
  }
}
