/*
 * XREFs of NtUserRemoveVisualIdentifier @ 0x1401E8260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1402487E4 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserRemoveVisualIdentifier(__int64 a1)
{
  NTSTATUS v1; // eax
  int v2; // ebx
  ULONG v3; // eax
  __int64 ULong64FromUser; // [rsp+48h] [rbp+10h] BYREF

  ULong64FromUser = RtlReadULong64FromUser(a1);
  v1 = InputObjectMap::RemoveMapping(&ULong64FromUser);
  v2 = 0;
  if ( v1 >= 0 )
  {
    return 1;
  }
  else
  {
    v3 = RtlNtStatusToDosError(v1);
    UserSetLastError(v3);
  }
  return v2;
}
