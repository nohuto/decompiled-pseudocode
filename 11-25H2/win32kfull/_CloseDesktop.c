/*
 * XREFs of _CloseDesktop @ 0x140288754
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140165E80 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     EditionCloseDesktopEntryPoint @ 0x1401C7310 (EditionCloseDesktopEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     CloseProtectedHandle @ 0x1401B60FC (CloseProtectedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 UserGdiSessionState; // rax
  PVOID v11; // rdi
  __int64 i; // rcx
  NTSTATUS v13; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v7);
    v11 = Object;
    if ( *(_QWORD *)v5 != *(_QWORD *)(UserGdiSessionState + 40) )
    {
      for ( i = *(_QWORD *)(v5 + 320); i; i = *(_QWORD *)(i + 704) )
      {
        if ( ((*(_QWORD *)(i + 632) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170);
          ObfDereferenceObject(Object);
          return 2147483665LL;
        }
      }
      if ( Object == *(PVOID *)(v5 + 336) && ((*(_QWORD *)(v5 + 376) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v5 + 336));
        *(_QWORD *)(v5 + 376) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    v13 = CloseProtectedHandle((HANDLE)Handle, a2);
    ObfDereferenceObject(v11);
    if ( !gbIgnoreStressedOutStuff && v13 < 0 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5783);
    }
    return 0LL;
  }
  else
  {
    SetLastNtError(v6);
    return v8;
  }
}
