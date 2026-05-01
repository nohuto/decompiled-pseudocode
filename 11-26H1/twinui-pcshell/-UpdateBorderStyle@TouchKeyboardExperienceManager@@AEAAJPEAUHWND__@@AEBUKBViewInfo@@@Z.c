/*
 * XREFs of ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x1801A48CC
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x1801A4A1C (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorderStyle(
        TouchKeyboardExperienceManager *this,
        HWND hwnd,
        const struct KBViewInfo *a3)
{
  int v3; // ebx
  int v6; // eax
  const char *v8; // r9
  HRESULT v9; // ebx
  __int64 v11; // rdx
  int pvAttribute; // [rsp+20h] [rbp-40h] BYREF
  unsigned int BorderColor; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v3 = *((_DWORD *)a3 + 40);
  v16 = 0LL;
  v15[1] = 1504;
  v14[0] = 19LL;
  v6 = 5;
  v14[2] = 16LL;
  if ( v3 != 1 )
    v6 = 0;
  v15[0] = v6;
  v14[1] = v15;
  if ( !(unsigned int)SetWindowCompositionAttribute(hwnd, v14) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x15F6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v8);
  pvAttribute = (v3 == 1) + 1;
  v9 = DwmSetWindowAttribute(hwnd, 0x21u, &pvAttribute, 4u);
  if ( v9 < 0 )
  {
    v11 = 5636LL;
  }
  else
  {
    BorderColor = TouchKeyboardExperienceManager::GetBorderColor(this, a3);
    v9 = DwmSetWindowAttribute(hwnd, 0x22u, &BorderColor, 4u);
    if ( v9 >= 0 )
      return 0LL;
    v11 = 5641LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
