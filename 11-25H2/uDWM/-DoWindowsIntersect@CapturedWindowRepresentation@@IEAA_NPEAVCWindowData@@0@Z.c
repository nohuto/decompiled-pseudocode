/*
 * XREFs of ?DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A9294
 * Callers:
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x180025634 (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A92C8 (-DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CapturedWindowRepresentation::DoWindowsIntersect(
        CapturedWindowRepresentation *this,
        struct CWindowData *a2,
        struct CWindowData *a3)
{
  return *((_DWORD *)a2 + 12) <= *((_DWORD *)a3 + 14)
      && *((_DWORD *)a2 + 14) >= *((_DWORD *)a3 + 12)
      && *((_DWORD *)a2 + 13) <= *((_DWORD *)a3 + 15)
      && *((_DWORD *)a2 + 15) >= *((_DWORD *)a3 + 13);
}
