/*
 * XREFs of EtwpGenerateFileName @ 0x140B277B0
 * Callers:
 *     EtwpIncrementTraceFile @ 0x14077E0A0 (EtwpIncrementTraceFile.c)
 *     EtwpFlushBufferToLogfile @ 0x140A14718 (EtwpFlushBufferToLogfile.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  wchar_t *Pool2; // rax
  wchar_t *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( !v7 || v7 != wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) || !wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
    return 3221225523LL;
  v8 = _InterlockedExchangeAdd(a2, 1u);
  v9 = a1[1];
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( RtlStringCbPrintfW(Pool2, v9 + 64, *((NTSTRSAFE_PCWSTR *)a1 + 1), (unsigned int)(v8 + 1))
    || !memcmp(*((const void **)a1 + 1), v11, *a1) )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  RtlFreeAnsiString(a3);
  RtlInitUnicodeString(a3, v11);
  return 0LL;
}
