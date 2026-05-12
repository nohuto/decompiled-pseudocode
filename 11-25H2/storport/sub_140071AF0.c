/*
 * XREFs of sub_140071AF0 @ 0x140071AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140071AF0(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        PVOID SystemArgument2)
{
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9
  _QWORD *v8; // rdi
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rsi

  v5 = *(_QWORD *)(a1 - 64);
  v6 = a4;
  if ( a3 > *(_WORD *)(v5 + 22) )
    return 3238002694LL;
  if ( a3 )
  {
    v7 = 192LL * a3 + *(_QWORD *)(v5 + 728) - 192LL;
  }
  else
  {
    if ( a2 )
      return 3238002694LL;
    v7 = *(_QWORD *)(v5 + 712);
  }
  if ( a2 <= *(_WORD *)(v5 + 26) )
  {
    if ( a2 )
    {
      v8 = (_QWORD *)(((unsigned __int64)a2 << 7) + *(_QWORD *)(v5 + 864) - 128LL);
    }
    else
    {
      if ( a3 )
        return 3238002694LL;
      v8 = *(_QWORD **)(v5 + 856);
    }
    v9 = 1;
    if ( (unsigned int)v6 < *(_DWORD *)(v7 + 124) - 1 )
    {
      v10 = *(unsigned __int16 *)((v6 << 7) + *(_QWORD *)(v7 + 32) + 52);
      v11 = 4 * v10;
      _InterlockedAdd((volatile signed __int32 *)(v8[9] + 4 * v10), 1u);
      if ( _bittest64((const signed __int64 *)(v5 + 136), 0x22u) )
      {
        v9 = 0;
      }
      else if ( KeInsertQueueDpc((PRKDPC)(v8[8] + (v10 << 6)), v8, SystemArgument2) )
      {
        return v9 == 0 ? 0xC1000009 : 0;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v8[9] + v11));
      return v9 == 0 ? 0xC1000009 : 0;
    }
  }
  return 3238002694LL;
}
