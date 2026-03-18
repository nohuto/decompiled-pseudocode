/*
 * XREFs of ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x1402927D8
 * Callers:
 *     NtUserGetProp2 @ 0x14024A310 (NtUserGetProp2.c)
 *     NtUserSetProp2 @ 0x14024E0E0 (NtUserSetProp2.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011B9D0 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CaptureAtomName(struct _UNICODE_STRING *a1, char *a2)
{
  struct _UNICODE_STRING *v3; // r9
  int v4; // ecx
  char *Buffer; // r8
  ULONG64 v6; // rdx
  int v7; // ecx
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v3 = a1;
  v9 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (struct _UNICODE_STRING *)MmUserProbeAddress;
  v4 = *(_DWORD *)&v3->Length;
  Buffer = (char *)v3->Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (ULONG64)&Buffer[(unsigned __int16)v4 + 2];
  if ( v6 <= (unsigned __int64)Buffer || v6 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v4 > (unsigned __int16)HIWORD(*(_DWORD *)&v3->Length) )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v4 & 1) != 0 )
  {
LABEL_16:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10687);
LABEL_17:
    ExRaiseAccessViolation();
  }
  if ( (_WORD)v4 )
  {
    if ( (unsigned __int16)v4 <= 0x1FEu )
    {
      RtlStringCchCopyNW(a2, 256LL, Buffer, (unsigned __int64)(unsigned __int16)v4 >> 1);
      return 1;
    }
    v7 = 87;
  }
  else
  {
    v7 = 123;
  }
  UserSetLastError(v7);
  return v9;
}
