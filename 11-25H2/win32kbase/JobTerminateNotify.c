/*
 * XREFs of JobTerminateNotify @ 0x1401AD7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C (-Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     IsModerncoreAtomTableSupported @ 0x14023EF58 (IsModerncoreAtomTableSupported.c)
 */

void __fastcall JobTerminateNotify(Win32JobObject *this)
{
  struct _EJOB *v2; // rdx

  if ( (int)IsModerncoreAtomTableSupported() < 0 )
    Win32JobObject::Terminated(this, v2);
}
