/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x18009F254
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18009EE40 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009F0D0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010D5E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x180140490 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rcx
  char v5; // r9
  unsigned int v6; // esi
  unsigned int i; // edx
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
    return 1;
  _InterlockedOr(v15, 0);
  v5 = 1;
  v6 = *v4;
  if ( CodePageTable.DBCSCodePage )
  {
    v9 = 0;
    v10 = 0;
    while ( v9 < v6 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(unsigned __int8 *)(v9 + v11);
      if ( *(_WORD *)(qword_1801C5028 + 2 * v12) && (v14 = v9 + 1, (unsigned int)v14 < v6) )
      {
        ++v9;
        v13 = ((char)v12 << 8) + *(unsigned __int8 *)(v14 + v11) == CodePageTable.DefaultChar;
      }
      else
      {
        v13 = (char)v12 == LOBYTE(CodePageTable.DefaultChar);
      }
      if ( v13 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v10) != CodePageTable.TransDefaultChar )
        return 0;
      ++v9;
      ++v10;
    }
  }
  else
  {
    for ( i = 0; i < v6; ++i )
    {
      if ( *(char *)(*(_QWORD *)(a1 + 8) + i) == LOBYTE(CodePageTable.DefaultChar)
        && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * i) != CodePageTable.TransDefaultChar )
      {
        return 0;
      }
    }
  }
  return v5;
}
