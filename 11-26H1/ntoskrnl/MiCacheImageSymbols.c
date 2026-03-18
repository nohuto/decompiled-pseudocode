/*
 * XREFs of MiCacheImageSymbols @ 0x140A78F14
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140A78E84 (MiDriverLoadSucceeded.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1404DF564 (DbgLoadImageSymbolsUnicode.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     RtlGetNtSystemRoot @ 0x140A79090 (RtlGetNtSystemRoot.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiCacheImageSymbols(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 *v6; // r14
  int CurrentProcessorColor; // eax
  wchar_t *PoolMm; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 NtSystemRoot; // rax
  NTSTATUS v14; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (__int64 *)(a1 + 48);
  *(_QWORD *)&DestinationString.Length = a1 + 48;
  if ( RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 6u, &v16) )
  {
    DestinationString = 0LL;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (wchar_t *)ExAllocatePoolMm(256LL, 0x100uLL, 1850502477, CurrentProcessorColor | 0x80000000);
    if ( PoolMm )
    {
      if ( a2->Length <= 0x16u || wcsnicmp(a2->Buffer, L"\\SystemRoot", 0xBuLL) )
      {
        v14 = RtlStringCbPrintfW(PoolMm, 0x100uLL, L"%wZ", a3);
      }
      else
      {
        DestinationString = *a2;
        DestinationString.Buffer = a2->Buffer + 11;
        DestinationString.Length -= 22;
        NtSystemRoot = RtlGetNtSystemRoot(v10, v9, v11, v12);
        v14 = RtlStringCbPrintfW(PoolMm, 0x100uLL, L"%ws%wZ", NtSystemRoot + 4, &DestinationString);
      }
      if ( v14 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, PoolMm);
        if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *v6) == 1 )
          *(_DWORD *)(a1 + 104) |= 0x100000u;
      }
      ExFreePoolWithTag(PoolMm, 0);
    }
  }
}
