/*
 * XREFs of EtwpAccessCheckFromState @ 0x1408FC6F0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x1403B0740 (SeAccessCheckFromState.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1408FC980 (EtwpGetGuidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAccessCheckFromState(unsigned int *a1, __int64 a2, _TOKEN_ACCESS_INFORMATION *a3)
{
  __int64 v4; // r9
  PSECURITY_DESCRIPTOR v5; // rbx
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+20h] [rbp-99h]
  int Privileges; // [rsp+28h] [rbp-91h]
  int GenericMapping; // [rsp+30h] [rbp-89h]
  KPROCESSOR_MODE AccessMode[4]; // [rsp+38h] [rbp-81h]
  int GrantedAccess; // [rsp+40h] [rbp-79h]
  int AccessStatus; // [rsp+48h] [rbp-71h]
  int v13; // [rsp+50h] [rbp-69h]
  int v14; // [rsp+58h] [rbp-61h]
  int v15; // [rsp+60h] [rbp-59h]
  int v16; // [rsp+68h] [rbp-51h]
  NTSTATUS v17; // [rsp+70h] [rbp-49h] BYREF
  ACCESS_MASK v18; // [rsp+74h] [rbp-45h] BYREF
  void *v19; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-29h] BYREF

  v16 = *((unsigned __int8 *)a1 + 15);
  v15 = *((unsigned __int8 *)a1 + 14);
  v14 = *((unsigned __int8 *)a1 + 13);
  v13 = *((unsigned __int8 *)a1 + 12);
  AccessStatus = *((unsigned __int8 *)a1 + 11);
  v4 = *a1;
  GrantedAccess = *((unsigned __int8 *)a1 + 10);
  *(_DWORD *)AccessMode = *((unsigned __int8 *)a1 + 9);
  GenericMapping = *((unsigned __int8 *)a1 + 8);
  Privileges = *((unsigned __int16 *)a1 + 3);
  PreviouslyGrantedAccess = *((unsigned __int16 *)a1 + 2);
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  DestinationString = 0LL;
  RtlStringCbPrintfW(
    pszDest,
    0x4CuLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    v4,
    PreviouslyGrantedAccess,
    Privileges,
    GenericMapping,
    *(_DWORD *)AccessMode,
    GrantedAccess,
    AccessStatus,
    v13,
    v14,
    v15,
    v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  EtwpGetGuidSecurityDescriptor(&DestinationString, &v19);
  v5 = v19;
  if ( !v19 )
    v5 = EtwpDefaultTraceSecurityDescriptor;
  SeAccessCheckFromState(v5, a3, 0LL, 0x80u, 0, 0LL, (PGENERIC_MAPPING)&EtwpGenericMapping, 1, &v18, &v17);
  if ( v5 && v5 != (PSECURITY_DESCRIPTOR)WmipDefaultAccessSd && v5 != EtwpDefaultTraceSecurityDescriptor )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v17;
}
