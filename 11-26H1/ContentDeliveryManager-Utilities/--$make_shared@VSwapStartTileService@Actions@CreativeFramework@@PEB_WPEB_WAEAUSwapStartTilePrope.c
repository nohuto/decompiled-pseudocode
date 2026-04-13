/*
 * XREFs of ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x1800953F8
 * Callers:
 *     ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180097D20 (-MakeSwapStartTileService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800957D8 (--0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::SwapStartTileService,wchar_t const *,wchar_t const *,CreativeFramework::Actions::SwapStartTileProperties &>(
        _QWORD *a1,
        const wchar_t **a2,
        const wchar_t **a3,
        const struct CreativeFramework::Actions::SwapStartTileProperties *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx

  v8 = operator new(0x120uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    CreativeFramework::Actions::SwapStartTileService::SwapStartTileService(
      (CreativeFramework::Actions::SwapStartTileService *)(v8 + 4),
      *a2,
      *a3,
      a4);
  }
  else
  {
    v9 = 0LL;
  }
  a1[1] = v9;
  *a1 = v9 + 4;
  return a1;
}
