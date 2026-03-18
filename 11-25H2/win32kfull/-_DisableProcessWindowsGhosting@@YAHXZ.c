/*
 * XREFs of ?_DisableProcessWindowsGhosting@@YAHXZ @ 0x14021B7EC
 * Callers:
 *     NtUserDisableProcessWindowsGhosting @ 0x14021B7B0 (NtUserDisableProcessWindowsGhosting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _DisableProcessWindowsGhosting(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x8000000u;
  return 1LL;
}
