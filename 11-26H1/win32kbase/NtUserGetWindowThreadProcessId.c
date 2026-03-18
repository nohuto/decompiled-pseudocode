/*
 * XREFs of NtUserGetWindowThreadProcessId @ 0x1401E4F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     UserGetWindowThreadProcessId @ 0x1401B5098 (UserGetWindowThreadProcessId.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetWindowThreadProcessId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int WindowThreadProcessId; // ebx
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  WindowThreadProcessId = UserGetWindowThreadProcessId(a1, &v7, a3, a4);
  if ( WindowThreadProcessId )
  {
    if ( a2 )
      RtlWriteULongToUser(a2, v7);
  }
  else
  {
    UserSetLastError(1400);
  }
  return WindowThreadProcessId;
}
