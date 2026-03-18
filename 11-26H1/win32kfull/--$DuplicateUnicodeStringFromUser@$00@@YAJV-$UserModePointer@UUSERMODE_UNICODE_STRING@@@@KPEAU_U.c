/*
 * XREFs of ??$DuplicateUnicodeStringFromUser@$00@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x140254ED8
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall DuplicateUnicodeStringFromUser<1>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int ULongFromUser; // eax
  unsigned __int16 v6; // di
  unsigned __int64 ULong64FromUser; // rax
  void *v8; // r14
  ULONG64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rax
  __int64 v13; // [rsp+30h] [rbp-48h]

  *(_OWORD *)a3 = 0LL;
  ULongFromUser = RtlReadULongFromUser(a1);
  v6 = ULongFromUser;
  v13 = ULongFromUser;
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  v8 = (void *)ULong64FromUser;
  if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = ULong64FromUser + v6 + 2LL;
    if ( v9 <= ULong64FromUser || v9 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( v6 > WORD1(v13) || (v6 & 1) != 0 )
    {
      if ( (v6 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15715LL);
      ExRaiseAccessViolation();
    }
  }
  v10 = v6 + 2LL;
  if ( v10 >= v6 )
  {
    if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      *(_QWORD *)(a3 + 8) = ULong64FromUser;
      return 0LL;
    }
    if ( !ULong64FromUser )
      return 0LL;
    v11 = (void *)Win32AllocPoolWithQuotaZInit(v10, 2020897621LL);
    *(_QWORD *)(a3 + 8) = v11;
    if ( v11 )
    {
      RtlCopyFromUser(v11, v8, v6);
      *(_WORD *)a3 = v6;
      *(_WORD *)(a3 + 2) = v6 + 2;
      *(_WORD *)((v6 & 0xFFFE) + *(_QWORD *)(a3 + 8)) = 0;
      return 0LL;
    }
  }
  return 3221225495LL;
}
