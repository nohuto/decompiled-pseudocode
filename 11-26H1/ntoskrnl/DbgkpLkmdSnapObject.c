/*
 * XREFs of DbgkpLkmdSnapObject @ 0x1405B6888
 * Callers:
 *     DbgkpLkmdSnapPendingIrps @ 0x14078E420 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x1405B65AC (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapObject(__int64 a1, _WORD *a2, int a3)
{
  _WORD *v3; // rdi
  _WORD *v5; // rsi
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx

  v3 = 0LL;
  v5 = 0LL;
  if ( a3 == 3 )
  {
    if ( *a2 == 3 )
      goto LABEL_10;
    return 3221225477LL;
  }
  if ( a3 == 4 )
  {
    v5 = a2;
    if ( *a2 == 4 )
      goto LABEL_10;
    return 3221225477LL;
  }
  if ( a3 != 5 )
    return 3221225477LL;
  v3 = a2;
  if ( *a2 != 5 )
    return 3221225477LL;
LABEL_10:
  result = DbgkpLkmdSnapDataEx(a1, (__int64)a2);
  if ( (int)result < 0 )
    return result;
  v8 = a3 - 4;
  if ( v8 )
  {
    if ( v8 != 1 )
      return result;
    v9 = *((_QWORD *)v3 + 12);
  }
  else
  {
    v9 = *((_QWORD *)v5 + 8);
  }
  return DbgkpLkmdSnapDataEx(a1, v9);
}
