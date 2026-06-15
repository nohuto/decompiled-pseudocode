/*
 * XREFs of sub_140061328 @ 0x140061328
 * Callers:
 *     sub_140062080 @ 0x140062080 (sub_140062080.c)
 *     sub_140062200 @ 0x140062200 (sub_140062200.c)
 *     sub_140062830 @ 0x140062830 (sub_140062830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140061328(__int64 a1, unsigned int a2, int *a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v7; // r9
  __int64 i; // rdx

  *a4 = a2;
  *a3 = a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v7 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 24) )
    {
      if ( *(_DWORD *)(i + 32) == *a4 && *(_DWORD *)i == a2 )
      {
        *a5 = v7;
        return i;
      }
      v7 = i;
    }
  }
  return 0LL;
}
