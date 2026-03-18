/*
 * XREFs of SmmGetFreeBlockFromPool @ 0x14009CDCC
 * Callers:
 *     SmmAcquireBlock @ 0x140061824 (SmmAcquireBlock.c)
 * Callees:
 *     SmmRemoveBlockFromPool @ 0x14009CF58 (SmmRemoveBlockFromPool.c)
 */

_QWORD *__fastcall SmmGetFreeBlockFromPool(_QWORD **a1, char a2, unsigned __int64 a3)
{
  _QWORD *i; // r9
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v6 = i - 2;
    v7 = i[2] & 0xFFFFFFFFFFFFFLL;
    if ( a3 >= v7 && a3 < v7 + (1LL << a2) )
    {
      SmmRemoveBlockFromPool(a1, i - 2);
      return v6;
    }
  }
  return 0LL;
}
