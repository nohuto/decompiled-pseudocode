/*
 * XREFs of DbgkpLkmdSnapPendingIrps @ 0x14078E420
 * Callers:
 *     DbgkpLkmdSnapThreadApc @ 0x14078E560 (DbgkpLkmdSnapThreadApc.c)
 * Callees:
 *     DbgkpLkmdSnapData @ 0x1405B6580 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapObject @ 0x1405B6888 (DbgkpLkmdSnapObject.c)
 */

__int64 __fastcall DbgkpLkmdSnapPendingIrps(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // r14
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  _WORD *v9; // rdx
  _WORD *v10; // rdx
  _WORD *v11; // rdx

  v3 = (__int64 *)(a2 + 1344);
  v5 = *(__int64 **)(a2 + 1344);
  if ( v5 == (__int64 *)(a2 + 1344) )
  {
    a3[1] |= 8u;
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      ++a3[2];
      result = DbgkpLkmdSnapData(a1, (int)v5, 16);
      if ( (int)result < 0 )
        break;
      if ( *((_WORD *)v5 - 16) != 6 )
      {
        result = 3221225793LL;
        break;
      }
      result = DbgkpLkmdSnapData(a1, (int)v5 - 32, *((unsigned __int16 *)v5 - 15));
      if ( (int)result < 0 )
        break;
      ++a3[3];
      if ( *((_BYTE *)v5 + 35) <= *((_BYTE *)v5 + 34) )
      {
        v8 = v5[19];
        result = DbgkpLkmdSnapData(a1, v8, 72);
        if ( (_DWORD)result != -1073741819 )
        {
          if ( (_DWORD)result == -1073741670 )
            break;
          v9 = *(_WORD **)(v8 + 48);
          if ( v9 )
            DbgkpLkmdSnapObject(a1, v9, 5);
          v10 = *(_WORD **)(v8 + 40);
          if ( v10 )
          {
            DbgkpLkmdSnapObject(a1, v10, 3);
            v11 = *(_WORD **)(*(_QWORD *)(v8 + 40) + 8LL);
            if ( v11 )
              DbgkpLkmdSnapObject(a1, v11, 4);
          }
        }
      }
      v5 = (__int64 *)*v5;
      if ( v5 == v3 )
      {
        a3[1] |= 8u;
        result = 0LL;
        break;
      }
    }
    *a3 = result;
  }
  return result;
}
