/*
 * XREFs of MiInitPerfMemoryFlags @ 0x14052DE78
 * Callers:
 *     MiLogSectionCreate @ 0x14086ED1C (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
