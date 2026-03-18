/*
 * XREFs of NtUserRemoveVisualIdentifier @ 0x1401BF8C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1402134C8 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x14023E0E0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 */

__int64 __fastcall NtUserRemoveVisualIdentifier(void *Src)
{
  int v1; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // eax
  struct _LUID v5; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v5 = 0LL;
  v6 = 0LL;
  RtlCopyFromUser(&v6, Src, 8uLL);
  v5 = v6;
  if ( CDesktopInputSink::IsEqualByLuid(&v5) )
    return -1073741790LL;
  v3 = InputObjectMap::RemoveMapping(&v5, 0LL);
  if ( v3 >= 0 )
  {
    return 1;
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    UserSetLastError(v4);
  }
  return v1;
}
