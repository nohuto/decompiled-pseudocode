/*
 * XREFs of MiInitPerfMemoryFlags @ 0x14052B958
 * Callers:
 *     MiLogSectionCreate @ 0x14086893C (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
