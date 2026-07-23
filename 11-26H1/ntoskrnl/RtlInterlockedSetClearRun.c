/*
 * XREFs of RtlInterlockedSetClearRun @ 0x140359A90
 * Callers:
 *     MiQueuePinDriverAddressLog @ 0x14024E374 (MiQueuePinDriverAddressLog.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x140358D6C (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     MiGetPageFromSlabEntry @ 0x1403599BC (MiGetPageFromSlabEntry.c)
 *     MiDecommitGetMetadataSlot @ 0x140704B70 (MiDecommitGetMetadataSlot.c)
 *     EtwpFindUserBufferSpace @ 0x140A14940 (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  unsigned int v4; // esi
  volatile signed __int32 *v5; // r9
  signed __int32 v6; // eax
  int v7; // r8d
  signed __int32 v8; // ett
  int v10; // r14d
  signed __int32 v11; // eax
  int v12; // r15d
  signed __int32 v13; // ett
  signed __int32 v14; // eax
  int v15; // r11d
  signed __int32 v16; // ett
  __int64 v17; // rsi
  unsigned int v18; // r8d
  volatile signed __int32 *v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax

  v3 = a2 & 0x1F;
  v4 = a3;
  v5 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v3 + (unsigned __int64)a3 > 0x20 )
  {
    v10 = a2 & 0x1F;
    if ( (a2 & 0x1F) == 0 )
      goto LABEL_8;
    v14 = *v5;
    v15 = ((1 << (32 - v10)) - 1) << v3;
    while ( (v14 & v15) == 0 )
    {
      v16 = v14;
      v14 = _InterlockedCompareExchange(v5, v15 | v14, v14);
      if ( v16 == v14 )
      {
        a3 -= 32 - v10;
        ++v5;
LABEL_8:
        while ( a3 >= 0x20 )
        {
          if ( _InterlockedCompareExchange(v5, -1, 0) )
          {
            if ( v4 == a3 )
              return 0LL;
            v21 = v4 - a3;
            v18 = v21;
            v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a2 >> 5));
            if ( (unsigned __int64)(v3 + v21) <= 0x20 )
            {
              if ( (_DWORD)v21 == 32 )
                goto LABEL_25;
              goto LABEL_33;
            }
            if ( (a2 & 0x1F) != 0 )
            {
              _InterlockedAnd(v19, ~(((1 << (32 - v10)) - 1) << v3));
              v18 = v21 - (32 - v10);
              ++v19;
            }
            if ( v18 >= 0x20 )
            {
              v22 = (unsigned __int64)v18 >> 5;
              do
              {
                *v19 = 0;
                v18 -= 32;
                ++v19;
                --v22;
              }
              while ( v22 );
            }
            if ( v18 )
            {
LABEL_32:
              _InterlockedAnd(v19, -1 << v18);
              return 0LL;
            }
            return 0LL;
          }
          ++v5;
          a3 -= 32;
        }
        if ( !a3 )
          return 1LL;
        v11 = *v5;
        v12 = (1 << a3) - 1;
        while ( (v11 & v12) == 0 )
        {
          v13 = v11;
          v11 = _InterlockedCompareExchange(v5, v12 | v11, v11);
          if ( v13 == v11 )
            return 1LL;
        }
        v17 = v4 - a3;
        v18 = v17;
        v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a2 >> 5));
        if ( (unsigned __int64)(v3 + v17) <= 0x20 )
        {
          if ( (_DWORD)v17 == 32 )
          {
LABEL_25:
            *v19 = 0;
            return 0LL;
          }
LABEL_33:
          _InterlockedAnd(v19, ~(((1 << v18) - 1) << v3));
          return 0LL;
        }
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v19, ~(((1 << (32 - v10)) - 1) << v3));
          v18 = v17 - (32 - v10);
          ++v19;
        }
        if ( v18 >= 0x20 )
        {
          v20 = (unsigned __int64)v18 >> 5;
          do
          {
            *v19 = 0;
            v18 -= 32;
            ++v19;
            --v20;
          }
          while ( v20 );
        }
        if ( v18 )
          goto LABEL_32;
        return 0LL;
      }
    }
  }
  else
  {
    v6 = *v5;
    if ( a3 == 32 )
      v7 = -1;
    else
      v7 = ((1 << a3) - 1) << v3;
    while ( (v6 & v7) == 0 )
    {
      v8 = v6;
      v6 = _InterlockedCompareExchange(v5, v7 | v6, v6);
      if ( v8 == v6 )
        return 1LL;
    }
  }
  return 0LL;
}
