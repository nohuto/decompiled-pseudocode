/*
 * XREFs of ?CreateCursor@CCursorManager@@QEAAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x18028F430
 * Callers:
 *     ?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x180228F30 (-MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18028F4BC (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 */

__int64 __fastcall CCursorManager::CreateCursor(
        CCursorManager *this,
        unsigned __int64 a2,
        struct IDwmCursorController **a3)
{
  CCursorManager *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCursorState *v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  v6 = CCursorManager::EnsureCursorState(v5, a2, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = 0;
    *a3 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
      (const char *)(unsigned int)v6);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v7;
}
