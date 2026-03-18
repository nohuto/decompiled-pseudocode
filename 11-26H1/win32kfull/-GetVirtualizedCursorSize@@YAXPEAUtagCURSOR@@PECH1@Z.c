/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x1401BF328
 * Callers:
 *     NtUserDrawIconEx @ 0x140027D60 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1401BF250 (NtUserGetIconSize.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x140015078 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GetCursorSizeFromIndex @ 0x1401BFD2C (GetCursorSizeFromIndex.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, volatile int *a2, volatile int *a3)
{
  unsigned int DpiForSystem; // eax
  unsigned int CursorSizesIndexFromDpi; // eax
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
