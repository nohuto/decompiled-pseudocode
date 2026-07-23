/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140CD3600
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140CD3A58 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407C1850 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140E61ED0 = 0LL;
  qword_140E61EE0 = 0xFFFFFFFFLL;
  xmmword_140E62330 = 0LL;
  HIDWORD(xmmword_140E61ED0) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140E62330) = -1;
  xmmword_140E61EB0 = 0LL;
  qword_140E62340 = 0LL;
  xmmword_140E61EC0 = 0LL;
  xmmword_140E62310 = 0LL;
  xmmword_140E62320 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140E62380, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140E61E98, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140E61E88, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140E61EB0 = word_140E62380;
          *((_QWORD *)&xmmword_140E61EB0 + 1) = word_140E61E88;
          HIDWORD(xmmword_140E61ED0) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140E61EE0) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140E62310 = word_140E62380;
          *((_QWORD *)&xmmword_140E62310 + 1) = word_140E61E98;
          HIDWORD(xmmword_140E62330) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
