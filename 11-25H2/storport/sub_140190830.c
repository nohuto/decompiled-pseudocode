/*
 * XREFs of sub_140190830 @ 0x140190830
 * Callers:
 *     sub_140193A88 @ 0x140193A88 (sub_140193A88.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140190830(__int64 a1, _DWORD *a2, int *a3)
{
  unsigned int v3; // esi
  int v8; // edx
  __int64 v9; // r8

  v3 = *a3;
  if ( (unsigned int)*a3 >= 8 )
  {
    memset_0(a2, 0, (unsigned int)*a3);
    v8 = 16;
    if ( v3 >= 0x10 )
    {
      v9 = *(_QWORD *)(a1 + 400);
      a2[2] = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) == 0 )
        *((_WORD *)a2 + 6) = 257;
      *((_WORD *)a2 + 7) = *(_WORD *)(a1 + 1092);
      if ( v3 >= 0x18 )
      {
        *a2 = 24;
        v8 = 24;
        a2[1] = 24;
        *((_BYTE *)a2 + 16) = (*(_DWORD *)(v9 + 184) & 0x80) != 0;
      }
      else
      {
        *a2 = 16;
        a2[1] = 16;
      }
      *a3 = v8;
    }
    else
    {
      *a3 = 8;
      *a2 = 24;
      a2[1] = 24;
    }
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 3221225507LL;
  }
}
