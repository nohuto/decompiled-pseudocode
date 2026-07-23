/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1404A3414
 * Callers:
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338 (MiControlAreaExemptFromCrossPartitionCharges.c)
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
     : *(ULONG **)(stru_140E2ED08.ThreadLock
                 + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v4 == *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_DWORD *)(v3 + 56) & 0x100) == 0 || ((v2 - 1) & 0xFFFFFFFD) == 0 )
    return 2LL;
  ++LODWORD(stru_140E2ED08.CycleTime);
  return 0LL;
}
