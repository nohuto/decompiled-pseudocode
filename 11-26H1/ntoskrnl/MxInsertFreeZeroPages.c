/*
 * XREFs of MxInsertFreeZeroPages @ 0x140CFD9C8
 * Callers:
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     MxInsertPagesInFreeList @ 0x140CFDB00 (MxInsertPagesInFreeList.c)
 */

char __fastcall MxInsertFreeZeroPages(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // ebp
  unsigned int v3; // edi
  _RTL_BALANCED_NODE **v5; // rsi
  _RTL_BALANCED_NODE *v6; // rbx
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_RB_TREE *v8; // rcx
  unsigned __int64 v9; // rdx
  BOOLEAN v10; // r8
  unsigned __int64 v11; // rax

  LOBYTE(v1) = KeNumberNodes;
  v2 = 64;
  v3 = 0;
  if ( (unsigned __int16)KeNumberNodes > 0x40u || (v2 = (unsigned __int16)KeNumberNodes, KeNumberNodes) )
  {
    do
    {
      v1 = qword_141000840;
      v5 = (_RTL_BALANCED_NODE **)&qword_141000840[250 * v3];
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == (_RTL_BALANCED_NODE *)v5 )
          break;
        if ( (_RTL_BALANCED_NODE **)v6->Children[1] != v5 || (v7 = v6->Children[0], v6->Children[0]->Children[1] != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7->Children[1] = (_RTL_BALANCED_NODE *)v5;
        MxInsertPagesInFreeList(v6);
        LOBYTE(v1) = HIDWORD(v6[1].Left) & 6;
        if ( (_BYTE)v1 == 2 )
        {
          v8 = (_RTL_RB_TREE *)(a1 + 352);
          v9 = *(_QWORD *)(a1 + 352);
          if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
          {
            if ( v9 )
              v9 ^= (unsigned __int64)v8;
          }
          v10 = 0;
          if ( v9 )
          {
            while ( 1 )
            {
              if ( v6[1].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v9 + 32) )
              {
                v11 = *(_QWORD *)v9;
                if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
                {
                  if ( !v11 )
                    goto LABEL_23;
                  v11 ^= v9;
                }
                if ( !v11 )
                {
LABEL_23:
                  v10 = 0;
                  break;
                }
              }
              else
              {
                v11 = *(_QWORD *)(v9 + 8);
                if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
                {
                  if ( !v11 )
                    goto LABEL_17;
                  v11 ^= v9;
                }
                if ( !v11 )
                {
LABEL_17:
                  v10 = 1;
                  break;
                }
              }
              v9 = v11;
            }
          }
          LOBYTE(v1) = RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)v9, v10, v6);
        }
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  return (char)v1;
}
