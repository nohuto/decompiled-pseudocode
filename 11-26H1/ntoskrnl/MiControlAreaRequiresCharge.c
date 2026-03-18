/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1404A9D84
 * Callers:
 *     MiReferenceControlArea @ 0x14046FD70 (MiReferenceControlArea.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiInitializeImageVad @ 0x1409CDD4C (MiInitializeImageVad.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14036E598 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // r9
  ULONG *v4; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1) )
    return 1LL;
  v4 = v1 > 1
     ? &MiSystemPartition
     : *(ULONG **)(stru_140E2EB88.ThreadLock
                 + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v4 == *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_DWORD *)(v3 + 56) & 0x100) == 0 || ((v2 - 1) & 0xFFFFFFFD) == 0 )
    return 2LL;
  ++LODWORD(stru_140E2EB88.CycleTime);
  return 0LL;
}
