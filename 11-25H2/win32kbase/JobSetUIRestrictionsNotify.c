/*
 * XREFs of JobSetUIRestrictionsNotify @ 0x1401AD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     IsModerncoreAtomTableSupported @ 0x14023EF58 (IsModerncoreAtomTableSupported.c)
 */

void __fastcall JobSetUIRestrictionsNotify(Win32JobObject *this)
{
  struct _EJOB *v2; // rdx

  if ( (int)IsModerncoreAtomTableSupported() < 0 )
    Win32JobObject::SetUIRestrictions(this, v2);
}
