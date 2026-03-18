/*
 * XREFs of JobTerminateNotify @ 0x1401CF940
 * Callers:
 *     <none>
 * Callees:
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 */

void __fastcall JobTerminateNotify(Win32JobObject *a1)
{
  Win32JobObject::Terminated(a1);
}
