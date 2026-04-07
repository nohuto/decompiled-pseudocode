/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800836E0 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CSecondaryWindowRepresentation **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  CSecondaryWindowRepresentation *v5; // rax
  int started; // edi
  __int64 v8; // rdx
  CSecondaryWindowRepresentation *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF

  if ( (*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v12) & (_DWORD)this[4]) != 0 )
  {
    if ( *((_BYTE *)this + 336) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
    {
      if ( this[33] )
      {
        started = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
        if ( started < 0 )
        {
          v8 = 772LL;
          goto LABEL_14;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      if ( started < 0 )
      {
        v8 = 774LL;
        goto LABEL_14;
      }
      *((_BYTE *)this + 336) = 0;
    }
    v5 = this[33];
    if ( !v5 || *((_BYTE *)v5 + 72) )
    {
      started = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v8 = 800LL;
        goto LABEL_14;
      }
    }
    else
    {
      started = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[29] + 55), 0);
      if ( started < 0 )
      {
        v8 = 789LL;
        goto LABEL_14;
      }
      started = CTopLevelWindow3D::EnsureResources((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v8 = 791LL;
        goto LABEL_14;
      }
      started = CTopLevelWindow3D::UpdateAnimatedResources((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v8 = 793LL;
        goto LABEL_14;
      }
      started = CTopLevelWindow3D::EnsureVisualBrush((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v8 = 795LL;
        goto LABEL_14;
      }
    }
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v12);
  }
  started = CVisual::ValidateVisual((CVisual *)this, v2, v3, v4);
  if ( started >= 0 )
  {
    if ( ((_DWORD)this[4] & *(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v12)) != 0 )
    {
      v9 = this[30];
      if ( v9 )
      {
        started = CSecondaryWindowRepresentation::Validate(v9);
        if ( started < 0 )
        {
          v8 = 813LL;
          goto LABEL_14;
        }
      }
      *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v12);
    }
    return 0LL;
  }
  v8 = 806LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)started,
    v10);
  return (unsigned int)started;
}
