/*
 * XREFs of MiQueryVaPhysicalContiguity @ 0x1407051A4
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiCheckContiguityTradeEligible @ 0x140705118 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiQueryVaPhysicalContiguity(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  int v11; // r12d
  int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v17; // r8
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int16 v21; // ax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  const __m128i *v24; // rbp
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v30; // [rsp+30h] [rbp-78h] BYREF
  int v31; // [rsp+34h] [rbp-74h]
  int v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned __int64 v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp+10h]
  char v39; // [rsp+C0h] [rbp+18h]

  v4 = a1;
  v30 = 0;
  v5 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v36 = MiPageSizes[a3];
  v6 = a2 - 1;
  v7 = v5 - 0x98000000000LL;
  v8 = (((unsigned __int64)(v6 + (v36 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = -1LL;
  v9 = 0LL;
  v35 = v8;
  v38 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v33 = 0LL;
  v13 = 1;
  v32 = a4 & 1;
  v39 = MiLockWorkingSetShared(a1, v6, 0xFFFFF68000000000uLL);
  while ( v7 <= v8 )
  {
    v15 = 1LL;
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_19;
      MiUnlockPageTableInternal(v4, v9);
      v9 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v7, v35, v39, 1, &v30);
    if ( !NextPageTable )
      goto LABEL_48;
    v14 = (unsigned int)v30;
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v30 )
    {
      v33 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = v33;
      if ( v30 > 1 )
      {
        v17 = (unsigned int)(v30 - 1);
        do
        {
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v17;
        }
        while ( v17 );
        v33 = v10;
      }
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    if ( NextPageTable != v7 )
    {
LABEL_48:
      v11 = 1;
      break;
    }
    if ( v30 )
    {
      v18 = (*(_QWORD *)v10 >> 12) & 0xFFFFFFFFFFLL;
      v19 = (unsigned __int64)((__int64)(v7 << 25) >> 16) >> 12;
      if ( v30 > 0 )
      {
        v20 = (unsigned int)v30;
        do
        {
          v21 = v19;
          v19 >>= 9;
          v22 = v15 * (v21 & 0x1FF);
          v15 <<= 9;
          v18 += v22;
          --v20;
        }
        while ( v20 );
      }
      v12 = 1;
      v15 -= v18 & (v15 - 1);
      goto LABEL_30;
    }
LABEL_19:
    v23 = *(_QWORD *)v7;
    v31 = 0;
    if ( (v23 & 1) != 0 )
    {
      v18 = (v23 >> 12) & 0xFFFFFFFFFFLL;
      v24 = (const __m128i *)(48 * v18 - 0x220000000000LL);
    }
    else
    {
      if ( (v23 & 0xC00) != 0x800
        || (a4 & 2) != 0
        || (v24 = (const __m128i *)MiLockTransitionLeafPageEx(v7, 0LL, 0)) == 0LL )
      {
        v11 = 1;
LABEL_43:
        v4 = a1;
        break;
      }
      v31 = 1;
      v18 = (__int64)v24[0x22000000000LL].m128i_i64 / 48;
    }
    if ( !MiCheckContiguityTradeEligible(v24) )
      v12 = 1;
    if ( v31 )
      _InterlockedAnd64(&v24[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v33;
LABEL_30:
    if ( v34 == -1 )
      v25 = ((v36 - 1) & v18) == 0;
    else
      v25 = v34 == v18;
    if ( !v25 )
    {
      v38 = 1;
      if ( !v32 )
        goto LABEL_43;
    }
    v26 = v18 + v15;
    v4 = a1;
    v34 = v26;
    if ( (v7 & 0x78) == 0 && MiWorkingSetIsContended(a1, 0) || KeShouldYieldProcessor() )
    {
      if ( v9 )
      {
        MiUnlockPageTableInternal(a1, v9);
        v9 = 0LL;
      }
      LOBYTE(v14) = v39;
      MiUnlockWorkingSetShared(a1, v14);
      MiLockWorkingSetShared(a1, v27, v28);
    }
    v7 += 8 * v15;
    v8 = v35;
  }
  if ( v9 )
    MiUnlockPageTableInternal(v4, v9);
  LOBYTE(v14) = v39;
  MiUnlockWorkingSetShared(v4, v14);
  if ( v11 )
  {
    return (unsigned int)(v12 != 0) + 2;
  }
  else if ( v38 )
  {
    return v12 != 0 ? 3 : 0;
  }
  return v13;
}
