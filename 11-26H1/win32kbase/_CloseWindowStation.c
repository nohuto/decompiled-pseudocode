/*
 * XREFs of _CloseWindowStation @ 0x14017A180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseWindowStation(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( ((*(_QWORD *)(CurrentProcessWin32Process + 664) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return ObCloseHandle((HANDLE)Handle, a2);
  else
    return -2147483631;
}
