/*
 * XREFs of ??R?$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z @ 0x180259A70
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802599F0 (--1-$out_param_t@V-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleSc.c)
 *     ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x180259A20 (--1-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleScheduler@@@std@@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x18025C824 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CComputeScribbleScheduler>::operator()(__int64 a1, CComputeScribbleScheduler *a2)
{
  if ( a2 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(a2);
    operator delete(a2);
  }
}
