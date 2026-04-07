/*
 * XREFs of ?GetWindowMDIOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x18008CF7C
 * Callers:
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GetWindowMDIOwner(HWND a1)
{
  return GetPropW(a1, (LPCWSTR)0xA91B);
}
