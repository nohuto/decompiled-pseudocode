/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140273994
 * Callers:
 *     NtUserDrawIconEx @ 0x140056290 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x14007B1BC (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserGetIconSize @ 0x1401C9450 (NtUserGetIconSize.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetCursorSizesIndexFromDpi @ 0x14004DCB4 (GetCursorSizesIndexFromDpi.c)
 *     GetCursorSizeFromIndex @ 0x14004E6AC (GetCursorSizeFromIndex.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x14007B174 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, volatile int *a2, volatile int *a3)
{
  unsigned int DpiForSystem; // eax
  int CursorSizesIndexFromDpi; // eax
  INT CursorSizeFromIndex; // ebx

  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  if ( ShouldVirtualizeIconCursorSize(a1, (__int64)a2) )
  {
    DpiForSystem = GetDpiForSystem();
    CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(DpiForSystem);
    CursorSizeFromIndex = GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
    *a2 = EngMulDiv(*a2, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
  }
}
