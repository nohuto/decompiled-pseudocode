/*
 * XREFs of ?Stage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A55E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z @ 0x1800A534C (-SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z.c)
 */

void __fastcall CreativeFramework::Actions::SetDesktopWallpaperService::Stage(
        CreativeFramework::Actions::SetDesktopWallpaperService *this,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4)
{
  _WORD *v4; // r8
  _WORD *v6; // rdx
  char *v7; // rcx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_WORD *)((char *)this + 72);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    v4 = *(_WORD **)v4;
  v6 = (_WORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v6 = *(_WORD **)v6;
  v7 = (char *)this + 8;
  if ( *((_QWORD *)v7 + 3) >= 8uLL )
    v7 = *(char **)v7;
  v8 = CreativeFramework::DesktopSpotlightHelpers::SetDesktopSpotlightCreative(v7, v6, v4, a4);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      53LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)(unsigned int)v8,
      v9);
  *((_BYTE *)this + 104) = 1;
}
