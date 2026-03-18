/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x140148538
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1401481D0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011DBB8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

char *__fastcall GetProcessAppContainerSid(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  BOOL v3; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rsi
  __int64 v6; // rcx
  char *v7; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  UnicodeString = 0LL;
  v2 = 0LL;
  v3 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v5, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    v7 = (char *)Win32AllocPoolWithQuotaZInitImpl(v6, UnicodeString.Length + 2LL, 0x79747355u);
    v2 = v7;
    if ( v7 )
      v3 = (int)RtlStringCchCopyNW(
                  v7,
                  UnicodeString.Length + 1LL,
                  (char *)UnicodeString.Buffer,
                  (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v5);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v3 && v2 )
  {
    GreDeleteFastMutex(v2);
    v2 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v2;
}
