/*
 * XREFs of ?bSandboxedCurrentProcess@@YAEXZ @ 0x140296588
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8368 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall bSandboxedCurrentProcess(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return CurrentProcessWin32Process
      && *(_QWORD *)CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 264) != 0
       || (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) != 0);
}
