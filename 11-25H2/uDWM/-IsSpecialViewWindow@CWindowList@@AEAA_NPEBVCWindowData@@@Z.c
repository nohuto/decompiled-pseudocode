/*
 * XREFs of ?IsSpecialViewWindow@CWindowList@@AEAA_NPEBVCWindowData@@@Z @ 0x18001A1DC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowList::IsSpecialViewWindow(CWindowList *this, const struct CWindowData *a2)
{
  __int64 v2; // r8
  char v3; // cl

  v2 = *((_QWORD *)a2 + 5);
  v3 = 0;
  if ( v2 )
    return v2 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 142);
  return v3;
}
