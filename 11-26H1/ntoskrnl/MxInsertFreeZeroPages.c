/*
 * XREFs of MxInsertFreeZeroPages @ 0x140CF7648
 * Callers:
 *     MxSwitchToPfns @ 0x140CF8360 (MxSwitchToPfns.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     MxInsertPagesInFreeList @ 0x140CF7780 (MxInsertPagesInFreeList.c)
 */

char __fastcall MxInsertFreeZeroPages(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // ebp
  unsigned int v3; // edi
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  bool v10; // r8
  unsigned __int64 v11; // rax

  LOBYTE(v1) = KeNumberNodes;
  v2 = 64;
  v3 = 0;
  if ( (unsigned __int16)KeNumberNodes > 0x40u || (v2 = (unsigned __int16)KeNumberNodes, KeNumberNodes) )
  {
    do
    {
      v1 = qword_140FFF840;
      v5 = (unsigned __int64 *)&qword_140FFF840[250 * v3];
      while ( 1 )
      {
        v6 = *v5;
        if ( (unsigned __int64 *)*v5 == v5 )
          break;
        if ( *(unsigned __int64 **)(v6 + 8) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v7;
        *(_QWORD *)(v7 + 8) = v5;
        MxInsertPagesInFreeList(v6);
        LOBYTE(v1) = *(_DWORD *)(v6 + 28) & 6;
        if ( (_BYTE)v1 == 2 )
        {
          v8 = a1 + 352;
          v9 = *(_QWORD *)(a1 + 352);
          if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
          {
            if ( v9 )
              v9 ^= v8;
          }
          v10 = 0;
          if ( v9 )
          {
            while ( 1 )
            {
              if ( *(_QWORD *)(v6 + 32) < *(_QWORD *)(v9 + 32) )
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
          LOBYTE(v1) = RtlRbInsertNodeEx(v8, v9, v10, v6);
        }
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  return (char)v1;
}
