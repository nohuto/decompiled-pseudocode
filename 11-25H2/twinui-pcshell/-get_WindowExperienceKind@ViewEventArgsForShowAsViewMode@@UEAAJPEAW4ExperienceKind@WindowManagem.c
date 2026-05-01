/*
 * XREFs of ?get_WindowExperienceKind@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ExperienceKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180415E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_WindowExperienceKind(
        ViewEventArgsForShowAsViewMode *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 15);
  return 0LL;
}
