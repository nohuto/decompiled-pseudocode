/*
 * XREFs of MiCacheImageSymbols @ 0x1409E4F28
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1409E4E98 (MiDriverLoadSucceeded.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1404D8C44 (DbgLoadImageSymbolsUnicode.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     RtlGetNtSystemRoot @ 0x1409E50B0 (RtlGetNtSystemRoot.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiCacheImageSymbols(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 *v6; // r14
  int CurrentProcessorColor; // eax
  wchar_t *PoolMm; // rsi
  PWSTR NtSystemRoot; // rax
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  ULONG v12; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (__int64 *)(a1 + 48);
  *(_QWORD *)&DestinationString.Length = a1 + 48;
  if ( RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 6u, &v12) )
  {
    DestinationString = 0LL;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (wchar_t *)ExAllocatePoolMm(256LL, 0x100uLL, 1850502477, CurrentProcessorColor | 0x80000000);
    if ( PoolMm )
    {
      if ( a2->Length <= 0x16u || wcsnicmp(a2->Buffer, L"\\SystemRoot", 0xBuLL) )
      {
        v10 = RtlStringCbPrintfW(PoolMm, 0x100uLL, L"%wZ", a3);
      }
      else
      {
        DestinationString = *a2;
        DestinationString.Buffer = a2->Buffer + 11;
        DestinationString.Length -= 22;
        NtSystemRoot = RtlGetNtSystemRoot();
        v10 = RtlStringCbPrintfW(PoolMm, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
      }
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, PoolMm);
        if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *v6) == 1 )
          *(_DWORD *)(a1 + 104) |= 0x100000u;
      }
      ExFreePoolWithTag(PoolMm, 0);
    }
  }
}
