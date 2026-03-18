/*
 * XREFs of vXSortAETEdges @ 0x140125D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall vXSortAETEdges(__int64 **a1)
{
  __int64 *v1; // rdx
  int v2; // r9d
  __int64 **v3; // r10
  __int64 v4; // r8
  __int64 *result; // rax

  do
  {
    v1 = *a1;
    v2 = 0;
    v3 = a1;
    v4 = **a1;
    do
    {
      if ( *(_DWORD *)(v4 + 12) < *((_DWORD *)v1 + 3) )
      {
        *v3 = (__int64 *)v4;
        v2 = 1;
        *v1 = *(_QWORD *)v4;
        *(_QWORD *)v4 = v1;
        v1 = (__int64 *)v4;
      }
      result = (__int64 *)*v1;
      v3 = (__int64 **)v1;
      v1 = result;
      v4 = *result;
    }
    while ( (__int64 **)*result != a1 );
  }
  while ( v2 );
  return result;
}
