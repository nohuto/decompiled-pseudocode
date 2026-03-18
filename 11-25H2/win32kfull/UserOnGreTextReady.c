/*
 * XREFs of UserOnGreTextReady @ 0x140146468
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401462E0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1401479A8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxLW_LoadFonts @ 0x140147F80 (xxxLW_LoadFonts.c)
 *     SetIconMetrics @ 0x140148734 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x140148B08 (SetMinMetrics.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSetWindowNCMetrics @ 0x140149304 (xxxSetWindowNCMetrics.c)
 */

__int64 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *v3; // rax
  __int64 v4; // rcx
  int v5; // esi
  struct _UNICODE_STRING *v6; // rdi
  int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v11 = 0LL;
  v13 = 0LL;
  v12 = -1LL;
  EnterCrit(1LL, 0LL);
  LogPixels = DrvGetLogPixels(v1, v0);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0LL);
  v3 = (struct _UNICODE_STRING *)CreateProfileUserName(&v11);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v8 = xxxSetWindowNCMetrics(v3, 0LL);
    SetMinMetrics(v6);
    LOBYTE(v5) = v8 != 0;
    v9 = (unsigned int)SetIconMetrics(v6) != 0 ? v5 : 0;
    UserSessionSwitchLeaveCrit(v10);
    if ( v12 != -1 )
      PopAndFreeAlwaysW32ThreadLock(&v11);
    return v9;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v4);
    if ( v12 != -1 )
      PopAndFreeAlwaysW32ThreadLock(&v11);
    return 0LL;
  }
}
