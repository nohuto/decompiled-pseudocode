/*
 * XREFs of MiInitializeDriverPatchState @ 0x140B3E6F8
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406FAF50 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiInitializeDriverPatchState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)(a2 + 8), 0, 0x60uLL);
  *(_QWORD *)a2 = a1;
  result = (*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
