/*
 * XREFs of RtlInitCodePageTable @ 0x1800DD1A0
 * Callers:
 *     RtlpInitCodePageTables @ 0x1800DD038 (RtlpInitCodePageTables.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  unsigned __int16 *v3; // rcx
  __int64 v4; // r8
  unsigned __int16 v5; // r11
  USHORT *v6; // r10
  __int64 v7; // r8
  unsigned __int16 v8; // ax

  v3 = 0LL;
  if ( TableBase && TableBase[1] != 0xFDE9 )
  {
    v4 = *TableBase;
    v5 = TableBase[v4] + v4;
    v6 = &TableBase[v4];
    CodePageTable->MaximumCharacterSize = TableBase[2];
    CodePageTable->DefaultChar = TableBase[3];
    CodePageTable->UniDefaultChar = TableBase[4];
    CodePageTable->TransDefaultChar = TableBase[5];
    CodePageTable->TransUniDefaultChar = TableBase[6];
    *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
    *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
    CodePageTable->MultiByteTable = &TableBase[v4 + 1];
    v7 = v6[257] != 0 ? 514LL : 2LL;
    if ( *(USHORT *)((char *)v6 + v7 + 514) )
    {
      v8 = 1;
      v3 = (USHORT *)((char *)v6 + v7 + 516);
    }
    else
    {
      v8 = 0;
    }
    CodePageTable->DBCSOffsets = v3;
    CodePageTable->DBCSCodePage = v8;
    CodePageTable->WideCharTable = &TableBase[v5 + 1];
    CodePageTable->CodePage = TableBase[1];
  }
  else
  {
    *CodePageTable = (_CPTABLEINFO)Utf8TableInfo;
  }
}
