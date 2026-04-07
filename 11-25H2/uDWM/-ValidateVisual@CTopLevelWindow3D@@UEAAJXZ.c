/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800904A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000A9D0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800212A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037998 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18004B4E8 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CSecondaryWindowRepresentation **this)
{
  int started; // edi
  __int64 v3; // rdx
  CSecondaryWindowRepresentation *v5; // rax
  CSecondaryWindowRepresentation *v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((_DWORD)this[4] & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 488) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
    {
      if ( this[40] )
      {
        started = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
        if ( started < 0 )
        {
          v3 = 776LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v3,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v7);
          return (unsigned int)started;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      if ( started < 0 )
      {
        v3 = 778LL;
        goto LABEL_7;
      }
      *((_BYTE *)this + 488) = 0;
    }
    v5 = this[40];
    if ( !v5 || *((_BYTE *)v5 + 72) )
    {
      started = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v3 = 804LL;
        goto LABEL_7;
      }
    }
    else
    {
      started = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[36] + 55), 0);
      if ( started < 0 )
      {
        v3 = 793LL;
        goto LABEL_7;
      }
      started = CTopLevelWindow3D::EnsureResources(this);
      if ( started < 0 )
      {
        v3 = 795LL;
        goto LABEL_7;
      }
      started = CTopLevelWindow3D::UpdateAnimatedResources((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v3 = 797LL;
        goto LABEL_7;
      }
      started = CTopLevelWindow3D::EnsureRenderData((CTopLevelWindow3D *)this);
      if ( started < 0 )
      {
        v3 = 799LL;
        goto LABEL_7;
      }
    }
    *((_DWORD *)this + 8) &= ~0x1000u;
  }
  started = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  if ( started < 0 )
  {
    v3 = 810LL;
    goto LABEL_7;
  }
  if ( ((_DWORD)this[4] & 0x100) != 0 )
  {
    v6 = this[37];
    if ( v6 )
    {
      started = CSecondaryWindowRepresentation::Validate(v6);
      if ( started < 0 )
      {
        v3 = 817LL;
        goto LABEL_7;
      }
    }
    *((_DWORD *)this + 8) &= ~0x100u;
  }
  return 0LL;
}
