/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x1800D86C0
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x1800D868C (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1800D8718 (RtlpRemoveInvertedFunctionTableEntry.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rax
  __int64 v4; // rcx

  v2 = (unsigned int)(LdrpInvertedFunctionTables[0] - 1);
  if ( LdrpInvertedFunctionTables[0] != 1 )
  {
    for ( i = (_QWORD *)&xmmword_1801DF450 + 3 * v2 + 1; a2 != *i; i -= 3 )
    {
      LODWORD(v2) = v2 - 1;
      if ( !(_DWORD)v2 )
        return;
    }
    LdrProtectMrdata(0);
    RtlpRemoveInvertedFunctionTableEntry(v4, (unsigned int)v2);
    LdrProtectMrdata(1);
  }
}
