/*
 * XREFs of ?GetPosition@CDesktopPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1805101E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::GetPosition(__int64 a1, HWND a2, const struct _GUID *a3, void **a4)
{
  return CDesktopPositioner::GetPosition((CDesktopPositioner *)(a1 - 8), a2, a3, a4);
}
