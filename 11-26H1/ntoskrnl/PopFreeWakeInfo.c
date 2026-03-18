/*
 * XREFs of PopFreeWakeInfo @ 0x140B45F40
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140B45F68 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
