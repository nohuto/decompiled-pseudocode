/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x18002D120
 * Callers:
 *     ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x1801A82E0 (--_ECGlobalDrawingContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ @ 0x1800922D4 (--1-$unique_ptr@VCVisualTreePath@@U-$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800AD0D4 (--1CLightStack@@QEAA@XZ.c)
 *     ??1ClipPlaneIterator@@QEAA@XZ @ 0x1800AD17C (--1ClipPlaneIterator@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800F2A20 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180183278 (--1CScopedClipStack@@QEAA@XZ.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(void **this)
{
  CD3DDevice *v2; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 999));
  std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>(this + 996);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)(this + 430));
  ClipPlaneIterator::~ClipPlaneIterator((ClipPlaneIterator *)(this + 413));
  operator delete(this[409]);
  operator delete(this[404]);
  operator delete(this[397]);
  operator delete(this[394]);
  CScopedClipStack::~CScopedClipStack((CScopedClipStack *)(this + 92));
  operator delete(this[89]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 81);
  CLightStack::~CLightStack((CLightStack *)(this + 52));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 44);
  operator delete(this[41]);
  operator delete(this[38]);
  operator delete(this[35]);
  operator delete(this[32]);
  v2 = (CD3DDevice *)this[4];
  if ( v2 )
    CD3DDevice::Release(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(this + 3);
}
