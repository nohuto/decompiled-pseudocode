/*
 * XREFs of RaidBuildMdlAndLockPagesForXrb @ 0x140042A54
 * Callers:
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidBuildMdlAndLockPagesForXrb(__int64 a1, void *a2, ULONG a3)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  *(_QWORD *)(a1 + 104) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  *(_BYTE *)(a1 + 16) |= 1u;
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  return 0LL;
}
