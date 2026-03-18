/*
 * XREFs of NtUserRegisterWindowMessage @ 0x14029D1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(ULONG64 a1)
{
  ULONG64 v1; // r8
  int v2; // ecx
  char *v3; // r8
  ULONG64 v4; // rdx
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-248h]
  char v9[512]; // [rsp+50h] [rbp-218h] BYREF

  v1 = a1;
  if ( a1 >= MmUserProbeAddress )
    v1 = MmUserProbeAddress;
  v2 = *(_DWORD *)v1;
  v8 = *(_DWORD *)v1;
  v3 = *(char **)(v1 + 8);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (ULONG64)&v3[(unsigned __int16)v2 + 2];
  if ( v4 <= (unsigned __int64)v3 || v4 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v2 > HIWORD(v8) )
  {
    if ( (v2 & 1) == 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (v2 & 1) != 0 )
  {
LABEL_11:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10585);
LABEL_12:
    ExRaiseAccessViolation();
  }
  v5 = RtlStringCchCopyW(v9, 256LL, v3);
  v6 = 0;
  if ( v5 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v9, 0LL, 2LL);
  else
    UserSetLastStatus(v5, 1);
  return v6;
}
