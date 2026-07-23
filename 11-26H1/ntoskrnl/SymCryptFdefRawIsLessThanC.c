/*
 * XREFs of SymCryptFdefRawIsLessThanC @ 0x140568030
 * Callers:
 *     SymCryptFdefIntIsLessThan @ 0x140567958 (SymCryptFdefIntIsLessThan.c)
 *     SymCryptFdefRawIsLessThan @ 0x140568018 (SymCryptFdefRawIsLessThan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawIsLessThanC(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  v3 = 0LL;
  v4 = 16 * a3;
  if ( v4 )
  {
    v5 = a1 - (_QWORD)a2;
    v6 = v4;
    do
    {
      v7 = *(unsigned int *)((char *)a2 + v5) - v3 - *a2;
      ++a2;
      v3 = BYTE4(v7) & 1;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)-(int)v3;
}
