/*
 * XREFs of ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x18008C860
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4550 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GetWindowTabOwner(HWND a1)
{
  return GetPropW(a1, (LPCWSTR)0xA920);
}
