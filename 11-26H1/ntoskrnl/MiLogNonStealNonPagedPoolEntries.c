/*
 * XREFs of MiLogNonStealNonPagedPoolEntries @ 0x1404594E0
 * Callers:
 *     MiLogNonStealNonPagedPoolWorker @ 0x1404591C0 (MiLogNonStealNonPagedPoolWorker.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiNonStealTagsTreeFind @ 0x1404596D4 (MiNonStealTagsTreeFind.c)
 */

void __fastcall MiLogNonStealNonPagedPoolEntries(unsigned __int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 *i; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 PoolMm; // rax
  _BOOL8 v11; // r8
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
        v6 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v6 )
          v6 ^= a1;
        while ( v6 )
        {
          if ( (unsigned int)v15 > *(_DWORD *)(v6 + 24) )
          {
            v7 = *(_QWORD *)(v6 + 8);
          }
          else
          {
            if ( (unsigned int)v15 >= *(_DWORD *)(v6 + 24) )
              break;
            v7 = *(_QWORD *)v6;
          }
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v7 )
            v6 ^= v7;
          else
            v6 = v7;
        }
        if ( v6 )
          goto LABEL_14;
        PoolMm = ExAllocatePoolMm(
                   64LL,
                   0x38uLL,
                   1951295821,
                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
        v6 = PoolMm;
        if ( PoolMm )
        {
          *(_DWORD *)(PoolMm + 24) = v15;
          v12 = *(_QWORD *)a1;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v12 )
            v12 ^= a1;
          LOBYTE(v11) = 0;
          v13 = *(_BYTE *)(a1 + 8) & 1;
          if ( v12 )
          {
            while ( 1 )
            {
              if ( (int)MiNonStealTagsTreeFind(v6 + 24, v12, v11) >= 0 )
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
          RtlRbInsertNodeEx(a1, v12, v11, v6);
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
          ++*(_DWORD *)(v9 + v6);
          continue;
        }
        _InterlockedIncrement(&dword_140E2C754);
      }
    }
  }
}
