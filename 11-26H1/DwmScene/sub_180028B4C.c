/*
 * XREFs of sub_180028B4C @ 0x180028B4C
 * Callers:
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029154 @ 0x180029154 (sub_180029154.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180028B4C(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_DWORD *)v4 + 7) >= *a3 )
    {
      a2[2] = v4;
      v5 = 1;
    }
    else
    {
      v4 += 2;
      v5 = 0;
    }
    *((_DWORD *)a2 + 2) = v5;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
