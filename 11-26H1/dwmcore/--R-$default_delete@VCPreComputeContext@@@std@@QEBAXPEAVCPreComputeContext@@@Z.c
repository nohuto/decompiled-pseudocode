/*
 * XREFs of ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801D0298
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180218990 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CPreComputeContext>::operator()(__int64 a1, CPreComputeContext *a2)
{
  if ( a2 )
  {
    CPreComputeContext::~CPreComputeContext(a2);
    operator delete(a2, 0x608uLL);
  }
}
