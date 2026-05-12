/*
 * XREFs of sub_1400A3B84 @ 0x1400A3B84
 * Callers:
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A3B84(struct _MDL **a1, ULONG a2, void *a3, KPROCESSOR_MODE a4)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  *a1 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmProbeAndLockPages(Mdl, a4, IoWriteAccess);
  return 0LL;
}
