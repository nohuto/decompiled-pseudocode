/*
 * XREFs of IopProtectSystemPartition @ 0x140CBF198
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtOpenKey @ 0x140974540 (NtOpenKey.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 */

char __fastcall IopProtectSystemPartition(__int64 a1)
{
  size_t Size; // [rsp+20h] [rbp-79h]
  __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-49h] BYREF
  int v8; // [rsp+60h] [rbp-39h]
  int v9; // [rsp+64h] [rbp-35h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-29h]
  int v12; // [rsp+78h] [rbp-21h]
  int v13; // [rsp+7Ch] [rbp-1Dh]
  __int128 v14; // [rsp+80h] [rbp-19h]
  _BYTE v15[80]; // [rsp+90h] [rbp-9h] BYREF

  Handle = 0LL;
  v9 = 0;
  v13 = 0;
  LODWORD(v4) = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  v8 = 48;
  p_DestinationString = &DestinationString;
  v10 = 0LL;
  v12 = 64;
  v14 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v7, L"Protect System Partition");
    LODWORD(Size) = 20;
    if ( (int)NtQueryValueKey(Handle, (unsigned int *)&v7.Length, 2LL, (unsigned __int64)v15, Size, (unsigned int *)&v4) >= 0
      && v15[12] )
    {
      IopApplySystemPartitionProt(a1);
    }
    NtClose(Handle);
  }
  return 1;
}
