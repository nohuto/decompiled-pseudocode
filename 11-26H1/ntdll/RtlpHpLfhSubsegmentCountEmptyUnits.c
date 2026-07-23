/*
 * XREFs of RtlpHpLfhSubsegmentCountEmptyUnits @ 0x180063270
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180073998 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentCountEmptyUnits(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // r9d
  unsigned int v4; // edx
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  _WORD *v7; // rax
  _WORD *i; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int16 v12; // cx
  _WORD *v13; // rax

  v1 = 0LL;
  v3 = 0;
  LOBYTE(v4) = *(_BYTE *)(a1 + 39);
  if ( (_BYTE)v4 )
  {
    do
    {
      v5 = a1 + 8LL * *(unsigned __int8 *)(a1 + 24);
      v6 = v5 + 2LL * (unsigned __int8)v4;
      v7 = (_WORD *)(v5 + 2 * v1);
      if ( *v7 )
      {
        if ( (unsigned __int64)v7 >= v6 )
          return v3;
        while ( *v7 )
        {
          if ( (unsigned __int64)++v7 >= v6 )
            return v3;
        }
        v1 = ((__int64)v7 - v5) >> 1;
      }
      else
      {
        v12 = *(v7 - 1);
        v13 = v7 - 1;
        if ( !v12 )
        {
          while ( !*--v13 )
            ;
        }
        v7 = v13 + 1;
      }
      for ( i = (_WORD *)(v5 + 2 * ((unsigned int)v1 + 1LL)); (unsigned __int64)i < v6; ++i )
      {
        if ( *i )
          break;
      }
      v10 = ((__int64)v7 - v5) >> 1;
      v11 = i - v7;
      if ( (_DWORD)v10 == -1 )
        break;
      v4 = *(unsigned __int8 *)(a1 + 39);
      v3 += v11;
      v1 = (unsigned int)(v10 + v11);
    }
    while ( (unsigned int)v1 < v4 );
  }
  return v3;
}
