/*
 * XREFs of MxInsertAllUsedRegionsInLoaderTree @ 0x140CFD550
 * Callers:
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     MxInsertUsedRegionsInLoaderTree @ 0x140CFDC88 (MxInsertUsedRegionsInLoaderTree.c)
 */

char __fastcall MxInsertAllUsedRegionsInLoaderTree(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // esi
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  _RTL_BALANCED_NODE **v6; // rdi
  _RTL_BALANCED_NODE *v7; // r9
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_RB_TREE *v9; // rcx
  unsigned __int64 v10; // rdx
  BOOLEAN v11; // r8
  unsigned __int64 v12; // rax

  LOBYTE(v1) = KeNumberNodes;
  v2 = 64;
  v3 = 0;
  if ( (unsigned __int16)KeNumberNodes > 0x40u || (v2 = (unsigned __int16)KeNumberNodes, KeNumberNodes) )
  {
    do
    {
      v1 = MxBootState;
      v5 = &MxBootState[250 * v3];
      if ( v5[24] )
        LOBYTE(v1) = MxInsertUsedRegionsInLoaderTree(a1, &MxBootState[250 * v3]);
      v6 = (_RTL_BALANCED_NODE **)(v5 + 14);
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 == (_RTL_BALANCED_NODE *)v6 )
          break;
        if ( (_RTL_BALANCED_NODE **)v7->Children[1] != v6 || (v8 = v7->Children[0], v7->Children[0]->Children[1] != v7) )
          __fastfail(3u);
        *v6 = v8;
        v9 = (_RTL_RB_TREE *)(a1 + 352);
        v8->Children[1] = (_RTL_BALANCED_NODE *)v6;
        v10 = *(_QWORD *)(a1 + 352);
        if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
        {
          if ( v10 )
            v10 ^= (unsigned __int64)v9;
        }
        v11 = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            if ( v7[1].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v10 + 32) )
            {
              v12 = *(_QWORD *)v10;
              if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
              {
                if ( !v12 )
                  goto LABEL_24;
                v12 ^= v10;
              }
              if ( !v12 )
              {
LABEL_24:
                v11 = 0;
                break;
              }
            }
            else
            {
              v12 = *(_QWORD *)(v10 + 8);
              if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
              {
                if ( !v12 )
                  goto LABEL_18;
                v12 ^= v10;
              }
              if ( !v12 )
              {
LABEL_18:
                v11 = 1;
                break;
              }
            }
            v10 = v12;
          }
        }
        LOBYTE(v1) = RtlRbInsertNodeEx(v9, (PRTL_BALANCED_NODE)v10, v11, v7);
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  return (char)v1;
}
