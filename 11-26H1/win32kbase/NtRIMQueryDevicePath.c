/*
 * XREFs of NtRIMQueryDevicePath @ 0x1401FF2E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // edi
  unsigned __int64 ULong64FromUser; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG64 v8; // rdx
  int Buffer; // ecx
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 **v17; // r12
  __int64 *i; // r15
  int v19; // eax
  __int64 v20; // rax
  __int128 v22; // [rsp+50h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF
  void *Handle; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  DWORD1(v22) = 0;
  LODWORD(v22) = RtlReadULongFromUser(a1, a2);
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  *((_QWORD *)&v22 + 1) = ULong64FromUser;
  SourceString = (UNICODE_STRING)v22;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = ULong64FromUser + (unsigned __int16)v22 + 2LL;
  if ( v8 <= ULong64FromUser || v8 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v22 > WORD1(v22) || (v22 & 1) != 0 )
  {
    if ( (v22 & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 5868);
    ExRaiseAccessViolation();
  }
  if ( (unsigned __int16)v22 >= 6u )
  {
    DestinationString.MaximumLength = v22;
    DestinationString.Length = v22;
    DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v22, 0x706D7452u);
    if ( DestinationString.Buffer )
      RtlCopyUnicodeString(&DestinationString, &SourceString);
    else
      v4 = -1073741670;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    Buffer = (int)DestinationString.Buffer;
    if ( *DestinationString.Buffer == 92 && DestinationString.Buffer[1] == 92 && DestinationString.Buffer[2] == 63 )
      DestinationString.Buffer[1] = 63;
    else
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      UserSessionState = W32GetUserSessionState(Buffer, v8, v6);
      RIMLockShared(UserSessionState + 56);
      v4 = -1073741275;
      v17 = (__int64 **)(W32GetUserSessionState(v12, v11, v13) + 136);
      for ( i = *v17; i != (__int64 *)v17; i = (__int64 *)*i )
      {
        if ( !*((_BYTE *)i - 5) )
        {
          v19 = *((_DWORD *)i + 56);
          if ( (v19 & 0x400) == 0 && ((v19 & 0x2000) == 0 || (i[30] & 4) == 0) )
          {
            if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 31), 0) )
            {
              v4 = ObOpenObjectByPointer(i - 2, 0, 0LL, 1u, ExRawInputManagerObjectType, 0, &Handle);
              break;
            }
          }
        }
      }
      v20 = W32GetUserSessionState(v15, v14, v16);
      W32ReleasePushLockShared((struct W32_PUSH_LOCK *)(v20 + 56));
      if ( v4 >= 0 )
        RtlWriteULong64ToUser(a2, Handle);
    }
  }
  if ( DestinationString.Buffer )
    GreDeleteFastMutex((char *)DestinationString.Buffer, v8, v6, v7);
  return (unsigned int)v4;
}
