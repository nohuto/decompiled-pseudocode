/*
 * XREFs of MiFindClosestNode @ 0x1404FDFBC
 * Callers:
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 * Callees:
 *     MiCreatePageChainsForNode @ 0x14071636C (MiCreatePageChainsForNode.c)
 */

__int64 __fastcall MiFindClosestNode(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned int *v5; // rbx
  unsigned int *v6; // r15
  int v7; // r12d
  __int64 *v8; // rbp
  __int64 v9; // rdi
  _WORD *v10; // rsi
  __int64 result; // rax

  LODWORD(v4) = 0;
  if ( _bittest64(&MiFlags, 0x28u) )
  {
    v5 = (unsigned int *)(qword_140E2D810 + 4LL * (unsigned __int16)KeNumberNodes * a1);
    v6 = v5 + 1;
    v7 = *(_DWORD *)(*(_QWORD *)(384LL * a1 + qword_140E2D838 + 376) + 36LL) & 1;
    if ( !v7 )
      v6 = &v5[(unsigned __int16)KeNumberNodes];
    while ( v5 < v6 )
    {
      if ( v7 )
      {
        v8 = &qword_140E2D818;
      }
      else
      {
        v4 = *v5;
        v8 = *(__int64 **)(384 * v4 + qword_140E2D838 + 376);
      }
      v9 = 0LL;
      v10 = v8 + 3;
      while ( v9 < 3 )
      {
        if ( *v10 )
        {
          result = MiCreatePageChainsForNode(v8, (unsigned int)v4, a3);
          if ( (int)result >= 0 )
            return result;
        }
        ++v9;
        ++v10;
      }
      ++v5;
    }
  }
  return 3221225473LL;
}
