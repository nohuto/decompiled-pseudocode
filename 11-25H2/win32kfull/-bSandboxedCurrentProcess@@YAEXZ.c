/*
 * XREFs of ?bSandboxedCurrentProcess@@YAEXZ @ 0x140263904
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D2FC0 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x140265370 (NtGdiSetPUMPDOBJ.c)
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
