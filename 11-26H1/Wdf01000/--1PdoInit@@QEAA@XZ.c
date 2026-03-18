/*
 * XREFs of ??1PdoInit@@QEAA@XZ @ 0x14003A8E0
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14003A720 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x14003B36C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall PdoInit::~PdoInit(PdoInit *this)
{
  FxCollectionInternal::Clear(&this->CompatibleIDs);
  FxCollectionInternal::Clear(&this->HardwareIDs);
}
