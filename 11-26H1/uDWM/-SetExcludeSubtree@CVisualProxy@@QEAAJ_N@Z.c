/*
 * XREFs of ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x180068A94
 * Callers:
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateHidden@CVisual@@AEAAJXZ @ 0x180068A44 (-UpdateHidden@CVisual@@AEAAJXZ.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetExcludeSubtree(CVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 232LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3);
}
