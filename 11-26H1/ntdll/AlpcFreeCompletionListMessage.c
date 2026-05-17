/*
 * XREFs of AlpcFreeCompletionListMessage @ 0x1800C50C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlpcFreeCompletionListMessage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // edx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  volatile signed __int32 *v9; // r11
  int v10; // r9d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx

  if ( (a2 & 0x3F) == 0 )
  {
    v4 = a2 + *(unsigned __int16 *)(a2 + 2);
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (v4 & 7) != 0 )
        v5 = 8 - (v4 & 7);
      else
        v5 = 0;
      v4 += (unsigned int)(*(_DWORD *)(a1 + 40) + v5);
    }
    if ( a2 < v4 )
    {
      v6 = a1 + *(unsigned int *)(a1 + 28);
      if ( a2 >= v6 && v4 <= v6 + *(unsigned int *)(a1 + 32) )
      {
        v7 = (a2 - v6) >> 6;
        v8 = ((v4 - v6 + 63) >> 6) - v7;
        v9 = (volatile signed __int32 *)(a1 + *(unsigned int *)(a1 + 20) + 4 * (v7 >> 5));
        v10 = v7 & 0x1F;
        if ( v10 )
        {
          v11 = v8;
          if ( (unsigned int)(32 - v10) <= v8 )
            v11 = 32 - v10;
          _InterlockedAnd(v9++, ~(((1 << v11) - 1) << v10));
          v8 -= v11;
        }
        if ( v8 >= 0x20 )
        {
          v12 = v8 >> 5;
          v8 += -32LL * (v8 >> 5);
          do
          {
            _InterlockedAnd(v9++, 0);
            --v12;
          }
          while ( v12 );
        }
        if ( v8 )
          _InterlockedAnd(v9, -1 << v8);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
      }
    }
  }
}
