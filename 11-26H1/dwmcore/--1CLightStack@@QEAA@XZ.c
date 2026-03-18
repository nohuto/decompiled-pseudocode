/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x1800AD0D4
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180218990 (--1CPreComputeContext@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1800AD3DC (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800F3330 (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CPolygon>(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 104);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 8);
}
