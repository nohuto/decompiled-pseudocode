/*
 * XREFs of SymCryptMlDsaPolyElementPower2Round @ 0x1405727BC
 * Callers:
 *     SymCryptMlDsaVectorPower2Round @ 0x140573944 (SymCryptMlDsaVectorPower2Round.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementPower2Round(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned int *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v3 = a1 - (_QWORD)a2;
  v4 = a2;
  v5 = a3 - (_QWORD)a2;
  v6 = 256LL;
  do
  {
    v7 = *(unsigned int *)((char *)v4 + v3) & 0x1FFF;
    v8 = ((unsigned __int64)(4096 - v7) >> 32) & 0x2000;
    result = (*(unsigned int *)((char *)v4 + v3) & 0x1FFF) - (unsigned int)v8;
    *v4 = (*(unsigned int *)((char *)v4 + v3) - (unsigned int)result) >> 13;
    *(unsigned int *)((char *)v4++ + v5) = result + (((v7 - v8) >> 32) & 0x7FE001);
    --v6;
  }
  while ( v6 );
  return result;
}
