/*
 * XREFs of CompareMemory @ 0x1401A9B48
 * Callers:
 *     pDCIAdjClr @ 0x14013DCBC (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // r9
  char v5; // cl
  char v6; // al

  v3 = a1 - (_QWORD)a2;
  while ( a3-- )
  {
    v5 = a2[v3];
    v6 = *a2++;
    if ( v5 != v6 )
      return 0LL;
  }
  return 1LL;
}
