/*
 * XREFs of ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x18042DF40
 * Callers:
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x18042E070 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x180433D1C (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 *     __lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator()_::_1_::dtor$4 @ 0x1806EB303 (__lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801A8108 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<CCrashDetector>::~unique_ptr<CCrashDetector>(CCrashDetector **a1)
{
  CCrashDetector *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CCrashDetector::~CCrashDetector(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
