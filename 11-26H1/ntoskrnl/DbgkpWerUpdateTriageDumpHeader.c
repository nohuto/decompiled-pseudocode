/*
 * XREFs of DbgkpWerUpdateTriageDumpHeader @ 0x14078F040
 * Callers:
 *     DbgkpWerWriteTriageDump @ 0x14078F248 (DbgkpWerWriteTriageDump.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

__int64 __fastcall DbgkpWerUpdateTriageDumpHeader(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned int v7; // ecx

  v1 = *(_DWORD *)(a1 + 84);
  v3 = *(_DWORD *)(a1 + 144);
  if ( !v1 )
    goto LABEL_5;
  v4 = *(_DWORD *)(a1 + 168);
  v5 = v3 + 16;
  v6 = 32LL * v4;
  if ( v6 > 0xFFFFFFFF )
  {
    DbgPrintEx(5u, 0, "DBGK: Overflow calculating total blocks. Block count %i\n", v4);
  }
  else
  {
    v7 = v5 + v6;
    if ( v7 >= v5 )
    {
      v3 = v1 + v7;
      if ( v1 + v7 >= v7 )
      {
LABEL_5:
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 4000LL) = v3;
        DbgPrintEx(5u, 3u, "DBGK: Required total aize: 0x%X\n", v3);
        return 0LL;
      }
    }
  }
  return 3221225621LL;
}
