/*
 * XREFs of KeInitializeGate @ 0x1404D6C58
 * Callers:
 *     PspMarkSessionDeletePending @ 0x14077A3B8 (PspMarkSessionDeletePending.c)
 *     KeRcuSynchronize @ 0x1407BA200 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x1407BB2C0 (KeSrcuSynchronize.c)
 *     MmScrubMemory @ 0x14087DFD4 (MmScrubMemory.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     KiInitializeProcessor @ 0x140BF3FD4 (KiInitializeProcessor.c)
 *     sub_140C76E10 @ 0x140C76E10 (sub_140C76E10.c)
 *     sub_140C8113C @ 0x140C8113C (sub_140C8113C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = a2;
  result = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  return result;
}
