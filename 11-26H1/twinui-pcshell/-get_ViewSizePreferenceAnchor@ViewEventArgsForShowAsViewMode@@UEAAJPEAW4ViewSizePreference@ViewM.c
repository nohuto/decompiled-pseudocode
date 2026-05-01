/*
 * XREFs of ?get_ViewSizePreferenceAnchor@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@Windows@@@Z @ 0x180420A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_ViewSizePreferenceAnchor(
        ViewEventArgsForShowAsViewMode *this,
        enum Windows::UI::ViewManagement::ViewSizePreference *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 17);
  return 0LL;
}
