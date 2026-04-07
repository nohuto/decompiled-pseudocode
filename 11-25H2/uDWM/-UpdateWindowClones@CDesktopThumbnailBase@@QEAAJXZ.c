/*
 * XREFs of ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18006B984
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924C0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x180097D88 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x18006B9EC (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18006BA60 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailBase::UpdateWindowClones(CDesktopThumbnailBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CContainerVisual::RemoveAllChildren(this);
  CDesktopThumbnailBase::_ClearClones(this);
  *((_DWORD *)this + 56) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 0x10u);
  v2 = CDesktopThumbnailBase::_SnapshotWindows(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x31u, 0LL);
  return v3;
}
