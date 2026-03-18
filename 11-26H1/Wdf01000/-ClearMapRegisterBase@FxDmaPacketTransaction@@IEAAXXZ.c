/*
 * XREFs of ?ClearMapRegisterBase@FxDmaPacketTransaction@@IEAAXXZ @ 0x140087624
 * Callers:
 *     ?ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z @ 0x140076AF0 (-ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaPacketTransaction::ClearMapRegisterBase(FxDmaPacketTransaction *this)
{
  this->m_MapRegisterBaseSet = 0;
}
