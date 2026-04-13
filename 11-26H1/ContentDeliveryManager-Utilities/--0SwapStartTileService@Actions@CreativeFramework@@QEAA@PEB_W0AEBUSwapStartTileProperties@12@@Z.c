/*
 * XREFs of ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800957D8
 * Callers:
 *     ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x1800953F8 (--$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTilePrope.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DD44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800971CC (-GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatic.c)
 */

// Hidden C++ exception states: #wind=11
CreativeFramework::Actions::SwapStartTileService *__fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTileService(
        CreativeFramework::Actions::SwapStartTileService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const struct CreativeFramework::Actions::SwapStartTileProperties *a4)
{
  struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **v6; // rdx
  int StartScreenManagerExtensionStatics; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SwapStartTileService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  std::wstring::wstring((__int64)this + 72, (__int64)a4 + 160);
  std::wstring::wstring((__int64)this + 104, (__int64)a4 + 96);
  std::wstring::wstring((__int64)this + 136, (__int64)a4 + 128);
  std::wstring::wstring((__int64)this + 168, (__int64)a4);
  std::wstring::wstring((__int64)this + 200, (__int64)a4 + 64);
  std::wstring::wstring((__int64)this + 232, (__int64)a4 + 32);
  *((_QWORD *)this + 33) = 0LL;
  StartScreenManagerExtensionStatics = StartDocked::GetStartScreenManagerExtensionStatics(
                                         (CreativeFramework::Actions::SwapStartTileService *)((char *)this + 264),
                                         v6);
  if ( StartScreenManagerExtensionStatics < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)StartScreenManagerExtensionStatics);
  return this;
}
