/*
 * XREFs of JobAddProcessNotify @ 0x1401CF8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401CEE80 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall JobAddProcessNotify(Win32JobObject *this)
{
  __int64 ProcessWin32Process; // rax
  struct _EPROCESS *v3; // rdx

  ProcessWin32Process = PsGetProcessWin32Process(this);
  if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process && *(_BYTE *)(ProcessWin32Process + 1200) == 1 )
    Win32JobObject::AddProcess(this, v3);
}
