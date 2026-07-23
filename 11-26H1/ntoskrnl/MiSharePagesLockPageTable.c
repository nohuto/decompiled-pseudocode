/*
 * XREFs of MiSharePagesLockPageTable @ 0x1402E932C
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiReplenishCombineResources @ 0x14047CE9C (MiReplenishCombineResources.c)
 *     MiCheckProcessCombineSequence @ 0x1404919D0 (MiCheckProcessCombineSequence.c)
 *     MiGetCombineDomain @ 0x14049C990 (MiGetCombineDomain.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 */

__int64 __fastcall MiSharePagesLockPageTable(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rbp
  int v7; // r12d
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 valid; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  ULONG_PTR v15; // r14
  const __m128i *v16; // rsi
  int v17; // r12d
  unsigned __int64 v18; // rbp
  __int64 CombineDomain; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // [rsp+20h] [rbp-58h]
  unsigned __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h]
  _QWORD *v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v2 = *a1;
  v4 = *(_QWORD *)(a2 + 16);
  v27 = a1[1];
  v6 = *(_QWORD *)(v27 + 32);
  v7 = *(_DWORD *)(v2 + 140);
  v26 = *(_QWORD **)v2;
  v25 = v2;
  v23 = v6;
  v8 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = a1[7];
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      *((_DWORD *)a1 + 5) |= 8u;
      return 3221226029LL;
    }
    valid = MiLockLowestValidPageTableEx(v6, v8, &v24, 0);
    a1[7] = valid;
    if ( valid != v9 )
    {
      MiUnlockPageTableInternal(v6, valid);
      a1[7] = 0LL;
      return 3221225473LL;
    }
  }
  result = MiReplenishCombineResources(v2);
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)v8;
    v14 = *(_QWORD *)v8 & 1LL;
    if ( (*(_QWORD *)v8 & 1) != 0 )
    {
      v15 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      if ( v15 > qword_140E2D920 || ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
        return 3221225473LL;
      v16 = (const __m128i *)(48 * v15 - 0x220000000000LL);
      LODWORD(v24) = 0;
      while ( _interlockedbittestandset64(&v16[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( v16[1].m128i_i64[1] < 0 );
      }
    }
    else
    {
      if ( (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
        return 3221225473LL;
      v16 = (const __m128i *)MiLockTransitionLeafPageEx(v8);
      if ( !v16 )
        return 3221225473LL;
      v15 = (__int64)v16[0x22000000000LL].m128i_i64 / 48;
    }
    v17 = MiCombineCandidate(v26, v7, v16);
    if ( v17 && (unsigned int)MiPageToNode(v15) == *((_DWORD *)a1 + 4) )
    {
      v18 = (unsigned __int64)v16[1].m128i_i64[0] >> 5;
      if ( (v16[2].m128i_i8[2] & 7) == 6 )
      {
        v22 = v25;
      }
      else
      {
        if ( *(_QWORD *)(a2 + 24) == qword_140E2EBD0 || v17 != 1 )
        {
          v22 = v25;
        }
        else
        {
          CombineDomain = MiGetCombineDomain(1LL, v23, *(_QWORD *)(v27 + 40));
          if ( v21 != CombineDomain
            || (*(_DWORD *)(v20 + 1876) & 0x1000) != 0
            || (v22 = v25, !(unsigned int)MiCheckProcessCombineSequence(v20, *(unsigned int *)(v25 + 288))) )
          {
            result = 3221225496LL;
LABEL_38:
            _InterlockedAnd64(&v16[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            return result;
          }
        }
        if ( (v18 & 0x18) != 0 )
          *((_DWORD *)a1 + 5) |= 4u;
      }
      _InterlockedAnd64(&v16[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( v14 )
      {
        if ( !(unsigned int)MiShareValidPage(a1, a2, v13) )
          return 3221225473LL;
        *((_DWORD *)a1 + 5) |= 0x40u;
      }
      else
      {
        *((_DWORD *)a1 + 5) &= ~0x40u;
      }
      *(_QWORD *)(v22 + 144) = v15;
      *(_DWORD *)(a2 + 32) ^= ((unsigned __int8)v18 ^ (unsigned __int8)*(_DWORD *)(a2 + 32)) & 0x1F;
      return 0LL;
    }
    result = 3221225473LL;
    goto LABEL_38;
  }
  return result;
}
