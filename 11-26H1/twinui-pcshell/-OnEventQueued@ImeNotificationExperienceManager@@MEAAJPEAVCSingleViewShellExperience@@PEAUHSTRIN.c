/*
 * XREFs of ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180379C50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801DD140 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E50 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnEventQueued(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v6; // rax
  HSTRING v7; // r8
  __int64 v10; // rcx
  int v11; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  HSTRING_HEADER v15; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v15,
         (const WCHAR **)&off_18075FFB0,
         (unsigned int)a3);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v6[1].Reserved.Reserved1, v7) )
    return 0LL;
  if ( (unsigned int)dword_1808D4E58 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1808D4E58, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v10,
        byte_1807F1EEB,
        0LL);
  }
  try
  {
    v11 = CSingleViewShellExperience::DestroyView((ImeNotificationExperienceManager *)((char *)this + 8));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAD,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                           v12);
  }
  v13 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
  return v13;
}
