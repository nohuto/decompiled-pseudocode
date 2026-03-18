/*
 * XREFs of ??1DispBrokerClient@@QEAA@XZ @ 0x1400820BC
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x140201C2C (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14002EF2C (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 */

void __fastcall DispBrokerClient::~DispBrokerClient(DispBrokerClientHandle **this)
{
  DispBrokerClient::DisableDisplayBroker((DispBrokerClient *)this);
  DispBrokerClientReference::Assign(this + 6, 0LL);
}
