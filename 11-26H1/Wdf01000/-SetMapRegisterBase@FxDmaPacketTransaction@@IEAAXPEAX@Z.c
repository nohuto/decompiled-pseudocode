/*
 * XREFs of ?SetMapRegisterBase@FxDmaPacketTransaction@@IEAAXPEAX@Z @ 0x140087CA0
 * Callers:
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x14006FAA0 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaPacketTransaction::SetMapRegisterBase(FxDmaPacketTransaction *this, void *Value)
{
  this->m_MapRegisterBase = Value;
  this->m_MapRegisterBaseSet = 1;
}
