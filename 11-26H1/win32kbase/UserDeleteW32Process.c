/*
 * XREFs of UserDeleteW32Process @ 0x1401C0400
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     ??1ReferencedW32Process@@QEAA@XZ @ 0x1400C5614 (--1ReferencedW32Process@@QEAA@XZ.c)
 *     DereferenceW32ProcessEx @ 0x140107B90 (DereferenceW32ProcessEx.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UserDeleteW32Process(struct _RTL_BITMAP *Buffer, __int64 a2)
{
  __int64 v3; // rdx
  PVOID *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16, a2);
  if ( !LODWORD(Buffer->Buffer) )
  {
    if ( *(&Buffer[64].SizeOfBitMap + 1) )
    {
      v3 = *(_QWORD *)&Buffer[65].SizeOfBitMap;
      if ( *(struct _RTL_BITMAP **)(v3 + 8) != &Buffer[65] || (v4 = (PVOID *)Buffer[65].Buffer, *v4 != &Buffer[65]) )
        __fastfail(3u);
      *v4 = (PVOID)v3;
      *(_QWORD *)(v3 + 8) = v4;
    }
    if ( (PULONG *)Buffer[68].Buffer != &Buffer[68].Buffer )
    {
      v17 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTellMeIf", 0x20000, 2505);
    }
    UserSessionState = W32GetUserSessionState((_DWORD)v4, v3, v5);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19840));
    v11 = (char *)Buffer[44].Buffer;
    if ( v11 )
    {
      GreDeleteFastMutex(v11, v8, v9, v10);
      RtlInitializeBitMap(Buffer + 44, 0LL, 0);
    }
    v12 = W32GetUserSessionState((_DWORD)v11, v8, v9);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v12 + 19840));
    PsSetProcessWin32Process(*(_QWORD *)&Buffer->SizeOfBitMap, 0LL, Buffer);
    GreDeleteFastMutex((char *)Buffer, v13, v14, v15);
  }
  if ( !v16 )
    UserSessionSwitchLeaveCritWithNonPaged((__int64)v4, v3, v5, v6);
}
