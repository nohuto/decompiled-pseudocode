/*
 * XREFs of scan_tree @ 0x180123F28
 * Callers:
 *     _tr_flush_block @ 0x1801569B4 (_tr_flush_block.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall scan_tree(_WORD *a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r10d
  int v5; // edi
  int v6; // r9d
  unsigned __int16 *v7; // rsi
  __int64 v8; // rbp
  int v9; // r8d
  int v10; // edx
  unsigned int v11; // r11d
  int v12; // ebx
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = -1;
  v6 = 0;
  *(_WORD *)(a2 + 4LL * a3 + 6) = -1;
  if ( a3 >= 0 )
  {
    v7 = (unsigned __int16 *)(a2 + 6);
    v8 = a3 + 1LL;
    v9 = (_WORD)v4 != 0 ? 7 : 138;
    v10 = ((_WORD)v4 != 0) + 3;
    do
    {
      ++v6;
      result = v4;
      v11 = v4;
      v12 = v4;
      v4 = *v7;
      if ( v6 >= v9 || v12 != v4 )
      {
        if ( v6 >= v10 )
        {
          if ( v11 )
          {
            if ( v12 != v5 )
              ++a1[2 * result + 1402];
            ++a1[1434];
          }
          else if ( v6 > 10 )
          {
            ++a1[1438];
          }
          else
          {
            ++a1[1436];
          }
        }
        else
        {
          a1[2 * result + 1402] += v6;
        }
        v6 = 0;
        v5 = v12;
        if ( v4 )
        {
          if ( v11 == v4 )
          {
            v10 = 3;
            v9 = 6;
          }
          else
          {
            v10 = 4;
            v9 = 7;
          }
        }
        else
        {
          v10 = 3;
          v9 = 138;
        }
      }
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
