/*
 * XREFs of SmpFinishPFROLogging @ 0x1400146C4
 * Callers:
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x14000B5BC (RtlStringCbPrintfExW.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpGetTime @ 0x14000E8F4 (SmpGetTime.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

void __fastcall SmpFinishPFROLogging(int a1, char a2)
{
  NTSTATUS v3; // eax
  int v4; // edx
  ULONG Length; // [rsp+30h] [rbp-D0h]
  int ByteOffset; // [rsp+38h] [rbp-C8h]
  int Key; // [rsp+40h] [rbp-C0h]
  int Hour; // [rsp+48h] [rbp-B8h]
  int Minute; // [rsp+50h] [rbp-B0h]
  int Second; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+60h] [rbp-A0h]
  size_t pcbRemaining; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  pcbRemaining = 0LL;
  IoStatusBlock = 0LL;
  TimeFields = 0LL;
  if ( SmpLogFileHandle )
  {
    if ( a2 )
    {
      SmpGetTime(&TimeFields);
      v11 = a1;
      Second = TimeFields.Second;
      Minute = TimeFields.Minute;
      Hour = TimeFields.Hour;
      Key = TimeFields.Year;
      ByteOffset = TimeFields.Day;
      Length = TimeFields.Month;
      v3 = RtlStringCbPrintfExW(
             pszDest,
             0x200uLL,
             0LL,
             &pcbRemaining,
             0,
             L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
             Length,
             ByteOffset,
             Key,
             Hour,
             Minute,
             Second,
             v11);
      if ( v3 < 0 )
      {
        v4 = 12248;
LABEL_7:
        SmpLogFailure((__int64)"SmpFinishPFROLogging", v4, v3);
        goto LABEL_8;
      }
      v3 = NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
      if ( v3 < 0 )
      {
        v4 = 12269;
        goto LABEL_7;
      }
    }
LABEL_8:
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
}
