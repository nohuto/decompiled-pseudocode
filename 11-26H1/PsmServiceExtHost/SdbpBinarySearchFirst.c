/*
 * XREFs of SdbpBinarySearchFirst @ 0x180092D38
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x180092DD8 (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpBinarySearchFirst(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  unsigned int v4; // r10d
  int v5; // r11d
  int v6; // ebx
  int v7; // eax

  v4 = 0;
  *a4 = -1;
  v5 = a2 - 1;
  v6 = 0;
  if ( (int)(a2 - 1) >= 0 )
  {
    while ( 1 )
    {
      v7 = (v5 + v6) / 2;
      if ( v7 < 0 || v7 >= a2 )
        break;
      if ( a3 == *(_QWORD *)(a1 + 12LL * v7) )
      {
        if ( !v7 || (v5 = v7 - 1, *(_QWORD *)(a1 + 12LL * v7 - 12) != a3) )
        {
          v4 = 1;
          *a4 = v7;
          return v4;
        }
      }
      else if ( a3 >= *(_QWORD *)(a1 + 12LL * v7) )
      {
        v6 = v7 + 1;
      }
      else
      {
        v5 = v7 - 1;
      }
      if ( v5 < v6 )
        return v4;
    }
  }
  return 0LL;
}
