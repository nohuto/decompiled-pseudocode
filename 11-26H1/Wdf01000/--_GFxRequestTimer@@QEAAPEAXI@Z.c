/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x14002EF24
 * Callers:
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140026E7C (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14002E440 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1400308C0 (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this)
{
  MxTimer::~MxTimer(&this->Timer);
  FxStump::operator delete(this);
  return this;
}
