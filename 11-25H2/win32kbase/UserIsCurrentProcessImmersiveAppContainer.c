/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1400BD6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserIsCurrentProcessImmersiveAppContainer()
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  unsigned int v2; // ecx
  __int64 v4; // rdx

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v2 = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_QWORD *)ProcessWin32Process )
    {
      if ( *(_DWORD *)(ProcessWin32Process + 868) )
      {
        v4 = *(_QWORD *)(ProcessWin32Process + 808);
        if ( (v4 & 0x30) == 0x10 )
          return (v4 & 0x200) == 0;
      }
    }
  }
  return v2;
}
