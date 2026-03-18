/*
 * XREFs of ?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x180228F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateCursor@CCursorManager@@QEAAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x18028F430 (-CreateCursor@CCursorManager@@QEAAJ_KPEAPEAUIDwmCursorController@@@Z.c)
 */

__int64 __fastcall MilCompositionEngine_CreateCursorController(CCursorManager *a1, struct IDwmCursorController **a2)
{
  int Cursor; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !g_pConnection )
  {
    Cursor = -2147483634;
    v3 = 35LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)Cursor);
    return (unsigned int)Cursor;
  }
  Cursor = CCursorManager::CreateCursor(a1, (unsigned __int64)a1, a2);
  if ( Cursor < 0 )
  {
    v3 = 36LL;
    goto LABEL_3;
  }
  return 0LL;
}
