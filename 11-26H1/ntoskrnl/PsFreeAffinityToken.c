/*
 * XREFs of PsFreeAffinityToken @ 0x1404FAE80
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x14087A848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeAffinityToken(void *a1)
{
  ExFreePoolWithTag(a1, 0x74617350u);
}
