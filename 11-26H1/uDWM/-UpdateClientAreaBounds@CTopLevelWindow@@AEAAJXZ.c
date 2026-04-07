/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18008B110
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000A660 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18004EED0 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x18005454C (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetBounds@CClientArea@@QEAAJXZ @ 0x1800546E0 (-SetBounds@CClientArea@@QEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18005670C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CClientArea **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CClientArea *v4; // rcx
  int v5; // eax
  int updated; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v2 = CTopLevelWindow::EnsureClientAreaNode((CTopLevelWindow *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x142Au, 0LL);
  }
  else
  {
    v4 = this[58];
    if ( v4 )
    {
      v5 = CClientArea::SetBounds(v4);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x142Fu, 0LL);
      }
      else
      {
        updated = CTopLevelWindow::UpdateRemoteAppRenderTargetBounds((CTopLevelWindow *)this);
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1431u, 0LL);
        }
        else
        {
          v7 = CVisualProxy::SetSize(
                 *((CVisualProxy **)this[58] + 2),
                 (double)(*((_DWORD *)this[87] + 61) - *((_DWORD *)this[87] + 59)),
                 (double)(*((_DWORD *)this[87] + 62) - *((_DWORD *)this[87] + 60)));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1436u, 0LL);
          }
          else
          {
            v8 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
            v3 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1439u, 0LL);
            }
            else
            {
              v9 = CTopLevelWindow::UpdateWindowTarget((CTopLevelWindow *)this);
              v3 = v9;
              if ( v9 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x143Bu, 0LL);
            }
          }
        }
      }
    }
  }
  return v3;
}
