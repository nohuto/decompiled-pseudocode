/*
 * XREFs of ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800AE200
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180218990 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>(CPreComputeContext **a1)
{
  CPreComputeContext *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CPreComputeContext::~CPreComputeContext(*a1);
    operator delete(v1, 0x608uLL);
  }
}
