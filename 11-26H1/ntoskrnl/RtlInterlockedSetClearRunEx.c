/*
 * XREFs of RtlInterlockedSetClearRunEx @ 0x1402A3DC0
 * Callers:
 *     MiAttemptCoalesce @ 0x1402A3838 (MiAttemptCoalesce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRunEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  volatile signed __int32 *v4; // r9
  unsigned __int64 v5; // rsi
  signed __int32 v7; // eax
  int v8; // r8d
  signed __int32 v9; // ett
  signed __int32 v10; // eax
  int v11; // edi
  signed __int32 v12; // ett
  signed __int32 v13; // eax
  int v14; // edi
  signed __int32 v15; // ett
  unsigned __int64 v16; // rsi
  volatile signed __int32 *v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx

  v3 = a2 & 0x1F;
  v4 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + (a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  v5 = a3;
  if ( v3 + a3 <= 0x20 )
  {
    v7 = *v4;
    if ( a3 == 32 )
      v8 = -1;
    else
      v8 = ((1 << a3) - 1) << v3;
    while ( (v7 & v8) == 0 )
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange(v4, v8 | v7, v7);
      if ( v9 == v7 )
        return 1LL;
    }
  }
  else
  {
    if ( (a2 & 0x1F) == 0 )
      goto LABEL_3;
    v10 = *v4;
    v11 = ((1 << (32 - (a2 & 0x1F))) - 1) << v3;
    while ( (v10 & v11) == 0 )
    {
      v12 = v10;
      v10 = _InterlockedCompareExchange(v4, v11 | v10, v10);
      if ( v12 == v10 )
      {
        a3 -= 32 - (unsigned int)(a2 & 0x1F);
        ++v4;
LABEL_3:
        while ( a3 >= 0x20 )
        {
          if ( _InterlockedCompareExchange(v4, -1, 0) )
          {
            if ( v5 == a3 )
              return 0LL;
            v16 = v5 - a3;
            v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
            if ( v16 + v3 <= 0x20 )
            {
              if ( v16 != 32 )
              {
LABEL_25:
                _InterlockedAnd(v17, ~(((1 << v16) - 1) << v3));
                return 0LL;
              }
              goto LABEL_29;
            }
            if ( (a2 & 0x1F) != 0 )
            {
              _InterlockedAnd(v17, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v3));
              v16 -= 32 - (unsigned int)(a2 & 0x1F);
              ++v17;
            }
            if ( v16 >= 0x20 )
            {
              v18 = v16 >> 5;
              v16 += -32LL * (v16 >> 5);
              do
              {
                *v17++ = 0;
                --v18;
              }
              while ( v18 );
            }
            if ( v16 )
              goto LABEL_34;
            return 0LL;
          }
          ++v4;
          a3 -= 32LL;
        }
        if ( !a3 )
          return 1LL;
        v13 = *v4;
        v14 = (1 << a3) - 1;
        while ( (v13 & v14) == 0 )
        {
          v15 = v13;
          v13 = _InterlockedCompareExchange(v4, v14 | v13, v13);
          if ( v15 == v13 )
            return 1LL;
        }
        v16 = v5 - a3;
        v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
        if ( v16 + v3 <= 0x20 )
        {
          if ( v16 != 32 )
            goto LABEL_25;
LABEL_29:
          *v17 = 0;
          return 0LL;
        }
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v17, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v3));
          v16 -= 32 - (unsigned int)(a2 & 0x1F);
          ++v17;
        }
        if ( v16 >= 0x20 )
        {
          v19 = v16 >> 5;
          v16 += -32LL * (v16 >> 5);
          do
          {
            *v17++ = 0;
            --v19;
          }
          while ( v19 );
        }
        if ( v16 )
        {
LABEL_34:
          _InterlockedAnd(v17, -1 << v16);
          return 0LL;
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
