/*
 * XREFs of NtEnableOneCoreTransformMode @ 0x1401BA0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnableOneCoreTransformMode(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_QWORD *)(CurrentProcessWin32Process + 808) |= 0x800000uLL;
  return 1LL;
}
