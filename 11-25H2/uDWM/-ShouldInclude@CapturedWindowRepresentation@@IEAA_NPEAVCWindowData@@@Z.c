/*
 * XREFs of ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x180025634
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A9294 (-DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 */

char __fastcall CapturedWindowRepresentation::ShouldInclude(CapturedWindowRepresentation *this, struct CWindowData *a2)
{
  char v3; // di
  __int64 v4; // rdx
  __int64 v6; // rsi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CapturedWindowRepresentation *v8; // rcx
  __int64 i; // rdx

  v3 = 0;
  if ( *(struct CWindowData **)a2 != a2
    && CWindowData::IsWindowVisibleAndUncloaked(a2)
    && *((_QWORD *)a2 + 55)
    && (*((int *)a2 + 29) < 0 || *((char *)a2 + 120) < 0) )
  {
    v6 = *(_QWORD *)(v4 + 16);
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *((_QWORD *)a2 + 17));
    for ( i = *((_QWORD *)a2 + 1); (struct _LIST_ENTRY *)i != WindowListForDesktop; i = *(_QWORD *)(i + 8) )
    {
      if ( *(int *)(i + 116) >= 0 && *(char *)(i + 120) >= 0 )
      {
        if ( *(_QWORD *)(i + 40) == v6 )
          return CapturedWindowRepresentation::DoWindowsIntersect(v8, (struct CWindowData *)i, a2);
        return v3;
      }
    }
  }
  return v3;
}
