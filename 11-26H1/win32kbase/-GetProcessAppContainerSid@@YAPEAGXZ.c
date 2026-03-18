/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x140184D98
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x140184A50 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140156594 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

char *__fastcall GetProcessAppContainerSid(__int64 a1)
{
  char *v1; // rbx
  BOOL v2; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v4; // rsi
  int v5; // ecx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  UnicodeString = 0LL;
  v1 = 0LL;
  v2 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1);
  v4 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v4, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    v6 = (char *)Win32AllocPoolWithQuotaZInitImpl(v5, UnicodeString.Length + 2LL, 0x79747355u);
    v1 = v6;
    if ( v6 )
      v2 = (int)RtlStringCchCopyNW(
                  v6,
                  UnicodeString.Length + 1LL,
                  (char *)UnicodeString.Buffer,
                  (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v4);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v2 && v1 )
  {
    GreDeleteFastMutex(v1, v7, v8, v9);
    v1 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v1;
}
