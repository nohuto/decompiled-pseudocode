/*
 * XREFs of ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x1800835D4
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086034 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x18008791C (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(const WCHAR *a1)
{
  LPCWCH *i; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (LPCWCH *)&unk_1800D5AB0; ; i += 2 )
  {
    if ( i == (LPCWCH *)&off_1800D5B60 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        149LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
    if ( CompareStringOrdinal(i[1], -1, a1, -1, 1) == 2 )
      break;
  }
  return *(unsigned int *)i;
}
