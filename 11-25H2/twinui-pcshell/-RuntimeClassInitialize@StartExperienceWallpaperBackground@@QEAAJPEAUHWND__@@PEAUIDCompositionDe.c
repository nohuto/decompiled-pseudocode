/*
 * XREFs of ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1803B6DDC
 * Callers:
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x18037EDE0 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1800D87EC (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x1800DB15C (McTemplateU0dddd_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1803B6C80 (-InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803B6F40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RuntimeClassInitialize(
        StartExperienceWallpaperBackground *this,
        HWND a2,
        struct IDCompositionDevice *a3)
{
  int updated; // eax
  HWND v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int Error; // edi
  __int64 v9; // rcx
  int inserted; // eax
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *((_QWORD *)this + 3) = a2;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a3);
  updated = UpdateWallpaperTransition(13LL);
  v5 = (HWND)*((_QWORD *)this + 3);
  v6 = updated;
  Rect = 0LL;
  if ( GetWindowRect(v5, &Rect) )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer(
      v7,
      &WallpaperBackground_SceneInitialization_Start,
      (unsigned int)Rect.left,
      Rect.top,
      Rect.right,
      Rect.bottom);
  if ( (Error & 0x80000000) == 0 )
  {
    *((_BYTE *)this + 16) = v6 >= 0;
    if ( v6 >= 0 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
        (char *)this + 48,
        0LL);
      inserted = StartExperienceWallpaperBackground::InsertThumbnailVisual(this, &Rect);
      v6 = inserted;
      if ( inserted >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
          (const char *)(unsigned int)inserted);
    }
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0q_EventWriteTransfer(v7, &WallpaperBackground_SceneInitialization_Stop, (unsigned int)v6);
    return (unsigned int)v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)Error);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0q_EventWriteTransfer(v9, &WallpaperBackground_SceneInitialization_Stop, Error);
    return Error;
  }
}
