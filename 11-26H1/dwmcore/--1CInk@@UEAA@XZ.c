/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x180245FA4
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x180246960 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x180245AE8 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ.c)
 */

void __fastcall CInk::~CInk(CInk *this)
{
  *(_QWORD *)this = &CInk::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 144);
  CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>((_QWORD *)this + 9);
  CResource::~CResource(this);
}
