/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140CCD4A0
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140CCD8F8 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407BE7F0 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140E61D48 = 0LL;
  qword_140E61D58 = 0xFFFFFFFFLL;
  xmmword_140E621A0 = 0LL;
  HIDWORD(xmmword_140E61D48) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140E621A0) = -1;
  xmmword_140E61D28 = 0LL;
  qword_140E621B0 = 0LL;
  xmmword_140E61D38 = 0LL;
  xmmword_140E62180 = 0LL;
  xmmword_140E62190 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140E621F0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140E61D10, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140E61D00, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140E61D28 = word_140E621F0;
          *((_QWORD *)&xmmword_140E61D28 + 1) = word_140E61D00;
          HIDWORD(xmmword_140E61D48) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140E61D58) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140E62180 = word_140E621F0;
          *((_QWORD *)&xmmword_140E62180 + 1) = word_140E61D10;
          HIDWORD(xmmword_140E621A0) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
