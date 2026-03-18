/*
 * XREFs of ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403EADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x140042918 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  const unsigned __int8 *v3; // rax
  int IsEDIDBaseBlock; // ebx
  const unsigned __int8 *v6; // r10
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+28h] [rbp-20h]

  if ( *((_DWORD *)this + 4) )
  {
    v3 = (const unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      while ( 1 )
      {
        v3 = *(const unsigned __int8 **)v3;
        if ( !v3 )
          break;
        if ( *((_DWORD *)v3 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v3 + 24, (bool)a2);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 726;
            MonitorLogBadEDID(IsEDIDBaseBlock);
            goto LABEL_4;
          }
          *(_QWORD *)Source = 0LL;
          v8 = 0;
          IsEDIDBaseBlock = EDIDV1_ObtainMonitorProductCodeID(v6, Source);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 361;
            return (unsigned int)IsEDIDBaseBlock;
          }
          IsEDIDBaseBlock = RtlAppendUnicodeToString(a2, Source);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 363;
            return (unsigned int)IsEDIDBaseBlock;
          }
          return 0LL;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 713;
  IsEDIDBaseBlock = -1071841279;
LABEL_4:
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 358;
  return (unsigned int)IsEDIDBaseBlock;
}
