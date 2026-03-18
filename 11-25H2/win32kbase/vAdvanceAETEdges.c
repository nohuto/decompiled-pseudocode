/*
 * XREFs of vAdvanceAETEdges @ 0x1400D54F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall vAdvanceAETEdges(__int64 **a1)
{
  int v1; // r9d
  __int64 **v3; // rdx
  _QWORD *result; // rax
  int v6; // r11d
  __int64 *v7; // r10
  bool v8; // sf
  __int64 *v9; // r10
  int v10; // ecx

  v1 = *((_DWORD *)a1 + 4);
  v3 = (__int64 **)*a1;
  result = a1;
  do
  {
    if ( (*((_DWORD *)v3 + 2))-- == 1 )
    {
      v3 = (__int64 **)*v3;
      --v1;
      *result = v3;
    }
    else
    {
      v6 = *((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 12);
      v7 = v3[4];
      v8 = (__int64)v7 + (__int64)v3[3] < 0;
      v9 = (__int64 *)((char *)v7 + (_QWORD)v3[3]);
      v3[3] = v9;
      *((_DWORD *)v3 + 3) = v6;
      if ( !v8 )
      {
        v10 = *((_DWORD *)v3 + 13);
        v3[3] = (__int64 *)((char *)v9 - (char *)v3[5]);
        *((_DWORD *)v3 + 3) = v6 + v10;
      }
      result = v3;
      v3 = (__int64 **)*v3;
    }
  }
  while ( v3 != a1 );
  *((_DWORD *)a1 + 4) = v1;
  return result;
}
