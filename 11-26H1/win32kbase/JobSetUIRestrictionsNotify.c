/*
 * XREFs of JobSetUIRestrictionsNotify @ 0x1401CF920
 * Callers:
 *     <none>
 * Callees:
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 */

void __fastcall JobSetUIRestrictionsNotify(Win32JobObject *a1, struct _JOBOBJECT_BASIC_PROCESS_ID_LIST *a2)
{
  Win32JobObject::SetUIRestrictions(a1, a2);
}
