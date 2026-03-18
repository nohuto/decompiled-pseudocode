/*
 * XREFs of ?AppendProductCodeId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x140281450
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x14009EB04 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS ProductCode; // ebx
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+28h] [rbp-20h]

  *(_QWORD *)Source = 0LL;
  v6 = 0;
  ProductCode = DisplayID_GetProductCode((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  if ( ProductCode < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 319;
    return (unsigned int)ProductCode;
  }
  ProductCode = RtlAppendUnicodeToString(a2, Source);
  if ( ProductCode < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 321;
    return (unsigned int)ProductCode;
  }
  return 0LL;
}
