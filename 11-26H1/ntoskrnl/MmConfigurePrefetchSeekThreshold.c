/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x14086ABD0
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140E35F54 = a1;
}
