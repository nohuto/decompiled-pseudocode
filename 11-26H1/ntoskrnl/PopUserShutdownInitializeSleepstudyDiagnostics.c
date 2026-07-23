/*
 * XREFs of PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140CD77C0
 * Callers:
 *     PopUserShutdownScenarioInitialize @ 0x140CD78F0 (PopUserShutdownScenarioInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14042FCB0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperCreateLibrary @ 0x140B47F20 (SleepstudyHelperCreateLibrary.c)
 */

__int64 PopUserShutdownInitializeSleepstudyDiagnostics()
{
  __int64 result; // rax
  unsigned int v1; // edi
  PKSPIN_LOCK **v2; // rsi
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 *v5; // rbx
  __int128 v6; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  UNICODE_STRING v9; // [rsp+68h] [rbp+27h] BYREF
  _OWORD v10[2]; // [rsp+78h] [rbp+37h] BYREF
  __int64 *v11; // [rsp+A8h] [rbp+67h] BYREF

  v11 = 0LL;
  result = SleepstudyHelperCreateLibrary(1347639124, &PopUserShutdownLibraryHandle);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v6 = 0x5AADDAADDLL;
    v10[0] = GUID_USER_SHUTDOWN_PO_BLOCKER;
    *((_QWORD *)&v6 + 1) = 120LL;
    RtlInitUnicodeString(&DestinationString, L"PO Burst");
    v7[0] = &PopUserShutdownPoBlockerHandle;
    v10[1] = GUID_USER_SHUTDOWN_WINLOGON_BLOCKER;
    RtlInitUnicodeString(&v9, L"Winlogon");
    v1 = 0;
    v7[1] = &PopUserShutdownWinlogonBlockerHandle;
    v2 = (PKSPIN_LOCK **)v7;
    do
    {
      result = SleepstudyHelperCreateBlockerFromGuid(
                 PopUserShutdownLibraryHandle,
                 &v6,
                 &v10[v1],
                 (__int64)(&DestinationString + v1),
                 4u,
                 (__int64 *)&v11);
      v5 = v11;
      if ( (int)result < 0 )
        break;
      result = SleepstudyHelperBuildBlocker(v11, *v2, v3, v4);
      if ( (int)result < 0 )
        break;
      v5 = 0LL;
      ++v1;
      ++v2;
      v11 = 0LL;
    }
    while ( v1 < 2 );
    if ( v5 )
      return SleepstudyHelperDestroyBlockerBuilder(v5);
  }
  return result;
}
