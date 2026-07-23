/*
 * XREFs of KiAddTriageDumpDataBlock @ 0x1405E9C18
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1405E8760 (KeAddTriageDumpDataBlock.c)
 *     KiAddTriageDumpDataBlock @ 0x1405E9C18 (KiAddTriageDumpDataBlock.c)
 * Callees:
 *     KiAddTriageDumpDataBlock @ 0x1405E9C18 (KiAddTriageDumpDataBlock.c)
 *     KiCheckRangeOverlap @ 0x1405EA438 (KiCheckRangeOverlap.c)
 */

__int64 __fastcall KiAddTriageDumpDataBlock(_DWORD *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v8; // r10
  __int64 i; // rsi
  _QWORD *v10; // r9
  unsigned int v11; // eax
  unsigned __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-18h]
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0;
  v13 = a2;
  v14 = a3;
  v8 = a3;
  v15 = 0LL;
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < a1[4]; i = (unsigned int)(i + 1) )
    {
      v10 = &a1[4 * i + 12];
      if ( a2 < *v10 + *(_QWORD *)&a1[4 * (unsigned int)i + 14] && a2 + a3 > *v10 )
      {
        if ( (unsigned __int8)KiCheckRangeOverlap(&v13, &a1[4 * i + 12], &v15) )
        {
          v11 = KiAddTriageDumpDataBlock(a1, v15, *((_QWORD *)&v15 + 1), (unsigned int)++a4);
          v8 = v14;
          v4 = v11;
          a2 = v13;
          if ( !v14 )
            return v4;
        }
        else
        {
          v8 = v14;
          a2 = v13;
        }
      }
    }
    if ( v8 )
    {
      if ( a1[4] == a1[5] )
      {
        return (unsigned int)-1073741789;
      }
      else if ( a3 <= (unsigned int)(a1[7] - a1[6]) )
      {
        *(_QWORD *)&a1[4 * i + 12] = a2;
        *(_QWORD *)&a1[4 * (unsigned int)i + 14] = v8;
        ++a1[4];
        a1[6] += v8;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v4;
}
