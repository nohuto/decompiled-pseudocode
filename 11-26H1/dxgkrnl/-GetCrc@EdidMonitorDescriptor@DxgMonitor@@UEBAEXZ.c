/*
 * XREFs of ?GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x140280C60
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

unsigned __int8 __fastcall DxgMonitor::EdidMonitorDescriptor::GetCrc(DxgMonitor::EdidMonitorDescriptor *this, bool a2)
{
  const unsigned __int8 *v2; // rax
  int IsEDIDBaseBlock; // ebx
  __int64 v5; // r10

  if ( *((_DWORD *)this + 4) )
  {
    v2 = (const unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      while ( 1 )
      {
        v2 = *(const unsigned __int8 **)v2;
        if ( !v2 )
          break;
        if ( *((_DWORD *)v2 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v2 + 24, a2);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 726;
            MonitorLogBadEDID(IsEDIDBaseBlock);
            return 0;
          }
          return *(_BYTE *)(v5 + 127);
        }
      }
    }
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 713;
  return 0;
}
