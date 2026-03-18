/*
 * XREFs of NtRIMQueryDevicePath @ 0x1401D8210
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(ULONG64 a1, _QWORD *a2)
{
  ULONG64 v3; // rdx
  int v4; // eax
  WCHAR *v5; // rcx
  ULONG64 v6; // r8
  ULONG64 v7; // rdx
  NTSTATUS v8; // ebx
  PWSTR Buffer; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 **v15; // r15
  __int64 *i; // rsi
  int v17; // eax
  __int64 v18; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-40h] BYREF
  int v22; // [rsp+B0h] [rbp+18h]
  void *Handle; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  Handle = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v4 = *(_DWORD *)v3;
  v22 = *(_DWORD *)v3;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v3;
  v5 = *(WCHAR **)(v3 + 8);
  SourceString.Buffer = v5;
  if ( ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (ULONG64)v5 + (unsigned __int16)v4 + 2;
  if ( v6 <= (unsigned __int64)v5 || (v7 = MmUserProbeAddress, v6 >= MmUserProbeAddress) )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v4 > HIWORD(v22) )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v4 & 1) != 0 )
  {
LABEL_16:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5931);
LABEL_17:
    ExRaiseAccessViolation();
  }
  if ( (unsigned __int16)v4 >= 6u )
  {
    DestinationString.MaximumLength = v4;
    DestinationString.Length = v4;
    DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v4, 0x706D7452u);
    if ( DestinationString.Buffer )
    {
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    v7 = MmUserProbeAddress;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( *DestinationString.Buffer == 92 && DestinationString.Buffer[1] == 92 && DestinationString.Buffer[2] == 63 )
    {
      DestinationString.Buffer[1] = 63;
      v7 = MmUserProbeAddress;
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 >= 0 )
    {
      UserSessionState = W32GetUserSessionState(Buffer, v7);
      RIMLockShared(UserSessionState + 56);
      v8 = -1073741275;
      v15 = (__int64 **)(W32GetUserSessionState(v12, v11) + 136);
      for ( i = *v15; i != (__int64 *)v15; i = (__int64 *)*i )
      {
        if ( !*((_BYTE *)i - 5) )
        {
          v17 = *((_DWORD *)i + 56);
          if ( (v17 & 0x400) == 0 && ((v17 & 0x2000) == 0 || (i[30] & 4) == 0) )
          {
            if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 31), 0) )
            {
              v8 = ObOpenObjectByPointer(i - 2, 0, 0LL, 1u, ExRawInputManagerObjectType, 0, &Handle);
              break;
            }
          }
        }
      }
      v18 = W32GetUserSessionState(v14, v13);
      W32ReleasePushLockShared((struct W32_PUSH_LOCK *)(v18 + 56));
      if ( v8 >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  if ( DestinationString.Buffer )
    GreDeleteFastMutex((char *)DestinationString.Buffer);
  return (unsigned int)v8;
}
