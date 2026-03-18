/*
 * XREFs of HalpIommuInitInterrupts @ 0x140BEBBD8
 * Callers:
 *     HalpIommuInitSystem @ 0x140BEB6E0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpInterruptSetIdtEntry @ 0x140594700 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpIommuInitInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !HalpHvIommu )
    HalpInterruptSetIdtEntry(
      0xCEu,
      (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpIommuInterruptRoutine,
      12,
      a4,
      -1LL);
  return 0LL;
}
