/*
 * XREFs of ?AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403B5E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x140043430 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendFriendlyName(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  const unsigned __int8 *v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  const unsigned __int8 *v7; // rcx
  int appended; // ebx
  WCHAR Source[48]; // [rsp+20h] [rbp-78h] BYREF

  memset(Source, 0, 0x52uLL);
  v4 = 0LL;
  v5 = **((_QWORD **)this + 3);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = (const unsigned __int8 *)(v5 + 24);
  if ( v6 >= 0x80 )
    v4 = v7;
  appended = EDIDV1_ObtainDisplayConfigFriendlyName(v4, Source);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 405;
    return (unsigned int)appended;
  }
  appended = RtlAppendUnicodeToString(a2, Source);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 407;
    return (unsigned int)appended;
  }
  return 0LL;
}
