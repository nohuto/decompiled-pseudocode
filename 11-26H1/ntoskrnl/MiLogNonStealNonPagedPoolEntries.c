/*
 * XREFs of MiLogNonStealNonPagedPoolEntries @ 0x140450D60
 * Callers:
 *     MiLogNonStealNonPagedPoolWorker @ 0x140450A40 (MiLogNonStealNonPagedPoolWorker.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiNonStealTagsTreeFind @ 0x140450F54 (MiNonStealTagsTreeFind.c)
 */

void __fastcall MiLogNonStealNonPagedPoolEntries(PRTL_RB_TREE Tree, __int64 *a2, unsigned __int64 a3)
{
  __int64 *i; // r14
  unsigned __int64 Root; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 PoolMm; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+58h] [rbp+10h]

  if ( (unsigned __int64)a2 < a3 )
  {
    for ( i = a2; (unsigned __int64)i < a3; ++i )
    {
      v15 = *i;
      *i = 0LL;
      if ( v15 < 0 )
      {
        Root = (unsigned __int64)Tree->Root;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && Root )
          Root ^= (unsigned __int64)Tree;
        while ( Root )
        {
          if ( (unsigned int)v15 > *(_DWORD *)(Root + 24) )
          {
            v7 = *(_QWORD *)(Root + 8);
          }
          else
          {
            if ( (unsigned int)v15 >= *(_DWORD *)(Root + 24) )
              break;
            v7 = *(_QWORD *)Root;
          }
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v7 )
            Root ^= v7;
          else
            Root = v7;
        }
        if ( Root )
          goto LABEL_14;
        PoolMm = ExAllocatePoolMm(
                   64LL,
                   0x38uLL,
                   1951295821,
                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
        Root = PoolMm;
        if ( PoolMm )
        {
          *(_DWORD *)(PoolMm + 24) = v15;
          v12 = (unsigned __int64)Tree->Root;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v12 )
            v12 ^= (unsigned __int64)Tree;
          LOBYTE(v11) = 0;
          v13 = *(_BYTE *)&Tree->0 & 1;
          if ( v12 )
          {
            while ( 1 )
            {
              if ( (int)MiNonStealTagsTreeFind(Root + 24, v12, v11) >= 0 )
              {
                v14 = *(_QWORD *)(v12 + 8);
                if ( v13 )
                {
                  if ( !v14 )
                    goto LABEL_37;
                  v14 ^= v12;
                }
                if ( !v14 )
                {
LABEL_37:
                  LOBYTE(v11) = 1;
                  break;
                }
              }
              else
              {
                v14 = *(_QWORD *)v12;
                if ( v13 )
                {
                  if ( !v14 )
                    goto LABEL_47;
                  v14 ^= v12;
                }
                if ( !v14 )
                {
LABEL_47:
                  LOBYTE(v11) = 0;
                  break;
                }
              }
              v12 = v14;
            }
          }
          RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)v12, v11, (PRTL_BALANCED_NODE)Root);
LABEL_14:
          v8 = HIDWORD(v15) & 0x7FFFFFFF;
          if ( (v15 & 0x7FFFFFFF00000000LL) != 0 )
          {
            if ( v8 < 0x400 )
            {
              v9 = 32LL;
            }
            else if ( v8 < 0x1000 )
            {
              v9 = 36LL;
            }
            else if ( (v15 & 0xFFF00000000LL) != 0 )
            {
              v9 = 48LL;
              if ( (WORD2(v15) & 0xFFFu) <= 0x20 )
                v9 = 44LL;
            }
            else
            {
              v9 = 40LL;
            }
          }
          else
          {
            v9 = 28LL;
          }
          ++*(_DWORD *)(v9 + Root);
          continue;
        }
        _InterlockedIncrement(&dword_140E2C8D4);
      }
    }
  }
}
