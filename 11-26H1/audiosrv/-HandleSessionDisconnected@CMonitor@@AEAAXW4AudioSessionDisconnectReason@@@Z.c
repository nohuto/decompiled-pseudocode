/*
 * XREFs of ?HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z @ 0x18012119C
 * Callers:
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180120FA0 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18012253C (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::HandleSessionDisconnected(CMonitor *this, enum AudioSessionDisconnectReason a2)
{
  _UNKNOWN **v3; // rcx
  bool v4; // zf

  v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
      v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x800000) != 0 && *((_BYTE *)v3 + 25) >= 2u )
      WPP_SF_((__int64)v3[2], 0x32u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
  }
  v4 = *((_DWORD *)this + 18) == 3;
  *((_BYTE *)this + 76) = 1;
  if ( v4 )
    CMonitor::Stop(this);
  CMonitor::Terminate(this, 1, 0LL);
}
