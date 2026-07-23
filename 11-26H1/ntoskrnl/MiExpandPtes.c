/*
 * XREFs of MiExpandPtes @ 0x140360B30
 * Callers:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1402A428C (MiObtainSystemVa.c)
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiExpandPtes(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  int v6; // r14d
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  volatile LONG *v12; // rcx
  unsigned __int64 v13; // r14
  int v14; // r12d
  volatile LONG *v15; // rcx
  volatile LONG *v17; // rcx
  KIRQL v18; // r12
  volatile LONG *v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  char v23; // r10
  volatile signed __int32 *v24; // r8
  unsigned __int64 v25; // rcx
  int v26; // [rsp+24h] [rbp-64h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-50h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+18h]
  int v32; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 44);
  v5 = v4;
  v6 = 0;
  v32 = 0;
  v7 = (*(_DWORD *)(a1 + 40) & 1) != 0 ? 16LL : 1LL;
  if ( a2 < 0x200 )
    goto LABEL_8;
  if ( (_KWAIT_BLOCK **)a1 == &stru_140E366D8.WaitBlockList )
  {
    v5 = 12;
  }
  else
  {
    if ( v4 != 6 )
      goto LABEL_8;
    v5 = 10;
  }
  v6 = 1;
  v32 = 1;
LABEL_8:
  v8 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 4112;
  if ( CurrentIrql != 2 )
    v9 = 16;
  v26 = v9;
  v10 = MiObtainSystemVa(v8 >> 9, v5);
  v28 = v10;
  if ( !v10 )
    return 0LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = (v11 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( !v6 )
  {
    v12 = (volatile LONG *)(a1 + 52);
    v13 = ((v11 - *(_QWORD *)(a1 + 32)) >> 3) / v7;
    if ( CurrentIrql == 2 )
    {
      OldIrql = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v12);
    }
    else
    {
      OldIrql = ExAcquireSpinLockExclusive(v12);
    }
    v14 = MiSplitBitmapPages(v4);
    if ( v14 )
    {
      if ( (v8 + v27) / v7 > *(_QWORD *)a1 )
        *(_QWORD *)a1 = (v8 + v27) / v7;
      if ( (v13 & 0x3F) != 0 )
        v13 &= 0xFFFFFFFFFFFFFFC0uLL;
      if ( v13 < *(_QWORD *)(a1 + 72) || (*(_DWORD *)(a1 + 40) & 2) == 0 )
      {
        *(_QWORD *)(a1 + 72) = v13;
        *(_DWORD *)(a1 + 40) |= 2u;
      }
    }
    v15 = (volatile LONG *)(a1 + 52);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    else
      ExReleaseSpinLockExclusive(v15, OldIrql);
    if ( !v14 )
      goto LABEL_27;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v11, (int)v11 + 8 * ((int)v8 - 1), v26, v4) )
  {
LABEL_27:
    MiReturnSystemVa(v28, (__int64)((v8 << 28) + (v11 << 25)) >> 16);
    return 0LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), v8);
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
    v17 = (volatile LONG *)(a1 + 52);
    if ( CurrentIrql == 2 )
    {
      v18 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v17);
    }
    else
    {
      v18 = ExAcquireSpinLockExclusive(v17);
    }
    if ( !(unsigned int)MiSplitBitmapPages(v4) )
      *(_DWORD *)(a1 + 40) &= ~4u;
    v19 = (volatile LONG *)(a1 + 52);
    if ( v18 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v19);
    else
      ExReleaseSpinLockExclusive(v19, v18);
    v2 = a2;
  }
  if ( !v32 && v2 != v8 )
  {
    v20 = v8 - v2;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v20);
    v21 = v20 / v7;
    v22 = (v2 + v27) / v7;
    v23 = v22 & 0x1F;
    v24 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v22 >> 5));
    if ( v20 / v7 + (v22 & 0x1F) > 0x20 )
    {
      if ( (v22 & 0x1F) != 0 )
      {
        _InterlockedAnd(v24, ~(((1 << (32 - (v22 & 0x1F))) - 1) << v23));
        v21 -= 32 - (unsigned int)(v22 & 0x1F);
        ++v24;
      }
      if ( v21 >= 0x20 )
      {
        v25 = v21 >> 5;
        v21 += -32LL * (v21 >> 5);
        do
        {
          *v24++ = 0;
          --v25;
        }
        while ( v25 );
      }
      if ( v21 )
        _InterlockedAnd(v24, -1 << v21);
    }
    else if ( v21 == 32 )
    {
      *v24 = 0;
    }
    else
    {
      _InterlockedAnd(v24, ~(((1 << v21) - 1) << v23));
    }
  }
  return v11;
}
