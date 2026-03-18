/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14003C358
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003AF3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x14006F010 (imp_WdfDeviceCreateDeviceInterface.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxDeviceInterface@@QEAA@XZ @ 0x14003C380 (--1FxDeviceInterface@@QEAA@XZ.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  FxDeviceInterface::~FxDeviceInterface(this);
  FxStump::operator delete(this);
  return this;
}
