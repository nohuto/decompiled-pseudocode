/*
 * XREFs of ?AppendFriendlyName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1402812C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x14009EC10 (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendFriendlyName(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2,
        __int64 a3)
{
  int UserFriendlyName; // ebx
  unsigned __int8 v6[8]; // [rsp+20h] [rbp-38h] BYREF
  WCHAR Source[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v6[0] = 0;
  *(_OWORD *)Source = 0LL;
  v8 = 0LL;
  v9 = 0;
  UserFriendlyName = DisplayID_GetUserFriendlyName(
                       (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                       Source,
                       a3,
                       v6);
  if ( UserFriendlyName < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 341;
    return (unsigned int)UserFriendlyName;
  }
  UserFriendlyName = RtlAppendUnicodeToString(a2, Source);
  if ( UserFriendlyName < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 343;
    return (unsigned int)UserFriendlyName;
  }
  return 0LL;
}
