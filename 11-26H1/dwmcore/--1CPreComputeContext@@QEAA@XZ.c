/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x180218990
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800AE200 (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801D0298 (--R-$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800AD0D4 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(void **this)
{
  operator delete(this[187]);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 179));
  operator delete(this[176]);
  CLightStack::~CLightStack((CLightStack *)(this + 147));
  operator delete(this[144]);
  operator delete(this[141]);
  operator delete(this[138]);
  operator delete(this[135]);
  detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::~vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>(this);
}
