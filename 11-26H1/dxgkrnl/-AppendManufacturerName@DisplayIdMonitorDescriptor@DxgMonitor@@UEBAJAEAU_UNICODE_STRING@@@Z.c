/*
 * XREFs of ?AppendManufacturerName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x140281390
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x14009EA34 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendManufacturerName(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS ManufacturerName; // ebx
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int16 v7; // [rsp+2Ch] [rbp-1Ch]

  *(_QWORD *)Source = 0LL;
  v6 = 0;
  v7 = 0;
  ManufacturerName = DisplayID_GetManufacturerName(
                       (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                       Source);
  if ( ManufacturerName < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 309;
    return (unsigned int)ManufacturerName;
  }
  ManufacturerName = RtlAppendUnicodeToString(a2, Source);
  if ( ManufacturerName < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 311;
    return (unsigned int)ManufacturerName;
  }
  return 0LL;
}
