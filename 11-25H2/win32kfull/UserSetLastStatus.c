/*
 * XREFs of UserSetLastStatus @ 0x14009D6E8
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14009D200 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1400E0EB0 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserDwmKernelStartup @ 0x14019CE10 (NtUserDwmKernelStartup.c)
 *     NtUserConsoleControl @ 0x1401B6150 (NtUserConsoleControl.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1401B87C0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1401C7EB0 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1401D62D0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserOpenWindowStation @ 0x1401E4DE0 (NtUserOpenWindowStation.c)
 *     NtUserSetWindowCompositionTransition @ 0x1401E65E0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x140220740 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelShutdown @ 0x140295EA0 (NtUserDwmKernelShutdown.c)
 *     NtUserFindExistingCursorIcon @ 0x140296850 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x14029C830 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserRegisterWindowMessage @ 0x14029D1D0 (NtUserRegisterWindowMessage.c)
 *     NtUserSetAutoRotation @ 0x14029DFC0 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402A3000 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process(v7, v6);
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v8 = RtlNtStatusToDosError(v4);
      return UserSetLastError(v8);
    }
  }
  return result;
}
