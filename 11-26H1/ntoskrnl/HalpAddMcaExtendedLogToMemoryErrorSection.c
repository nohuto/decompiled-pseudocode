/*
 * XREFs of HalpAddMcaExtendedLogToMemoryErrorSection @ 0x14057CDC8
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14044C5C8 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     HalpAddMcaToMemoryErrorSection @ 0x14057CE44 (HalpAddMcaToMemoryErrorSection.c)
 *     HalpGetMcaExtendedLogStatusBlock @ 0x14057D1E4 (HalpGetMcaExtendedLogStatusBlock.c)
 *     HalpAddErrorEntryToPacket @ 0x14059096C (HalpAddErrorEntryToPacket.c)
 */

__int64 __fastcall HalpAddMcaExtendedLogToMemoryErrorSection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 McaExtendedLogStatusBlock; // rax
  _DWORD *v8; // rdi

  v6 = -1073741823;
  McaExtendedLogStatusBlock = HalpGetMcaExtendedLogStatusBlock();
  v8 = (_DWORD *)McaExtendedLogStatusBlock;
  if ( McaExtendedLogStatusBlock )
  {
    HalpAddErrorEntryToPacket(McaExtendedLogStatusBlock, a2, a3);
    v6 = 0;
    *v8 = 0;
  }
  else
  {
    HalpAddMcaToMemoryErrorSection(a1, a3);
  }
  return v6;
}
