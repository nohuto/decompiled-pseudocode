/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801D1E7C
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$7 @ 0x1801DD7F4 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801D2070 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
