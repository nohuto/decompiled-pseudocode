/*
 * XREFs of HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1400045D4
 * Callers:
 *     HUBHTX_ClearTTBuffer @ 0x140002E70 (HUBHTX_ClearTTBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_GetClearTtBufferInfoForEndpoint(__int64 a1, __int64 a2, char a3, _WORD *a4)
{
  unsigned int v4; // eax
  unsigned int v8; // r10d
  _QWORD *v9; // r9
  _QWORD *i; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int16 v16; // dx
  __int16 v17; // cx

  v4 = *(_DWORD *)(a1 + 172);
  *a4 = 0;
  v8 = -1073741823;
  if ( v4 <= 1 )
  {
    if ( a2 == *(_QWORD *)(a1 + 88) )
    {
      *a4 = a3 & 0xF | (16 * (*(_WORD *)(a1 + 1656) & 0x7F));
      return 0;
    }
    else
    {
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v14[1] )
      {
        v14 = i - 1;
        if ( v9 == i )
          break;
        v11 = *((_DWORD *)v14 + 6);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = v14 + 5;
          while ( *v13 != a2 )
          {
            v12 = (unsigned int)(v12 + 1);
            v13 += 10;
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_9;
          }
          v15 = v14[10 * v12 + 9];
          if ( (*(_BYTE *)(v15 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v15 + 3) & 3) != 2 )
              return v8;
            v16 = 4096;
          }
          else
          {
            v16 = 0;
          }
          v17 = v16 ^ a3 & 0xF ^ (16 * (*(_WORD *)(a1 + 1656) & 0x7F));
          *a4 = v17;
          if ( a3 < 0 )
            *a4 = v17 | 0x8000;
          return 0;
        }
LABEL_9:
        ;
      }
    }
  }
  return v8;
}
