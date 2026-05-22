/*
 * XREFs of ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017E4C4
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017CD7C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x18017D5B8 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x18017EEC0 (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x18017F050 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18017FCB8 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017FF1C (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801804C4 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180180874 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180180B1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct tagPOINT __fastcall ControllerProcessor::GetCursorPosition(ControllerProcessor *this, struct tagPOINT *a2)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( IsEdition(8778LL) )
  {
    GetCursorPos(a2);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 939) + 88LL))(
           *((_QWORD *)this + 939),
           *((unsigned int *)this + 710),
           1LL);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5CD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5,
        (int)a2);
  }
  return (struct tagPOINT)a2;
}
