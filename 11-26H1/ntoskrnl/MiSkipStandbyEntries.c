/*
 * XREFs of MiSkipStandbyEntries @ 0x1402AD440
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiSkipStandbyEntries(__int64 a1, ULONG_PTR a2, int a3, int a4, unsigned __int64 a5)
{
  int v5; // edi
  ULONG_PTR v8; // r10
  int v9; // esi
  ULONG_PTR v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r10

  v5 = 0;
  v8 = a2;
  if ( a2 != 0x3FFFFFFFFFLL )
  {
    while ( 1 )
    {
      v9 = v5;
      v10 = v8;
      v11 = 48 * v8 - 0x220000000000LL;
      v12 = v11;
      if ( a4 )
        break;
      while ( 1 )
      {
        if ( v8 >= qword_140E34930 && v8 < qword_140E34930 + 2048 && a3 != 2 )
        {
          v13 = *(_QWORD *)(v12 + 16);
          if ( qword_140E2D8C0 && (v13 & 0x10) == 0 )
            v13 &= qword_140E2D8C8;
          v8 = (v13 >> 12) & 0xFFFFFFFFFFLL;
          if ( v8 < qword_140E34930 || v8 >= qword_140E34930 + 2048 )
            v12 = 0LL;
        }
        if ( v10 < qword_140E34930 || v10 >= qword_140E34930 + 2048 )
        {
          if ( (*(_DWORD *)(v11 + 32) & 0x8000000) == 0 || (unsigned int)MiGetPfnSlabType(v11) != 9 )
            goto LABEL_13;
          a3 = 2;
        }
        else
        {
          a3 = 1;
        }
LABEL_14:
        if ( v12 )
        {
          if ( a4 )
          {
            if ( a4 == 1 )
              v8 = *(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFLL;
            else
              v8 = (*(_QWORD *)(v12 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v12 + 36) & 0x1FFFFF) << 19);
          }
          else
          {
            v8 = *(_QWORD *)v12 & 0xFFFFFFFFFFLL;
          }
        }
        v10 = v8;
        if ( (unsigned int)++v5 < a5 )
          break;
        if ( a4 || v8 == 0x3FFFFFFFFFLL || v8 < qword_140E34930 || v8 >= qword_140E34930 + 2048 )
          return v8;
        v5 = v9;
        v11 = 48 * v8 - 0x220000000000LL;
        v12 = v11;
      }
      if ( v8 == 0x3FFFFFFFFFLL )
        return v8;
    }
LABEL_13:
    a3 = 0;
    goto LABEL_14;
  }
  return 0x3FFFFFFFFFLL;
}
