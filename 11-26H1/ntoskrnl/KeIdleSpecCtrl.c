/*
 * XREFs of KeIdleSpecCtrl @ 0x14049F240
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIdleSpecCtrl(__int64 a1, int a2, _DWORD *a3, char a4)
{
  __int64 result; // rax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  signed __int16 v13; // tt
  signed __int16 v14; // tt
  __int16 v15; // cx
  int v16; // [rsp+10h] [rbp+10h]

  if ( a2 )
  {
    v7 = 0;
    if ( (*(_BYTE *)(a1 + 1820) & 1) != 0 )
    {
      v8 = *(_WORD *)(a1 + 1830);
      if ( v8 )
      {
        *(_WORD *)(a1 + 1816) |= 1u;
        v7 = v8;
      }
    }
    _m_prefetchw((const void *)(a1 + 1824));
    v10 = *(_WORD *)(a1 + 1824);
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 1816) & 1) != 0 )
      {
        v11 = *(_WORD *)(a1 + 1830);
        if ( (v11 & 3) == 0 )
        {
          v7 |= 2u;
          *(_WORD *)(a1 + 1830) = v11 | 2;
          __writemsr(0x48u, v11 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a1 + 1824), 2u);
      v12 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v12 + 1824));
      do
        v13 = *(_WORD *)(v12 + 1824);
      while ( v13 != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 1824), v13 & 0xFFE4 | 0xA, v13) );
    }
    v16 = v7;
    if ( (*(_BYTE *)(a1 + 1820) & 0x40) != 0 )
      HIWORD(v16) = *(_WORD *)(a1 + 44714);
    result = v10;
    *a3 = v16;
  }
  else
  {
    if ( (a4 & 4) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v9 + 1824));
      do
        v14 = *(_WORD *)(v9 + 1824);
      while ( v14 != _InterlockedCompareExchange16((volatile signed __int16 *)(v9 + 1824), v14 & 0xFFF5 | 2, v14) );
      if ( (*(_WORD *)(a1 + 1824) & 0x10) == 0 )
      {
        v15 = *(_WORD *)(a1 + 1830);
        if ( (v15 & 2) != 0 )
        {
          *(_WORD *)(a1 + 1830) = v15 & 0xFFFD;
          __writemsr(0x48u, v15 & 0xFFFD);
        }
      }
    }
    result = 0LL;
    *(_WORD *)(a1 + 1816) &= ~1u;
  }
  return result;
}
