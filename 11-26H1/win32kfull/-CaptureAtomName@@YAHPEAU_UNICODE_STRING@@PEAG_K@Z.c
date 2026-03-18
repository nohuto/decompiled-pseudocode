/*
 * XREFs of ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x140156820
 * Callers:
 *     NtUserGetProp2 @ 0x140279820 (NtUserGetProp2.c)
 *     NtUserSetProp2 @ 0x14027A270 (NtUserSetProp2.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall CaptureAtomName(struct _UNICODE_STRING *a1, unsigned __int16 *a2)
{
  unsigned int v4; // r15d
  unsigned int ULongFromUser; // eax
  unsigned __int16 v6; // di
  unsigned int v7; // r14d
  unsigned __int64 ULong64FromUser; // rax
  unsigned __int16 *v9; // rdx
  ULONG64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int16 v14; // r8

  v4 = 0;
  ULongFromUser = RtlReadULongFromUser(a1);
  v6 = ULongFromUser;
  v7 = HIWORD(ULongFromUser);
  ULong64FromUser = RtlReadULong64FromUser(&a1->Buffer);
  v9 = (unsigned __int16 *)ULong64FromUser;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = v6 + ULong64FromUser + 2;
  if ( v10 <= ULong64FromUser || v10 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( v6 > (unsigned __int16)v7 )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( (v6 & 1) != 0 )
  {
LABEL_19:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10733LL);
LABEL_20:
    ExRaiseAccessViolation();
  }
  if ( v6 )
  {
    if ( v6 > 0x1FEu )
    {
      UserSetLastError(87);
    }
    else
    {
      v11 = (unsigned __int64)v6 >> 1;
      v12 = 256LL;
      v13 = 0LL;
      while ( v12 )
      {
        if ( !v11 )
          goto LABEL_13;
        v14 = *v9;
        if ( !*v9 )
          goto LABEL_13;
        ++v9;
        *a2++ = v14;
        --v12;
        --v11;
        ++v13;
      }
      --a2;
LABEL_13:
      *a2 = 0;
      return 1;
    }
  }
  else
  {
    UserSetLastError(123);
  }
  return v4;
}
