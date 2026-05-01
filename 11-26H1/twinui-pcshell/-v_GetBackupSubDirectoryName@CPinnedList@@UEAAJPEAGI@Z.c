/*
 * XREFs of ?v_GetBackupSubDirectoryName@CPinnedList@@UEAAJPEAGI@Z @ 0x18069B540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::v_GetBackupSubDirectoryName(CPinnedList *this, char *a2, unsigned int a3)
{
  return StringCchCopyW(a2, a3, (char *)L"TaskBar");
}
