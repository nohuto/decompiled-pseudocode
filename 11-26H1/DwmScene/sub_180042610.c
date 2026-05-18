/*
 * XREFs of sub_180042610 @ 0x180042610
 * Callers:
 *     sub_180042580 @ 0x180042580 (sub_180042580.c)
 *     sub_180042664 @ 0x180042664 (sub_180042664.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180042610(__int64 *a1, _QWORD *a2, _WORD *a3)
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
    if ( *((_WORD *)v4 + 14) >= *a3 )
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
