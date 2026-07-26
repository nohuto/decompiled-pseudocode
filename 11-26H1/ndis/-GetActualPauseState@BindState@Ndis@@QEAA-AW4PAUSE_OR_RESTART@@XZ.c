/*
 * XREFs of ?GetActualPauseState@BindState@Ndis@@QEAA?AW4PAUSE_OR_RESTART@@XZ @ 0x140138C90
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x1400988D4 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140098BD0 (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetActualPauseState(Ndis::BindState *this)
{
  return (unsigned int)this->m_actualPauseState;
}
