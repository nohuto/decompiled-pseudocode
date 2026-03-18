/*
 * XREFs of _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140090498
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x1401DA42C (W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 *     _lambda_8c8d08b9506a3f83537db15fe6f72080_::operator() @ 0x1401DA828 (_lambda_8c8d08b9506a3f83537db15fe6f72080_--operator().c)
 * Callees:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140092338 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 */

__int64 lambda_f6639040149d830ab05feaa79928b51c_::operator()()
{
  _BYTE v1[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v1);
  CPTPProcessor::TraceEnvironment();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v1);
  return 0LL;
}
