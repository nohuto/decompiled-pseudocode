/*
 * XREFs of UserGetLastError @ 0x14019A2A8
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14005F280 (NtUserInjectGenericHidInput.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtMapVisualRelativePoints @ 0x1401D0840 (NtMapVisualRelativePoints.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401E7BB0 (NtUserMapPointsByVisualIdentifier.c)
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
