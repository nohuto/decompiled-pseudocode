/*
 * XREFs of ?AppendSerialNumber@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x140281510
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x14009EB80 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS SerialNumber; // ebx
  WCHAR Source[8]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]

  v6 = 0;
  *(_OWORD *)Source = 0LL;
  SerialNumber = DisplayID_GetSerialNumber((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  if ( SerialNumber < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 329;
    return (unsigned int)SerialNumber;
  }
  SerialNumber = RtlAppendUnicodeToString(a2, Source);
  if ( SerialNumber < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 331;
    return (unsigned int)SerialNumber;
  }
  return 0LL;
}
