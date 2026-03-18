/*
 * XREFs of ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x18009EDE8
 * Callers:
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18009ED80 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CoordMap@@QEAA@XZ @ 0x18009ED48 (--1CoordMap@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CNineGridDrawListBrush *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  CoordMap::~CoordMap((CNineGridDrawListBrush *)((char *)this + 112));
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 9);
  if ( v2 )
    (**v2)(v2, 1LL);
}
