/*
 * XREFs of ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1801D66A8
 * Callers:
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x18026C57C (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180284A74 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     ??1CGenericInkTipPointSource@@EEAA@XZ @ 0x180288C88 (--1CGenericInkTipPointSource@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0x10uLL);
}
