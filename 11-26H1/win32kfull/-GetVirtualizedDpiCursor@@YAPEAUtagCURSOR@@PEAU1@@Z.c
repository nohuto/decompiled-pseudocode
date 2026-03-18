/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874
 * Callers:
 *     NtUserDrawIconEx @ 0x140027D60 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1401BF250 (NtUserGetIconSize.c)
 *     NtUserGetIconInfo @ 0x1401E2A80 (NtUserGetIconInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x140212230 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x140015078 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x14002BBC8 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagCURSOR *result; // rax
  CCursorSizes *v5; // rbx
  unsigned int DpiForSystem; // eax
  unsigned int SizeForDpi; // ecx

  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    v5 = *(CCursorSizes **)(W32GetUserSessionState(v3, v2) + 36376);
    DpiForSystem = GetDpiForSystem();
    SizeForDpi = CCursorSizes::GetSizeForDpi(v5, DpiForSystem);
    for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6); result; result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
    {
      if ( *((_DWORD *)result + 19) == SizeForDpi )
        return result;
    }
  }
  return a1;
}
