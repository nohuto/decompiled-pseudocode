/*
 * XREFs of ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x180079E28
 * Callers:
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007921C (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BA70 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z @ 0x180079EBC (-HampUtilGetTempFilePath@@YAJPEBGKPEAG@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

signed int __fastcall HampUtilDeleteTempFile(const unsigned __int16 *a1, unsigned int a2)
{
  signed int result; // eax
  WCHAR FileName[528]; // [rsp+20h] [rbp-438h] BYREF

  result = HampUtilGetTempFilePath(a1, a2, FileName);
  if ( result >= 0 )
  {
    if ( DeleteFileW(FileName) )
      return 0;
    result = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0xC0070000 : GetLastError();
    if ( result >= 0 )
      return 0;
  }
  return result;
}
