/*
 * XREFs of isspace @ 0x1405390B0
 * Callers:
 *     ?ScTrimString@@YAXPEAD@Z @ 0x14071F838 (-ScTrimString@@YAXPEAD@Z.c)
 *     CmpGetToken @ 0x140CBE05C (CmpGetToken.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 8;
}
