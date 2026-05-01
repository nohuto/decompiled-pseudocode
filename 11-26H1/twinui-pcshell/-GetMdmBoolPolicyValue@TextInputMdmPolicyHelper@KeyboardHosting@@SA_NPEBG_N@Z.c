/*
 * XREFs of ?GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z @ 0x180164128
 * Callers:
 *     ?UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024DF18 (-UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MDMBoolPolicyValueUpdated@AEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEA_N@Z @ 0x1801641F4 (--$MDMBoolPolicyValueUpdated@AEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEA_.c)
 */

char __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmBoolPolicyValue(const unsigned __int16 *a1)
{
  char v1; // di
  int Policy; // eax
  bool v3; // bl
  _DWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  char v9; // [rsp+58h] [rbp+28h] BYREF
  const wchar_t *v10; // [rsp+60h] [rbp+30h] BYREF

  v5[1] = 2;
  v1 = 1;
  v10 = L"AllowTextInputSuggestionUpdate";
  v9 = 1;
  v5[0] = 1;
  v6 = 0LL;
  v8 = 0LL;
  Policy = PolicyManager_GetPolicy(L"TextInput", L"AllowTextInputSuggestionUpdate", v5, &v8);
  if ( Policy >= 0 )
  {
    v3 = 1;
    if ( *(_DWORD *)(v8 + 4) )
    {
      v3 = *(_DWORD *)(v8 + 16) != 0;
      v9 = v3;
      v1 = v3;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x28,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\textinputmdmpolicyhelper.cpp",
      (const char *)(unsigned int)Policy);
    v3 = 1;
  }
  TouchKeyboardExperienceTelemetryLogger::MDMBoolPolicyValueUpdated<unsigned short const * &,bool &>(&v10, &v9);
  if ( v8 )
  {
    PolicyManager_FreeGetPolicyData();
    return v1;
  }
  return v3;
}
