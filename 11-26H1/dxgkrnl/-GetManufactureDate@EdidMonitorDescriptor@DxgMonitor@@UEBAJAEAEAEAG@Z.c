/*
 * XREFs of ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1403EAB90
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x140042F74 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetManufactureDate(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  const unsigned __int8 *v4; // rax
  int IsEDIDBaseBlock; // ebx
  const unsigned __int8 *v7; // r10
  unsigned __int16 *v8; // r11

  if ( *((_DWORD *)this + 4) )
  {
    v4 = (const unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      while ( 1 )
      {
        v4 = *(const unsigned __int8 **)v4;
        if ( !v4 )
          break;
        if ( *((_DWORD *)v4 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v4 + 24, (bool)a2);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 726;
            MonitorLogBadEDID(IsEDIDBaseBlock);
            goto LABEL_4;
          }
          IsEDIDBaseBlock = EDIDV1_ObtainMonitorManufactureDate(v7, a2, v8);
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 386;
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
  WdLogGlobalForLineNumber = 384;
  return (unsigned int)IsEDIDBaseBlock;
}
