/*
 * XREFs of EtwpTrackProviderBinary @ 0x180117C5C
 * Callers:
 *     EtwEventSetInformation @ 0x180117BD0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800E89C0 (EtwpTrackRegBinaryInfo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x180158CDC (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1, char a2)
{
  __int16 v3; // rdi^4
  ETWTRACECONTROLCODE v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  unsigned __int32 v8; // edi
  void *UniqueThread; // rdx
  __int64 v10; // r8
  char *v11; // r9
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp+20h] BYREF

  InputBuffer = 0LL;
  ReturnLength = 0;
  v3 = WORD2(a1);
  v4 = EtwTrackBinaryCode;
  v5 = ProviderHandleLookup(a1, a1);
  v6 = v5;
  if ( !v5 || v3 != *(_WORD *)(v5 + 84) )
  {
    v8 = 6;
    goto LABEL_11;
  }
  if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && a2 )
    v4 = EtwGetPmcSessions|EtwStartLoggerCode;
  InputBuffer = *(_QWORD *)(v6 + 88);
  v7 = NtTraceControl(v4, &InputBuffer, 8u, 0LL, 0, &ReturnLength);
  if ( v7 )
  {
    v8 = RtlNtStatusToDosError(v7);
    if ( !v8 )
      goto LABEL_9;
LABEL_11:
    RtlSetLastWin32Error(v8);
    return v8;
  }
  v8 = 0;
LABEL_9:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 64));
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v6 + 86) |= 0x8000u;
  *(_DWORD *)(v6 + 80) = (_DWORD)UniqueThread;
  EtwpTrackRegBinaryInfo(v6, (__int64)UniqueThread, v10, v11);
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 64));
  return v8;
}
