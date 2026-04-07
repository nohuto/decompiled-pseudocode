/*
 * XREFs of ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A92C8
 * Callers:
 *     ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A93A4 (-LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A9294 (-DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 */

bool __fastcall CapturedWindowRepresentation::DoesWindowQualifyAsSecondaryWindow(
        CapturedWindowRepresentation *this,
        struct CWindowData *a2,
        struct CWindowData *a3)
{
  __int64 v3; // r9
  struct CWindowData *v4; // rdx
  CapturedWindowRepresentation *v5; // rcx
  __int64 v6; // r8

  LOBYTE(v3) = 0;
  if ( *(struct CWindowData **)a3 != a3
    && CWindowData::IsWindowVisibleAndUncloaked(a3)
    && *(_QWORD *)(v6 + 440) != v3
    && (*(_DWORD *)(v6 + 116) < (int)v3 || *(char *)(v6 + 120) < 0)
    && CapturedWindowRepresentation::DoWindowsIntersect(v5, v4, (struct CWindowData *)v6) )
  {
    LOBYTE(v3) = 1;
  }
  return v3;
}
