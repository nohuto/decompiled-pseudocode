/*
 * XREFs of ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803B8B00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803B8F20 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::SetDrawingRegion(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  BOOL v8; // ebx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = IsRectEmpty(a3);
  CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(this, a2, a3, a4);
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", v8 ? HANDLE_FLAG_PROTECT_FROM_CLOSE : 0) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1D2,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
}
