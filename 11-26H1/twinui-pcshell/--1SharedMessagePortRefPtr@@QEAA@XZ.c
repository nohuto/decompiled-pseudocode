/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1802B97DC
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$14 @ 0x1806DE346 (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$14.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1802B97F4 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
