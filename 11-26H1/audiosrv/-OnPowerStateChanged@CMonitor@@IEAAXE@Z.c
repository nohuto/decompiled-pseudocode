/*
 * XREFs of ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180121BFC
 * Callers:
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180060AC0 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1800CFC30 (WPP_SF_dd.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801221D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18012253C (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::OnPowerStateChanged(CMonitor *this, unsigned __int8 a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, a2);
  }
  if ( *((_BYTE *)this + 77) )
  {
    if ( (a2 & 0xFD) != 0 )
    {
      if ( *((_DWORD *)this + 18) == 4 || *((_DWORD *)this + 18) == 2 )
        CMonitor::Start(this);
    }
    else if ( *((_DWORD *)this + 18) == 3 )
    {
      CMonitor::Stop(this);
    }
  }
}
