/*
 * XREFs of MiFindClosestNode @ 0x14050424C
 * Callers:
 *     MiCreatePageChains @ 0x1403C35B8 (MiCreatePageChains.c)
 * Callees:
 *     MiCreatePageChainsForNode @ 0x14071166C (MiCreatePageChainsForNode.c)
 */

__int64 __fastcall MiFindClosestNode(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned int *v5; // rbx
  int v6; // r15d
  __int64 v7; // rax
  unsigned int *v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // rdi
  _WORD *v11; // rsi
  __int64 result; // rax

  LODWORD(v4) = 0;
  if ( _bittest64(&MiFlags, 0x28u) )
  {
    v5 = (unsigned int *)(qword_140E2D690 + 4LL * (unsigned __int16)KeNumberNodes * a1);
    v6 = *(_DWORD *)(*(_QWORD *)(384LL * a1 + qword_140E2D6B8 + 376) + 36LL) & 1;
    if ( v6 )
      v7 = 1LL;
    else
      v7 = (unsigned __int16)KeNumberNodes;
    v8 = &v5[v7];
    while ( v5 < v8 )
    {
      if ( v6 )
      {
        v9 = &qword_140E2D698;
      }
      else
      {
        v4 = *v5;
        v9 = *(__int64 **)(384 * v4 + qword_140E2D6B8 + 376);
      }
      v10 = 0LL;
      v11 = v9 + 3;
      while ( v10 < 3 )
      {
        if ( *v11 )
        {
          result = MiCreatePageChainsForNode(v9, (unsigned int)v4, a3);
          if ( (int)result >= 0 )
            return result;
        }
        ++v10;
        ++v11;
      }
      ++v5;
    }
  }
  return 3221225473LL;
}
