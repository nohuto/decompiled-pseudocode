/*
 * XREFs of MxInsertFreeZeroMemoryDescriptor @ 0x140CF755C
 * Callers:
 *     MxConstructLoaderMemoryTree @ 0x140CF53CC (MxConstructLoaderMemoryTree.c)
 *     MxCreateFreePageNode @ 0x140CF5A8C (MxCreateFreePageNode.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     MxUpdateBootNodeFreePageCount @ 0x140CF85D8 (MxUpdateBootNodeFreePageCount.c)
 */

__int64 __fastcall MxInsertFreeZeroMemoryDescriptor(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v5; // rdx
  bool v6; // r8
  int v7; // ecx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v2 = a2[5];
  if ( v2 < 0x40000 )
  {
    v9 = (_QWORD *)((v2 < 0x200 ? 0x20 : 0) + a1 + 16);
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    *a2 = v9;
    a2[1] = v10;
    *v10 = a2;
    v9[1] = a2;
    ++v9[3];
    v9[2] += a2[5];
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v6 = 0;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( v5 )
        v5 ^= a1;
      else
        v5 = 0LL;
    }
    v7 = *(_BYTE *)(a1 + 8) & 1;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v2 <= *(_QWORD *)(v5 + 40) )
        {
          v8 = *(_QWORD *)(v5 + 8);
          if ( v7 )
          {
            if ( !v8 )
              goto LABEL_18;
            v8 ^= v5;
          }
          if ( !v8 )
          {
LABEL_18:
            v6 = 1;
            break;
          }
        }
        else
        {
          v8 = *(_QWORD *)v5;
          if ( v7 )
          {
            if ( !v8 )
              break;
            v8 ^= v5;
          }
          if ( !v8 )
            break;
        }
        v5 = v8;
      }
    }
    RtlRbInsertNodeEx(a1, v5, v6, (unsigned __int64)a2);
  }
  return MxUpdateBootNodeFreePageCount(a1, a2[5], 1LL);
}
