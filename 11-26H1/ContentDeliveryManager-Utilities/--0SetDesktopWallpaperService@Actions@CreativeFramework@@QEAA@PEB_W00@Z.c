/*
 * XREFs of ??0SetDesktopWallpaperService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x1800A4578
 * Callers:
 *     ??$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDesktopWallpaperService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800A44E0 (--$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
CreativeFramework::Actions::SetDesktopWallpaperService *__fastcall CreativeFramework::Actions::SetDesktopWallpaperService::SetDesktopWallpaperService(
        CreativeFramework::Actions::SetDesktopWallpaperService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  int v6; // ecx
  char v7; // al
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetDesktopWallpaperService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  std::wstring::wstring((__int64)this + 72);
  if ( !*((_QWORD *)this + 3) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      30LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)0x80070057LL,
      v9);
  v6 = *a2 - 49;
  if ( *a2 == 49 )
    v6 = a2[1];
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 7) || (v7 = 0, !*((_QWORD *)this + 11)) )
      v7 = 1;
    if ( v7 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        34LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
        (const char *)0x80070057LL,
        v9);
  }
  return this;
}
