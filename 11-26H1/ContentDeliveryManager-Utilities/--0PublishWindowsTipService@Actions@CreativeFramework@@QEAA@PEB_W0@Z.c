/*
 * XREFs of ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x1800A2190
 * Callers:
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x1800A2108 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::Actions::PublishWindowsTipService *__fastcall CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
        CreativeFramework::Actions::PublishWindowsTipService *this,
        const wchar_t *a2,
        const wchar_t *a3)
{
  unsigned __int64 v4; // rdx
  char v5; // al
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::PublishWindowsTipService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  v4 = *((_QWORD *)this + 3);
  v5 = 1;
  if ( v4 > 0x100 || !v4 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      25LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL,
      v8);
  if ( v4 <= 0x100 && *((_QWORD *)this + 7) )
    v5 = 0;
  if ( v5 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      26LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL,
      v8);
  return this;
}
