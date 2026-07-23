/*
 * XREFs of MiDoSingleFixup @ 0x1409A0920
 * Callers:
 *     MiApplyRawFixups @ 0x1409A087C (MiApplyRawFixups.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDoSingleFixup(_QWORD *a1, __int16 a2, __int64 a3)
{
  switch ( a2 )
  {
    case 10:
      if ( ((unsigned __int16)a1 & 0xFFFu) <= 0xFF8 )
        *a1 += a3;
      return 1LL;
    case 0:
      return 1LL;
    case 3:
      if ( ((unsigned __int16)a1 & 0xFFFu) <= 0xFFC )
      {
        *(_DWORD *)a1 += a3;
        return 1LL;
      }
      return 1LL;
  }
  return 0LL;
}
