/*
 * XREFs of MiCreatePteCopyList @ 0x1404481D8
 * Callers:
 *     MiGetPteMappingSet @ 0x140448100 (MiGetPteMappingSet.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax

  *(_WORD *)(a2 + 8) = 17;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  v6 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, a1, a3, a4);
  *(_QWORD *)(a2 + 16) = v6;
  result = v6 != 0 ? a1 : 0;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
