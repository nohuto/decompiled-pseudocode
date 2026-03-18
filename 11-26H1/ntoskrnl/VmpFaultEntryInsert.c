/*
 * XREFs of VmpFaultEntryInsert @ 0x1406C0E28
 * Callers:
 *     VmpAccessFaultBatch @ 0x1406C09D0 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall VmpFaultEntryInsert(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  KIRQL v7; // r14
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  bool v10; // r8
  unsigned __int64 v11; // rax

  v3 = (volatile LONG *)(a1 + 112);
  v5 = a2;
  v6 = a2 + 48LL * a3;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  if ( v5 < v6 )
  {
    v8 = (unsigned __int64 *)(a1 + 96);
    do
    {
      if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
      {
        if ( *v8 )
          v9 = *v8 ^ (unsigned __int64)v8;
        else
          v9 = 0LL;
      }
      else
      {
        v9 = *v8;
      }
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFuLL) >= (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_20;
              v11 ^= v9;
            }
            if ( !v11 )
            {
LABEL_20:
              v10 = 1;
              break;
            }
          }
          else
          {
            v11 = *(_QWORD *)v9;
            if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
            {
              if ( !v11 )
                break;
              v11 ^= v9;
            }
            if ( !v11 )
              break;
          }
          v9 = v11;
        }
      }
      RtlRbInsertNodeEx(a1 + 96, v9, v10, v5);
      v5 += 48LL;
    }
    while ( v5 < v6 );
    v3 = (volatile LONG *)(a1 + 112);
  }
  ExReleaseSpinLockExclusive(v3, v7);
}
