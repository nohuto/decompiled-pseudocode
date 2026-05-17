/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x1800A0124
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18009FD10 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009FFA0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010DA90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x180140590 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
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
  if ( word_1801C5FDC )
  {
    v9 = 0;
    v10 = 0;
    while ( v9 < v6 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(unsigned __int8 *)(v9 + v11);
      if ( *(_WORD *)(qword_1801C6028 + 2 * v12) && (v14 = v9 + 1, (unsigned int)v14 < v6) )
      {
        ++v9;
        v13 = ((char)v12 << 8) + *(unsigned __int8 *)(v14 + v11) == word_1801C5FD4;
      }
      else
      {
        v13 = (char)v12 == (unsigned __int8)word_1801C5FD4;
      }
      if ( v13 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v10) != word_1801C5FD8 )
        return 0;
      ++v9;
      ++v10;
    }
  }
  else
  {
    for ( i = 0; i < v6; ++i )
    {
      if ( *(char *)(*(_QWORD *)(a1 + 8) + i) == (unsigned __int8)word_1801C5FD4
        && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * i) != word_1801C5FD8 )
      {
        return 0;
      }
    }
  }
  return v5;
}
