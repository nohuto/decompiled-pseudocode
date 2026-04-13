/*
 * XREFs of ?put_PhoneLinkEnabled@MobilityExperienceManager@@UEAAJE@Z @ 0x1800AA4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEB_W0@Z @ 0x1800A9E14 (-SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEB_W0@Z.c)
 */

__int64 __fastcall MobilityExperienceManager::put_PhoneLinkEnabled(
        MobilityExperienceManager *this,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(this) = a2;
  v4 = CreativeFramework::MobilityExperienceSettings::SetMobilityValue(this, a2, L"PhoneLinkEnabled", a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA2,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
