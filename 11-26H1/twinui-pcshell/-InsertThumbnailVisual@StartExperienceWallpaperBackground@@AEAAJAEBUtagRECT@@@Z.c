/*
 * XREFs of ?InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1803C0560
 * Callers:
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1803C06BC (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803C0820 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::InsertThumbnailVisual(
        StartExperienceWallpaperBackground *this,
        const struct tagRECT *a2)
{
  HWND ShellWindow; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  int SystemMetrics; // ebx
  int v9; // eax
  LONG bottom; // edx
  LONG right; // r8d
  int v12; // ecx
  LONG v13; // ecx
  int v14; // r8d
  int v15; // ecx
  LONG v16; // ecx
  int v17; // edx
  int v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+44h] [rbp-3Ch]
  int v20; // [rsp+4Ch] [rbp-34h]
  int v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+54h] [rbp-2Ch]
  int v23; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+5Ch] [rbp-24h]
  int v25; // [rsp+60h] [rbp-20h]
  char v26; // [rsp+64h] [rbp-1Ch]
  int v27; // [rsp+65h] [rbp-1Bh]
  int v28; // [rsp+69h] [rbp-17h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ShellWindow = GetShellWindow();
  if ( !ShellWindow )
  {
    v5 = -2147023496;
    v6 = 95LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v26 = 0;
  v18 = 2;
  SystemMetrics = GetSystemMetrics(76);
  v9 = GetSystemMetrics(77);
  bottom = a2->bottom;
  right = a2->right;
  v12 = a2->left - SystemMetrics;
  v18 = 27;
  v22 = v12;
  v13 = right;
  v14 = right - a2->left;
  v24 = v13 - SystemMetrics;
  v15 = a2->top - v9;
  v19 = 0LL;
  v23 = v15;
  v16 = bottom;
  v17 = bottom - a2->top;
  v25 = v16 - v9;
  v21 = v17;
  v20 = v14;
  v27 = 1;
  v28 = 1;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
    (char *)this + 48,
    0LL);
  v5 = DwmpCreateSharedThumbnailVisual(
         *((_QWORD *)this + 3),
         ShellWindow,
         0LL,
         &v18,
         *((_QWORD *)this + 4),
         (char *)this + 40,
         (char *)this + 48);
  if ( v5 < 0 )
  {
    v6 = 128LL;
    goto LABEL_3;
  }
  return 0LL;
}
