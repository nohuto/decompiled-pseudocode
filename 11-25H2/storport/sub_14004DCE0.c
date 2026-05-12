/*
 * XREFs of sub_14004DCE0 @ 0x14004DCE0
 * Callers:
 *     sub_1400401B0 @ 0x1400401B0 (sub_1400401B0.c)
 *     sub_1400CD404 @ 0x1400CD404 (sub_1400CD404.c)
 * Callees:
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_140087F44 @ 0x140087F44 (sub_140087F44.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14004DCE0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  char v4; // di
  unsigned int v5; // ebx
  const wchar_t *v7; // r8
  const wchar_t *v8; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  WCHAR SourceString[64]; // [rsp+30h] [rbp-98h] BYREF

  v3 = *a3;
  v4 = a2;
  v5 = a1;
  DestinationString = 0LL;
  if ( v3 == 1314275652 )
  {
    if ( !*((_QWORD *)a3 + 74) )
      return sub_140087F44(a1, a2);
  }
  else if ( v3 != 1094997074 )
  {
    return 3221225659LL;
  }
  v7 = L"\\Device\\NvmePort%d";
  if ( !(_BYTE)a2 )
    v7 = L"\\Device\\ScsiPort%d";
  sub_14003BCD4(
    SourceString,
    64LL,
    v7,
    (unsigned int)a1,
    *(_QWORD *)&DestinationString.Length,
    DestinationString.Buffer);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  v8 = L"\\DosDevices\\NvmeAdapter%d";
  if ( !v4 )
    v8 = L"\\DosDevices\\Scsi%d:";
  sub_14003BCD4(SourceString, 64LL, v8, v5);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
