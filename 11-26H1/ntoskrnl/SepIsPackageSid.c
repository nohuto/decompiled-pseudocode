/*
 * XREFs of SepIsPackageSid @ 0x1404591B0
 * Callers:
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  struct _LIST_ENTRY *Blink; // rdi

  Blink = RtlpBootStatHandleLock.Timer.TimerListEntry.Blink;
  return *(_BYTE *)(a1 + 1) >= 2u
      && (struct _LIST_ENTRY *)*(_BYTE *)a1 == RtlpBootStatHandleLock.Timer.TimerListEntry.Blink->Flink
      && RtlCompareMemory(
           (const void *)(a1 + 2),
           (char *)&RtlpBootStatHandleLock.Timer.TimerListEntry.Blink->Flink + 2,
           6uLL) == 6
      && *(_DWORD *)(a1 + 8) == LODWORD(Blink->Blink);
}
