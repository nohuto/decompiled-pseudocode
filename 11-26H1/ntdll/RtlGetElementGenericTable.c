/*
 * XREFs of RtlGetElementGenericTable @ 0x1800E77A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlGetElementGenericTable(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // ebx
  _QWORD *j; // r8
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int i; // r10d

  v2 = *(_DWORD *)(a1 + 32);
  v3 = a2 + 1;
  j = *(_QWORD **)(a1 + 24);
  v6 = a2 + 1;
  if ( a2 == -1 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 36);
  if ( v3 > v7 )
    return 0LL;
  if ( v3 != v2 )
  {
    if ( v3 < v2 )
    {
      if ( v3 <= v2 >> 1 )
      {
        j = (_QWORD *)(a1 + 8);
        do
        {
          j = (_QWORD *)*j;
          --v6;
        }
        while ( v6 );
      }
      else
      {
        for ( i = v2 - v3; i; --i )
          j = (_QWORD *)j[1];
      }
    }
    else
    {
      v8 = v3 - v2;
      v9 = v7 - a2;
      if ( v3 - v2 > v9 )
      {
        for ( j = (_QWORD *)(a1 + 8); v9; --v9 )
          j = (_QWORD *)j[1];
      }
      else
      {
        for ( ; v8; --v8 )
          j = (_QWORD *)*j;
      }
    }
    *(_QWORD *)(a1 + 24) = j;
    *(_DWORD *)(a1 + 32) = v3;
  }
  return j + 2;
}
