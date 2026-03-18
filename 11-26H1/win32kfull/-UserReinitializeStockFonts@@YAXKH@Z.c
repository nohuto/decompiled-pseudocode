/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4
 * Callers:
 *     UserOnGreTextReady @ 0x1400CBFE0 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14021B858 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rsi
  __int64 SystemFont; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 SessionDpiServerInfo; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  GreReinitializeStockFonts();
  v0 = Get96DpiServerInfo();
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v0 + 24) = SystemFont;
  UserSessionState = W32GetUserSessionState(v3, v2);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL), SystemFont);
  v7 = W32GetUserSessionState(v6, v5);
  *(_DWORD *)(v0 + 32) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v7 + 56968) + 64LL));
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v9 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v9;
  v12 = W32GetUserSessionState(v11, v10);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 64LL), v9);
  v13 = *(_QWORD *)(SessionDpiServerInfo + 24);
  v16 = W32GetUserSessionState(v15, v14);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 72LL), v13);
  v19 = W32GetUserSessionState(v18, v17);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v19 + 56968) + 64LL));
  UpdateDpiMetricsCacheDPISERVERINFO();
}
