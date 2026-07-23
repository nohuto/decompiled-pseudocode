/*
 * XREFs of KeSizeOfKThreadExtension @ 0x1405224C4
 * Callers:
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     KeAbComputeThreadEntriesSize @ 0x1404B7230 (KeAbComputeThreadEntriesSize.c)
 */

unsigned __int64 __fastcall KeSizeOfKThreadExtension(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  _QWORD *v3; // r8

  LOBYTE(a1) = -(char)a1;
  v1 = (unsigned int)KeAbComputeThreadEntriesSize(a1, (_BYTE)a1 != 0 ? 8 : 0);
  v2 = 16LL * (unsigned __int16)KiMaximumGroups + 55;
  *v3 = 8LL;
  return (v1 + (v2 & 0xFFFFFFFFFFFFFFF8uLL) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
}
