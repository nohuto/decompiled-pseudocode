/*
 * XREFs of ??1CGenericInk@@EEAA@XZ @ 0x1801A5C64
 * Callers:
 *     ??_GCGenericInk@@EEAAPEAXI@Z @ 0x1802468C0 (--_GCGenericInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18020B5F8 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x18020FA80 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  *(_QWORD *)this = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *((_QWORD *)this + 18) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 240);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 208);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>((char *)this + 152);
  CSuperWetSource::~CSuperWetSource(this);
}
