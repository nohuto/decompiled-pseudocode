/*
 * XREFs of ?GetPauseReasons@BindState@Ndis@@QEBAKXZ @ 0x14014B100
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x1400988D4 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140098BD0 (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetPauseReasons(Ndis::BindState *this)
{
  return this->m_pauseReasons;
}
