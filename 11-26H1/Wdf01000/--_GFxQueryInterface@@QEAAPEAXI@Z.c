/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140074614
 * Callers:
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x140074560 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1400766F0 (imp_WdfDeviceAddQueryInterface.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x14007463C (--1FxQueryInterface@@QEAA@XZ.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  FxQueryInterface::~FxQueryInterface(this);
  FxStump::operator delete(this);
  return this;
}
