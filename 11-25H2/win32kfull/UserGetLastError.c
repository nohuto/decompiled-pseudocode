/*
 * XREFs of UserGetLastError @ 0x1400C90C4
 * Callers:
 *     NtUserCloseClipboard @ 0x14002B780 (NtUserCloseClipboard.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserSetCursorPos @ 0x14005EFD0 (NtUserSetCursorPos.c)
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     NtUserOpenClipboard @ 0x1401121B0 (NtUserOpenClipboard.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x14024CC60 (NtUserSendInput.c)
 *     NtUserSetClipboardData @ 0x14024D260 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1, v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
