/*
 * XREFs of ?put_SilentPairingContractVersion@MobilityExperienceManager@@UEAAJK@Z @ 0x1800AA500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MobilityExperienceManager::put_SilentPairingContractVersion(MobilityExperienceManager *this, int a2)
{
  LSTATUS v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2;
  v2 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
         L"SilentPairingContractVersion",
         4u,
         &Data,
         4u);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4,
    (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
    (const char *)(unsigned int)v2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)v3);
  return v3;
}
