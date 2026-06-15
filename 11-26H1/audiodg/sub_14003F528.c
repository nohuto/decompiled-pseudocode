/*
 * XREFs of sub_14003F528 @ 0x14003F528
 * Callers:
 *     sub_14004648C @ 0x14004648C (sub_14004648C.c)
 *     sub_14005BC54 @ 0x14005BC54 (sub_14005BC54.c)
 *     sub_14005C25C @ 0x14005C25C (sub_14005C25C.c)
 *     sub_14005C3DC @ 0x14005C3DC (sub_14005C3DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003F528(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v7; // r8
  __int64 i; // rdx

  *a4 = a2;
  *a3 = (unsigned int)a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v7 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == *a4 && *(_QWORD *)i == a2 )
      {
        *a5 = v7;
        return i;
      }
      v7 = i;
    }
  }
  return 0LL;
}
