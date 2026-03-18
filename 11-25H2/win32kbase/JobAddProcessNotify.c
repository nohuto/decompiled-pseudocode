/*
 * XREFs of JobAddProcessNotify @ 0x1401AD760
 * Callers:
 *     <none>
 * Callees:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8 (-AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z.c)
 *     IsModerncoreAtomTableSupported @ 0x14023EF58 (IsModerncoreAtomTableSupported.c)
 */

void __fastcall JobAddProcessNotify(Win32JobObject *this, struct _EJOB *a2)
{
  __int64 ProcessWin32Process; // rax
  struct _EPROCESS *v5; // r8

  if ( (int)IsModerncoreAtomTableSupported() < 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(a2);
    if ( ProcessWin32Process )
    {
      if ( *(_QWORD *)ProcessWin32Process )
      {
        if ( *(_BYTE *)(ProcessWin32Process + 1176) == 1 )
          Win32JobObject::AddProcess(this, a2, v5);
      }
    }
  }
}
