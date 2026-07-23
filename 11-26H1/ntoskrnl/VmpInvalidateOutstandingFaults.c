/*
 * XREFs of VmpInvalidateOutstandingFaults @ 0x1405249A8
 * Callers:
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140253DEC (VmpFlushTbVaRange.c)
 *     VmpInvalidateSlatBatched @ 0x1406C5010 (VmpInvalidateSlatBatched.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpInvalidateOutstandingFaults(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r10
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD **v19; // rcx
  _QWORD *i; // rcx

  v3 = (volatile LONG *)(a1 + 112);
  v6 = a2 + a3 - 1;
  v7 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
  v8 = a1 + 96;
  v9 = *(_QWORD *)v8;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v9 )
    v9 ^= v8;
  v10 = 0LL;
  while ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFLL;
    if ( a2 > v11 )
    {
      v13 = *(_QWORD *)(v9 + 8);
      if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v13 )
        v9 ^= v13;
      else
        v9 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v9;
      v10 = (_QWORD *)v9;
      if ( a2 >= v11 )
      {
        if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
          v12 ^= v9;
        v14 = 0LL;
        if ( v12 )
        {
          do
          {
            v15 = *(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFLL;
            if ( a2 > v15 )
            {
              v17 = *(_QWORD *)(v12 + 8);
              if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v17 )
                v12 ^= v17;
              else
                v12 = *(_QWORD *)(v12 + 8);
            }
            else
            {
              v16 = *(_QWORD *)v12;
              if ( a2 >= v15 )
                v14 = (_QWORD *)v12;
              if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v16 )
                v12 ^= v16;
              else
                v12 = *(_QWORD *)v12;
            }
          }
          while ( v12 );
          if ( v14 )
            v10 = v14;
        }
        break;
      }
      if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
        v9 ^= v12;
      else
        v9 = *(_QWORD *)v9;
    }
  }
  while ( v10 && (v10[3] & 0xFFFFFFFFFFFFFuLL) <= v6 )
  {
    ++v7;
    v10[3] |= 0x10000000000000uLL;
    v18 = v10;
    v19 = (_QWORD **)v10[1];
    if ( v19 )
    {
      v10 = (_QWORD *)v10[1];
      for ( i = *v19; i; i = (_QWORD *)*i )
        v10 = i;
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || (_QWORD *)*v10 == v18 )
          break;
        v18 = v10;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return v7;
}
