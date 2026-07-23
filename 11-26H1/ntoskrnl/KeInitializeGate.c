/*
 * XREFs of KeInitializeGate @ 0x1404D0428
 * Callers:
 *     PspMarkSessionDeletePending @ 0x14077D2E8 (PspMarkSessionDeletePending.c)
 *     KeRcuSynchronize @ 0x1407BD260 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x1407BE320 (KeSrcuSynchronize.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     KiInitializeProcessor @ 0x140BF9FD4 (KiInitializeProcessor.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
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
