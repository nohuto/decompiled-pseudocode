/*
 * XREFs of ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800F53C4
 * Callers:
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F415C (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F4850 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F4B14 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F4F24 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F50B8 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiButtonAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024D768 (-UpdateEmojiButtonAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18029EF78 (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180473C34 (-UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rcx
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v1 = 0;
  v5[0] = 1;
  v8 = 0LL;
  v5[1] = 2;
  v2 = ((__int64 (__fastcall *)(const wchar_t *, __int64, _DWORD *, __int64 *))PolicyManager_GetPolicy)(
         L"TextInput",
         a1,
         v5,
         &v8);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\textinputmdmpolicyhelper.cpp",
      (const char *)(unsigned int)v2);
    v3 = v8;
  }
  else
  {
    v3 = v8;
    if ( *(_DWORD *)(v8 + 4) )
      v1 = *(_DWORD *)(v8 + 16);
  }
  if ( v3 )
    PolicyManager_FreeGetPolicyData();
  return v1;
}
