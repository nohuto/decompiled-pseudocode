/*
 * XREFs of ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x180043358
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x1800433FC (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z @ 0x180043970 (--R-$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CDriverListener>::~unique_ptr<CDriverListener>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CDriverListener>::operator()();
  return result;
}
