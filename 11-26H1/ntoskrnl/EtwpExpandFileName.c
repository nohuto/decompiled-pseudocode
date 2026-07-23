/*
 * XREFs of EtwpExpandFileName @ 0x140A1586C
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     EtwpGetDriverDataDosPath @ 0x140500A2C (EtwpGetDriverDataDosPath.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4, char a5)
{
  __int64 v5; // r12
  char v8; // r15
  char v9; // r13
  __int64 Length; // rax
  __int64 v11; // r10
  struct _LIST_ENTRY *v12; // rdi
  unsigned int v13; // esi
  size_t v14; // rbx
  __int64 result; // rax
  __int64 v16; // rax
  wchar_t *Pool2; // rax
  const WCHAR *v18; // rsi
  NTSTATUS v19; // eax
  unsigned int v20; // edi
  const WCHAR *Blink; // r9
  const WCHAR *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _LIST_ENTRY *v25; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h]

  v26 = a3;
  v5 = 0LL;
  v25 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = a2->Length;
  v11 = a3 != 0 ? 8 : 0;
  v12 = 0LL;
  v13 = 0;
  if ( a1 )
  {
    v8 = 1;
    v14 = Length + v11 + 2 + *a4;
  }
  else
  {
    v14 = Length + v11 + 2;
  }
  if ( !wcsnicmp(a2->Buffer, L"%SystemRoot%", 0xCuLL) )
  {
    if ( a2->Length == 24 )
    {
      v9 = 1;
      v16 = *a4 + 54LL;
    }
    else
    {
      if ( a2->Buffer[((unsigned __int64)a2->Length >> 1) - 1] != 92 )
      {
LABEL_12:
        v12 = PsGetCurrentServerSiloGlobals() + 77;
LABEL_13:
        v5 = 12LL;
        v14 += LOWORD(v12->Flink) - 24LL;
        goto LABEL_14;
      }
      v16 = *a4;
      v8 = 1;
    }
    v14 += v16;
    goto LABEL_12;
  }
  if ( a5 && !wcsnicmp(a2->Buffer, L"%DriverData%", 0xCuLL) )
  {
    result = EtwpGetDriverDataDosPath(&v25);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v12 = v25;
    goto LABEL_13;
  }
LABEL_14:
  if ( !v26 && !v8 && !v12 )
    return v13;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v18 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( v9 )
  {
    v19 = RtlStringCbPrintfW(
            Pool2,
            v14,
            L"%ws%ws%ws%ws",
            v12->Blink,
            L"\\system32\\Logfiles\\WMI\\",
            *((_QWORD *)a4 + 1),
            L".etl");
  }
  else
  {
    Blink = &word_140B8A320;
    if ( v8 )
      v22 = (const WCHAR *)*((_QWORD *)a4 + 1);
    else
      v22 = &word_140B8A320;
    if ( v12 )
      Blink = (const WCHAR *)v12->Blink;
    v19 = RtlStringCbPrintfW(Pool2, v14, L"%ws%ws%ws", Blink, &a2->Buffer[v5], v22);
  }
  v20 = v19;
  if ( v26 )
  {
    v23 = -1LL;
    v24 = -1LL;
    do
      ++v24;
    while ( v18[v24] );
    do
      ++v23;
    while ( v18[v23] );
    v20 = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)&v18[v23], v14 - 2 * v24, L".%03d", v26);
  }
  RtlFreeAnsiString(a2);
  RtlInitUnicodeString(a2, v18);
  return v20;
}
