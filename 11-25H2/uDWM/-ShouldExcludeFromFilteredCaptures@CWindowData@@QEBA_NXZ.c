/*
 * XREFs of ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800C082C
 * Callers:
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086700 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800C3618 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 * Callees:
 *     ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18008F1B0 (-IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ.c)
 */

char __fastcall CWindowData::ShouldExcludeFromFilteredCaptures(CTopLevelWindow **this)
{
  CWindowData *v1; // rdx
  CTopLevelWindow *v2; // rcx
  char v3; // r8

  v1 = (CWindowData *)this;
  if ( ((_BYTE)this[84] & 1) == 0 )
    return 1;
  if ( (*((_BYTE *)this + 676) & 1) != 0 )
    return 1;
  if ( (*((_BYTE *)this + 675) & 0x40) != 0 )
    return 1;
  if ( (*((_DWORD *)this + 29) & 0x20000000) != 0 )
    return 1;
  v2 = this[55];
  v3 = 0;
  if ( v2 )
  {
    if ( CTopLevelWindow::IsWindowOffscreen(v2) )
      return 1;
  }
  if ( *(CWindowData **)v1 == v1 && *((CWindowData **)v1 + 1) == v1 )
    return 1;
  return v3;
}
