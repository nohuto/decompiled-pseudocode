/*
 * XREFs of ?IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z @ 0x14034A470
 * Callers:
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x14020F71C (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidDESIGNVECTOR(char *a1, unsigned int a2, int a3)
{
  bool result; // al
  __int64 v4; // r9
  char *v5; // rdx
  __int64 v6; // rax

  result = 1;
  if ( a3 )
  {
    if ( a3 <= 0 )
      return 0;
    if ( a3 >= a2 )
      return 0;
    v4 = a2 - a3;
    v5 = &a1[a3];
    if ( ((unsigned __int8)v5 & 3) != 0 )
      return 0;
    if ( v5 + 8 > &v5[v4] )
      return 0;
    v6 = *((unsigned int *)v5 + 1);
    if ( (unsigned int)v6 > 0x10 || 4 * v6 + 8 >= (unsigned __int64)(unsigned int)v4 )
      return 0;
  }
  return result;
}
