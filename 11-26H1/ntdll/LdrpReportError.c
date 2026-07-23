/*
 * XREFs of LdrpReportError @ 0x1800D75E0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     StringCbPrintfW @ 0x180040C14 (StringCbPrintfW.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtRaiseHardError @ 0x180161CF0 (NtRaiseHardError.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

void __fastcall LdrpReportError(__int128 *a1, char *a2, NTSTATUS a3)
{
  __int128 *v5; // rdi
  size_t v6; // rax
  unsigned __int8 v7; // r14
  size_t v8; // rax
  ULONG v9; // esi
  ULONG v10; // r12d
  size_t v11; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 Response; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h] BYREF
  ANSI_STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 Parameters; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v18; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  LODWORD(Response) = 0;
  v5 = a1;
  v14 = 0LL;
  if ( a1 )
  {
    v7 = 1;
  }
  else
  {
    *((_QWORD *)&v14 + 1) = L"Unknown";
    v6 = 2 * wcslen(L"Unknown");
    v5 = &v14;
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    LOWORD(v14) = v6;
    WORD1(v14) = v6 + 2;
    v7 = 0;
  }
  if ( a3 == -1073741511 )
  {
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = a2;
    if ( a2 )
    {
      v8 = strlen(a2);
      if ( v8 >= 0xFFFF )
        LOWORD(v8) = -2;
      SourceString.Length = v8;
      SourceString.MaximumLength = v8 + 1;
    }
    DestinationString.Buffer = (wchar_t *)&v18;
    DestinationString.MaximumLength = 256;
    if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0) < 0 )
      DestinationString.Length = 0;
    v9 = 3;
    v10 = 3;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      890,
      (__int64)"LdrpReportError",
      v7 ^ 1,
      "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
      &DestinationString,
      v5,
      -1073741511,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      Response,
      v14,
      *(_QWORD *)&SourceString.Length,
      SourceString.Buffer,
      &DestinationString,
      v5,
      -1073741511LL);
  }
  else if ( a3 == -1073741512 )
  {
    StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
    DestinationString.Buffer = pszDest;
    v11 = 2 * wcslen(pszDest);
    Parameters = (unsigned __int64)a2;
    v9 = 3;
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    DestinationString.Length = v11;
    v10 = 2;
    DestinationString.MaximumLength = v11 + 2;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      864,
      (__int64)"LdrpReportError",
      v7 ^ 1,
      "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
      (_DWORD)a2,
      v5,
      -1073741512,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      Response,
      v14,
      *(_QWORD *)&SourceString.Length,
      SourceString.Buffer,
      Parameters,
      v5,
      -1073741512LL);
  }
  else
  {
    DestinationString.Buffer = 0LL;
    if ( a3 == -1073741515 )
    {
      v9 = 1;
      v10 = 1;
      Parameters = (unsigned __int64)v5;
    }
    else
    {
      v9 = 3;
      v10 = 3;
    }
  }
  if ( v7 )
  {
    if ( NtRaiseHardError(a3, v9, v10, &Parameters, 1u, (PULONG)&Response) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( (unsigned int)(a3 + 1073741512) <= 1 )
      RtlRaiseStatus(a3);
  }
}
