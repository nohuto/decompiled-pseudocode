/*
 * XREFs of ?GetMdl@FxRequestMemory@@UEAAPEAU_MDL@@XZ @ 0x1400805E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall FxRequestMemory::GetMdl(FxRequestMemory *this)
{
  return this->m_ChildListHead.Flink;
}
