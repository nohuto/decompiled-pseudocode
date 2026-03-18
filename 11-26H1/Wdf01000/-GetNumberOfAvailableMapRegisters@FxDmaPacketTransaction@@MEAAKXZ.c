/*
 * XREFs of ?GetNumberOfAvailableMapRegisters@FxDmaPacketTransaction@@MEAAKXZ @ 0x140087780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaPacketTransaction::GetNumberOfAvailableMapRegisters(FxDmaPacketTransaction *this)
{
  __int64 result; // rax

  result = this->m_MapRegistersReserved;
  if ( !(_DWORD)result )
    return this->m_AdapterInfo->NumberOfMapRegisters;
  return result;
}
