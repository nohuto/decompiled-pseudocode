/*
 * XREFs of EtwpTrackProviderBinary @ 0x180117EAC
 * Callers:
 *     EtwEventSetInformation @ 0x180117E20 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x18006D200 (ProviderHandleLookup.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800E97B0 (EtwpTrackRegBinaryInfo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x180158E0C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1, char a2)
{
  __int16 v3; // rdi^4
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  ULONG v9; // edi
  void *UniqueThread; // rdx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0;
  v3 = WORD2(a1);
  v4 = 26;
  v5 = ProviderHandleLookup(a1, a1);
  v6 = v5;
  if ( !v5 || v3 != *(_WORD *)(v5 + 84) )
  {
    v9 = 6;
    goto LABEL_11;
  }
  if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && a2 )
    v4 = 47;
  v13 = *(_QWORD *)(v6 + 88);
  v7 = NtTraceControl(v4, &v13, 8LL, 0LL, 0, &v12);
  if ( v7 )
  {
    v9 = RtlNtStatusToDosError(v7);
    if ( !v9 )
      goto LABEL_9;
LABEL_11:
    RtlSetLastWin32Error(v9);
    return v9;
  }
  v9 = 0;
LABEL_9:
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 64), v8);
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v6 + 86) |= 0x8000u;
  *(_DWORD *)(v6 + 80) = (_DWORD)UniqueThread;
  EtwpTrackRegBinaryInfo(v6);
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
  return v9;
}
