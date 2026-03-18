/*
 * XREFs of ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x140200920
 * Callers:
 *     _OpenDesktop @ 0x14018ACD8 (_OpenDesktop.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
        int a1,
        struct _OBJECT_ATTRIBUTES *a2,
        unsigned __int16 (*a3)[256],
        struct _OBJECT_ATTRIBUTES *a4,
        struct _SECURITY_QUALITY_OF_SERVICE *a5,
        void **a6,
        PUNICODE_STRING DestinationString,
        unsigned __int16 **a8)
{
  int ProcessLuid; // ebx
  PUNICODE_STRING ObjectName; // r13
  PVOID SecurityQualityOfService; // rdx
  PVOID SecurityDescriptor; // rcx
  __int64 v14; // rdx
  PWSTR Buffer; // rax
  __int64 Length; // rcx
  ULONG64 v17; // rdx
  USHORT v18; // ax
  USHORT v19; // ax
  unsigned __int16 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  struct _SECURITY_QUALITY_OF_SERVICE *v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-A8h]
  struct _UNICODE_STRING v27; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-90h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE *v29; // [rsp+50h] [rbp-88h]
  unsigned __int16 **v30; // [rsp+58h] [rbp-80h]
  struct _OBJECT_ATTRIBUTES v31[2]; // [rsp+60h] [rbp-78h] BYREF

  HIDWORD(v26) = a1;
  v29 = a5;
  v30 = a8;
  ProcessLuid = 0;
  v28 = 0LL;
  *a8 = 0LL;
  *a6 = 0LL;
  memset(v31, 0, 48);
  RtlCopyFromUser(v31, a2, 0x30uLL);
  *a4 = v31[0];
  a4->Attributes &= ~0x200u;
  if ( HIDWORD(v26) && !a4->ObjectName && !a4->RootDirectory )
  {
    ProcessLuid = GetProcessLuid(0LL, &v28);
    LODWORD(v26) = ProcessLuid;
    if ( ProcessLuid >= 0 )
    {
      UserSessionState = W32GetUserSessionState(v22, v21);
      RtlStringCchPrintfW(
        (unsigned __int16 *)a3,
        0x100uLL,
        L"%ws\\Service-0x%x-%x$",
        UserSessionState + 63600,
        HIDWORD(v28),
        v28,
        v26);
      RtlInitUnicodeString(DestinationString, (PCWSTR)a3);
      goto LABEL_20;
    }
    goto LABEL_4;
  }
  ObjectName = a4->ObjectName;
  if ( !ObjectName )
  {
LABEL_3:
    ProcessLuid = -1073741811;
    goto LABEL_4;
  }
  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  *(_DWORD *)&v27.Length = RtlReadULongFromUser(ObjectName);
  v27.Buffer = (PWSTR)RtlReadULong64FromUser(&ObjectName->Buffer);
  *DestinationString = v27;
  Buffer = DestinationString->Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Length = DestinationString->Length;
  v17 = (ULONG64)Buffer + Length + 2;
  if ( v17 <= (unsigned __int64)Buffer || v17 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)Length > DestinationString->MaximumLength )
  {
    if ( (Length & 1) == 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( (Length & 1) != 0 )
  {
LABEL_29:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1787LL);
LABEL_30:
    ExRaiseAccessViolation();
  }
  if ( !(_WORD)Length )
    goto LABEL_3;
  v18 = 522;
  if ( (unsigned __int16)Length < 0x20Au )
    v18 = DestinationString->Length;
  DestinationString->Length = v18;
  v19 = v18 + 2;
  DestinationString->MaximumLength = v19;
  v20 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(v19, 2037674837LL);
  *a8 = v20;
  if ( v20 )
  {
    memmove(v20, DestinationString->Buffer, DestinationString->Length);
    DestinationString->Buffer = *a8;
LABEL_20:
    a4->ObjectName = DestinationString;
    goto LABEL_4;
  }
  ProcessLuid = -1073741801;
LABEL_4:
  if ( ProcessLuid >= 0 )
  {
    SecurityQualityOfService = a4->SecurityQualityOfService;
    if ( SecurityQualityOfService )
    {
      *(_QWORD *)&v27.Length = 0LL;
      LODWORD(v27.Buffer) = 0;
      RtlCopyFromUser(&v27, SecurityQualityOfService, 0xCuLL);
      v24 = v29;
      *(_QWORD *)&v29->Length = *(_QWORD *)&v27.Length;
      *(_DWORD *)&v24->ContextTrackingMode = v27.Buffer;
      a4->SecurityQualityOfService = v24;
    }
    SecurityDescriptor = a4->SecurityDescriptor;
    if ( SecurityDescriptor )
    {
      LOBYTE(SecurityQualityOfService) = 1;
      ProcessLuid = SeCaptureSecurityDescriptor(SecurityDescriptor, SecurityQualityOfService);
      if ( ProcessLuid < 0 )
      {
        ProcessLuid = 0;
        if ( *a6 )
        {
          LOBYTE(v14) = 1;
          SeReleaseSecurityDescriptor(*a6, v14, 0LL);
          *a6 = 0LL;
        }
      }
      a4->SecurityDescriptor = *a6;
    }
  }
  if ( ProcessLuid < 0 && *a8 )
  {
    Win32FreePool(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)ProcessLuid;
}
