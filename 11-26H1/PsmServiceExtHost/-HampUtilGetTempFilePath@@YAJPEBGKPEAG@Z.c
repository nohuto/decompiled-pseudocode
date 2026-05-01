/*
 * XREFs of ?HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z @ 0x180079EBC
 * Callers:
 *     ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x180079D5C (-HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z.c)
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x180079E28 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180018844 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

DWORD __fastcall HampUtilGetTempFilePath(const unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  int TempPath2W; // eax

  TempPath2W = GetTempPath2W(522LL, a3);
  if ( TempPath2W )
    return RtlStringCchCopyW((char *)&a3[TempPath2W], (unsigned int)(522 - TempPath2W), (char *)L"HamTerminateHang.dmp");
  if ( (int)GetLastError() > 0 )
    return (unsigned __int16)GetLastError() | 0xC0070000;
  return GetLastError();
}
