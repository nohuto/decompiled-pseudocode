/*
 * XREFs of HsaFlConfigureLeafPhysicalPfn @ 0x1405ADAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaFlConfigureLeafPhysicalPfn(unsigned __int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned __int64 *v5; // r10
  unsigned int v7; // r9d
  __int64 v8; // r11
  unsigned __int64 v9; // rcx

  v5 = a1;
  if ( (a3 & 1) == 0 )
    return 0LL;
  v7 = 0;
  if ( a4 )
  {
    v8 = a2 - (_QWORD)a1;
    do
    {
      if ( *v5 )
        break;
      ++v7;
      v9 = (a3 & 2) != 0 ? 2 : 0;
      *v5 = v9;
      *v5 = (*(unsigned __int64 *)((char *)v5 + v8) << 12) ^ (v9 ^ (*(unsigned __int64 *)((char *)v5 + v8) << 12)) & 0xFFF0000000000FFFuLL | 0x8000000000000005uLL;
      ++v5;
    }
    while ( v7 < a4 );
  }
  return v7;
}
