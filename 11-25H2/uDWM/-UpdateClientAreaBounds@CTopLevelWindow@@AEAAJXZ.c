/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18000BCA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18000BEF0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000BFD0 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x18000C094 (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetBounds@CClientArea@@QEAAJXZ @ 0x18000C220 (-SetBounds@CClientArea@@QEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18000C298 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ @ 0x18000C420 (-UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18000C4AC (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CClientArea **this)
{
  int updated; // ebx
  CClientArea *v3; // rcx

  updated = CTopLevelWindow::EnsureClientAreaNode((CTopLevelWindow *)this);
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x14EEu, 0LL);
  }
  else
  {
    v3 = this[60];
    if ( v3 )
    {
      updated = CClientArea::SetBounds(v3);
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x14F3u, 0LL);
      }
      else
      {
        updated = CTopLevelWindow::UpdateRemoteAppRenderTargetBounds((CTopLevelWindow *)this);
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x14F5u, 0LL);
        }
        else
        {
          updated = CVisualProxy::SetSize(
                      *((CVisualProxy **)this[60] + 2),
                      (double)(*((_DWORD *)this[89] + 61) - *((_DWORD *)this[89] + 59)),
                      (double)(*((_DWORD *)this[89] + 62) - *((_DWORD *)this[89] + 60)));
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x14FAu, 0LL);
          }
          else
          {
            updated = CTopLevelWindow::SendBoundsToSwapchainTarget((CTopLevelWindow *)this);
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x14FDu, 0LL);
            }
            else
            {
              updated = CTopLevelWindow::UpdateHolographicSlateBounds((CTopLevelWindow *)this);
              if ( updated < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x14FFu, 0LL);
              }
              else
              {
                updated = CTopLevelWindow::UpdateWindowTarget((CTopLevelWindow *)this);
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1501u, 0LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)updated;
}
