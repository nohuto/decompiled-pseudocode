/*
 * XREFs of UserSetLastStatus @ 0x140191AE4
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG v6; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process(v5, v4) )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v6 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v6);
  }
  return result;
}
