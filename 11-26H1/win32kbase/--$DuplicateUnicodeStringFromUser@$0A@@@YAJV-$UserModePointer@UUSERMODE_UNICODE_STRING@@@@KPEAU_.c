/*
 * XREFs of ??$DuplicateUnicodeStringFromUser@$0A@@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x1401874D4
 * Callers:
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJPEAU_UNICODE_STRING@@K0@Z @ 0x1401874BC (--$DuplicateUnicodeStringFromUser@$0A@@@YAJPEAU_UNICODE_STRING@@K0@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall DuplicateUnicodeStringFromUser<0>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int ULongFromUser; // eax
  unsigned __int16 v6; // di
  unsigned __int64 ULong64FromUser; // rax
  void *v8; // r15
  ULONG64 v9; // rcx
  void *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-58h]

  *(_OWORD *)a3 = 0LL;
  ULongFromUser = RtlReadULongFromUser(a1, a2);
  v6 = ULongFromUser;
  v12 = ULongFromUser;
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  v8 = (void *)ULong64FromUser;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v6 + ULong64FromUser + 2;
  if ( v9 <= ULong64FromUser || v9 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( v6 > WORD1(v12) )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (v6 & 1) != 0 )
  {
LABEL_14:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15801LL);
LABEL_15:
    ExRaiseAccessViolation();
  }
  if ( (unsigned __int64)v6 + 2 >= v6 )
  {
    if ( !ULong64FromUser )
      return 0LL;
    v10 = (void *)Win32AllocPoolWithQuotaZInitImpl(v9, v6 + 2LL, 0x79747355u);
    *(_QWORD *)(a3 + 8) = v10;
    if ( v10 )
    {
      RtlCopyFromUser(v10, v8, v6);
      *(_WORD *)a3 = v6;
      *(_WORD *)(a3 + 2) = v6 + 2;
      *(_WORD *)((v6 & 0xFFFE) + *(_QWORD *)(a3 + 8)) = 0;
      return 0LL;
    }
  }
  return 3221225495LL;
}
