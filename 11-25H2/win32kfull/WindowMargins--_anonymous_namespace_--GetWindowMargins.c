/*
 * XREFs of WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014EEC8
 * Callers:
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014ED28 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::GetWindowMargins(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // r10
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 WindowDpiLastNotify; // r9
  int v12; // ecx
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp+18h] BYREF

  if ( !IsTopLevelWindow(a1) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42248), 1u);
  if ( !Prop )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_DWORD *)(v9 + 288);
  WindowDpiLastNotify = (v10 >> 8) & 0x1FF;
  if ( ((v10 >> 8) & 0x1FF) == 0 )
  {
    if ( (*(_BYTE *)(v9 + 233) & 4) == 0 )
      goto LABEL_11;
    if ( a2 )
    {
      WindowDpiLastNotify = a2;
      return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify);
    }
    v12 = v10 & 0xF;
    if ( v12 != 3 )
    {
      if ( (*(_DWORD *)(v9 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = (unsigned int)GetWindowDpiLastNotify(a1);
        return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify);
      }
      if ( !v12 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL);
        if ( v13 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96LL;
            return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(
                                Prop,
                                &v14,
                                a1,
                                WindowDpiLastNotify);
          }
        }
      }
LABEL_11:
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
    }
  }
  return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify);
}
