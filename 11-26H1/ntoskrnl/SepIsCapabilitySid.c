/*
 * XREFs of SepIsCapabilitySid @ 0x140461B10
 * Callers:
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  _KDPC *Dpc; // rdi

  Dpc = RtlpBootStatHandleLock.Timer.Dpc;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == RtlpBootStatHandleLock.Timer.Dpc->TargetInfoAsUlong
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)&RtlpBootStatHandleLock.Timer.Dpc->Number, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == LODWORD(Dpc->DpcListEntry.Next);
}
