/*
 * XREFs of PopFreeWakeInfo @ 0x140B47F70
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140B47F98 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
