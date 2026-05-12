/*
 * XREFs of sub_14007B47C @ 0x14007B47C
 * Callers:
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14007B47C(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v9; // [rsp+60h] [rbp-28h] BYREF

  v9 = 0LL;
  result = WheaErrorSourceGetState((unsigned int)dword_140168D38);
  if ( (_DWORD)result == 2 )
  {
    if ( a2 )
      return WheaReportFatalHwErrorDeviceDriverEx(
               (unsigned int)dword_140168D38,
               a1,
               &qword_1401688D0,
               (unsigned __int16)word_1401688DA,
               a4,
               a4 != 0 ? 0x24 : 0,
               &v9,
               0,
               0LL,
               &xmmword_14014C798,
               a5);
    else
      return WheaReportHwErrorDeviceDriverEx(
               (unsigned int)dword_140168D38,
               a1,
               &qword_1401688D0,
               (unsigned __int16)word_1401688DA,
               a4,
               a4 != 0 ? 0x24 : 0,
               &v9,
               0,
               1,
               0LL);
  }
  return result;
}
