/*
 * XREFs of ?get_ViewSizePreference@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@Windows@@@Z @ 0x180305910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_ViewSizePreference(
        ViewEventArgsForShowAsViewMode *this,
        enum Windows::UI::ViewManagement::ViewSizePreference *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
