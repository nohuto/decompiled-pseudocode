/*
 * XREFs of ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x1800DA6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 */

void __fastcall CAudioSrv::ServiceStart(CAudioSrv *this)
{
  HANDLE v1; // rax

  v1 = g_hCanAcceptMMCClientEvent;
  if ( g_hCanAcceptMMCClientEvent )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
      v1 = g_hCanAcceptMMCClientEvent;
    }
    SetEvent(v1);
  }
}
