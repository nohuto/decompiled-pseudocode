/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1401479A8
 * Callers:
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14003FC08 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rdi
  HFONT SystemFont; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 SessionDpiServerInfo; // rdi
  HFONT v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  HFONT v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx

  GreReinitializeStockFonts();
  v0 = Get96DpiServerInfo();
  SystemFont = (HFONT)GreGetSystemFont(0LL);
  *(_QWORD *)(v0 + 24) = SystemFont;
  UserSessionState = W32GetUserSessionState(v3, v2);
  GreSelectFont(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 72LL), SystemFont);
  v7 = W32GetUserSessionState(v6, v5);
  *(_DWORD *)(v0 + 32) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v7 + 56968) + 72LL), v0 + 40, (_DWORD *)(v0 + 36));
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v9 = (HFONT)GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v9;
  v12 = W32GetUserSessionState(v11, v10);
  GreSelectFont(*(HDC *)(*(_QWORD *)(v12 + 56968) + 72LL), v9);
  v13 = *(HFONT *)(SessionDpiServerInfo + 24);
  v16 = W32GetUserSessionState(v15, v14);
  GreSelectFont(*(HDC *)(*(_QWORD *)(v16 + 56968) + 80LL), v13);
  v19 = W32GetUserSessionState(v18, v17);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(*(_QWORD *)(v19 + 56968) + 72LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  UpdateDpiMetricsCacheDPISERVERINFO(v21, v20);
}
