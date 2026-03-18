/*
 * XREFs of _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140148844
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x1401B731C (W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 *     _lambda_16edcab3270fbf033f8f809e89d81614_::operator() @ 0x1401B74A0 (_lambda_16edcab3270fbf033f8f809e89d81614_--operator().c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140148878 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 */

__int64 lambda_f6639040149d830ab05feaa79928b51c_::operator()()
{
  _BYTE v1[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v1);
  CPTPProcessor::TraceEnvironment();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v1);
  return 0LL;
}
