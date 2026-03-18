/*
 * XREFs of ??$make_unique@VCMILMatrix@@$$V$0A@@std@@YA?AV?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@0@XZ @ 0x1800D1E70
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800D1D84 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::make_unique<CMILMatrix,,0>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x44uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v3[16] = 0;
  *a1 = v3;
  return a1;
}
