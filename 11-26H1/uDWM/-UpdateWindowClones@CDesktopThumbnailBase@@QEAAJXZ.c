/*
 * XREFs of ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180006614
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081770 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x18008B064 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 * Callees:
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x180006684 (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x180042D5C (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailBase::UpdateWindowClones(CDesktopThumbnailBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CContainerVisual::RemoveAllChildren(this);
  CDesktopThumbnailBase::_ClearClones(this);
  *((_DWORD *)this + 52) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 184, 16LL);
  v2 = CDesktopThumbnailBase::_SnapshotWindows(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x31u, 0LL);
  return v3;
}
