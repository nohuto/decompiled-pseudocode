/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x140870FB0
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140E360D4 = a1;
}
