/*
 * XREFs of ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403EAF60
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14004304C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  const unsigned __int8 *v3; // rax
  int IsEDIDBaseBlock; // ebx
  const unsigned __int8 *v6; // r10
  WCHAR Source[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]

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
          v8 = 0LL;
          v9 = 0;
          *(_OWORD *)Source = 0LL;
          IsEDIDBaseBlock = EDIDV1_ObtainMonitorSerialNumber(v6, Source);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 374;
            return (unsigned int)IsEDIDBaseBlock;
          }
          IsEDIDBaseBlock = RtlAppendUnicodeToString(a2, Source);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 376;
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
  WdLogGlobalForLineNumber = 371;
  return (unsigned int)IsEDIDBaseBlock;
}
