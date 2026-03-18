/*
 * XREFs of IopLoadCrashdumpDriver @ 0x14050F1D4
 * Callers:
 *     IopInitializeCrashDump @ 0x140793598 (IopInitializeCrashDump.c)
 *     IoGetDumpStack @ 0x140B5FFE0 (IoGetDumpStack.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     IopGetPhysicalMemoryBlock @ 0x1405C98AC (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  int SystemImage; // eax
  int v1; // ecx
  __int64 result; // rax
  int v3; // ecx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  char *v5; // [rsp+50h] [rbp+17h] BYREF
  __int64 (__fastcall *v7)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp+27h]
  __int64 (__fastcall *v8)(ULONG_PTR); // [rsp+68h] [rbp+2Fh]
  __int64 (__fastcall *v9)(int, int, int, int, __int64); // [rsp+70h] [rbp+37h]
  __int64 v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+80h] [rbp+47h]
  int v12; // [rsp+84h] [rbp+4Bh]
  UNICODE_STRING *v13; // [rsp+88h] [rbp+4Fh]
  void *v14; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+B0h] [rbp+77h] BYREF

  DestinationString = 0LL;
  v16 = 0LL;
  v12 = 0;
  v14 = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  SystemImage = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 0, 0, (__int64)&v16, (__int64)&v14);
  v1 = 0;
  if ( SystemImage != -1073741554 )
    v1 = SystemImage;
  if ( v1 < 0 )
    return (unsigned int)v1;
  v15 = 0LL;
  RtlImageNtHeaderEx(1, (unsigned __int64)v14, 0LL, &v15);
  if ( !v15 )
    return 3221225473LL;
  v5 = (char *)&KiSystemServiceTraceCallbackLock.116 + 4;
  v13 = &unk_140F10DF0;
  if ( !IopGetPhysicalMemoryBlock() )
    return 3221225626LL;
  v7 = IopLoadCrashdmpImage;
  v8 = MmUnloadSystemImage;
  v10 = IopReportBugCheckProgress;
  v9 = HvlGetEncryptedData;
  if ( VslVsmEnabled )
    v3 = ((HvlpFlags & 2) != 0) + 1;
  else
    v3 = 0;
  v11 = v3;
  qword_140E65EC8 = (__int64)IopWheaSelLogCheckPoint;
  CrashdmpCallTable = 1;
  qword_140E65EC0 = (__int64)IopWheaSelLogError;
  dword_140E65E54 = 17;
  qword_140E65ED0 = (__int64)&IopWheaSelLogCheckPointEx;
  result = guard_dispatch_icall_no_overrides(&v5, &CrashdmpCallTable);
  if ( (int)result >= 0 )
  {
    CrashdmpImageEntry = v16;
    CrashdmpImageBase = v14;
    return 0LL;
  }
  return result;
}
