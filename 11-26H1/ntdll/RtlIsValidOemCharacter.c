/*
 * XREFs of RtlIsValidOemCharacter @ 0x180147618
 * Callers:
 *     GetNextWchar @ 0x180120A34 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 */

char RtlIsValidOemCharacter()
{
  bool IsUtf8Process; // al
  _WORD *v1; // rcx
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // r11
  _WORD *WideCharTable; // rbx
  __int64 v6; // rcx
  __int16 v7; // cx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  IsUtf8Process = RtlpIsUtf8Process();
  _InterlockedOr(v11, 0);
  if ( IsUtf8Process )
  {
    if ( *v1 <= 0x7Fu )
    {
      v2 = NLS_UPCASE(qword_1801C5038, (unsigned __int16)*v1);
LABEL_4:
      *v3 = v2;
      return 1;
    }
  }
  else
  {
    WideCharTable = CodePageTable.WideCharTable;
    v6 = (unsigned __int16)*v1;
    if ( CodePageTable.DBCSCodePage )
    {
      v8 = *((unsigned __int16 *)CodePageTable.WideCharTable + v6);
      v9 = (unsigned __int64)v8 >> 8;
      if ( *(_WORD *)(qword_1801C5028 + 2 * v9) )
        v10 = CodePageTable.DBCSOffsets[*(unsigned __int16 *)(qword_1801C5028 + 2 * v9)
                                      + (unsigned __int64)(unsigned __int8)v8];
      else
        v10 = CodePageTable.MultiByteTable[(unsigned __int8)v8];
      v2 = NLS_UPCASE(qword_1801C5038, v10);
      v7 = WideCharTable[v2];
    }
    else
    {
      v2 = NLS_UPCASE(
             qword_1801C5038,
             CodePageTable.MultiByteTable[*((unsigned __int8 *)CodePageTable.WideCharTable + v6)]);
      v7 = *((char *)WideCharTable + v2);
    }
    if ( v7 != CodePageTable.DefaultChar )
      goto LABEL_4;
  }
  return 0;
}
