/*
 * XREFs of ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x1800A2108
 * Callers:
 *     ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800A22E0 (-MakePublishWindowsTipService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actio.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x1800A2190 (--0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z.c)
 */

_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        const wchar_t **a2,
        const wchar_t **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v6 = operator new(0x58uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
      (CreativeFramework::Actions::PublishWindowsTipService *)(v6 + 4),
      *a2,
      *a3);
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
