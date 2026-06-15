/*
 * XREFs of sub_14006139C @ 0x14006139C
 * Callers:
 *     sub_140061EC0 @ 0x140061EC0 (sub_140061EC0.c)
 *     sub_1400628DC @ 0x1400628DC (sub_1400628DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006139C(__int64 a1, unsigned int *a2, int *a3, unsigned int *a4, _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 i; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v8 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 24) )
    {
      if ( *(_DWORD *)(i + 32) == *a4 && *(_QWORD *)i == *(_QWORD *)a2 )
      {
        *a5 = v8;
        return i;
      }
      v8 = i;
    }
  }
  return 0LL;
}
