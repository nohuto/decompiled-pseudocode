/*
 * XREFs of KiLeaveCooperativeIdleSearch @ 0x14044F320
 * Callers:
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 */

char __fastcall KiLeaveCooperativeIdleSearch(__int64 a1, __int64 a2, __int64 i, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v12; // rcx
  unsigned int j; // r9d
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int k; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // dl
  __int64 v29; // r11
  unsigned int v30; // ecx
  __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  char v35; // al
  __int64 v36; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v37; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)i;
  v6 = *(unsigned __int16 *)(i + 8) + 1LL;
  v37 = (volatile signed __int64 *)a2;
  v36 = 0LL;
  v7 = i + 16 * v6;
  v9 = _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v36);
  v10 = i;
  if ( v9 )
    KxWaitForLockOwnerShip((volatile signed __int64)&v36, v9, i);
  if ( !a4 )
  {
    for ( i = *(unsigned __int8 *)(a2 + 1060); ; LOWORD(i) = i + 1 )
    {
      if ( (unsigned __int16)i > *(unsigned __int8 *)(a2 + 1061) )
        goto LABEL_11;
      v26 = *(_QWORD *)(a2 + 8LL * (unsigned __int16)i + 24);
      if ( v26 )
      {
        v9 = v26 & 0xFFFFFFFFFFFFFF80uLL;
        if ( (v26 & 0xFFFFFFFFFFFFFF80uLL) <= (v5 & 0xFFFFFFFFFFFFFF80uLL) && (v26 & 1) == 0 )
          break;
      }
    }
    _m_prefetchw(&v36);
    v27 = v36;
    if ( !v36 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v37, 0LL, (signed __int64)&v36) == &v36 )
        return 0;
      v27 = KxWaitForLockChainValid(&v36, v9, i);
    }
    v36 = 0LL;
    v28 = (unsigned __int8)v37;
    if ( ((v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v27 + 8), (__int64)v37)) & 4) != 0 )
      KeWakeAddressAll();
    return 0;
  }
  v12 = *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24);
  if ( (v12 & 1) == 0 )
  {
    i = *(unsigned __int8 *)(a2 + 1060);
    v9 = -1LL;
    for ( j = -1; (unsigned __int16)i <= *(unsigned __int8 *)(a2 + 1061); LOWORD(i) = i + 1 )
    {
      v14 = *(_QWORD *)(a2 + 8LL * (unsigned __int16)i + 24);
      if ( v14 > v12 && v14 < v9 )
      {
        v9 = *(_QWORD *)(a2 + 8LL * (unsigned __int16)i + 24);
        j = (unsigned __int16)i;
      }
    }
    if ( j == -1 )
    {
      for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(v10 + 10); i = (unsigned int)(i + 1) )
      {
        v15 = v10 + 16LL * (unsigned int)i;
        v9 = a2 + 16LL * (unsigned int)i;
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 1064), ~*(_QWORD *)(v15 + 16));
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 1072), ~*(_QWORD *)(v15 + 24));
      }
    }
    else
    {
      v29 = j;
      LOBYTE(i) = 0;
      v30 = 0;
      v31 = *(_QWORD *)(a2 + 8LL * j + 536);
      if ( *(_WORD *)(v10 + 10) )
      {
        do
        {
          v32 = 16LL * v30;
          v33 = *(_QWORD *)(v32 + v10 + 16);
          if ( v33 )
          {
            LOBYTE(i) = 1;
            _InterlockedOr64((volatile signed __int64 *)(v32 + v31 + 16), v33);
          }
          v34 = *(_QWORD *)(v32 + v10 + 24);
          if ( v34 )
          {
            LOBYTE(i) = 1;
            _InterlockedOr64((volatile signed __int64 *)(v32 + v31 + 24), v34);
          }
          ++v30;
        }
        while ( v30 < *(unsigned __int16 *)(v10 + 10) );
        if ( (_BYTE)i )
        {
          v35 = v9 + 2;
          v9 &= 0xFFFFFFFFFFFFFF80uLL;
          *(_QWORD *)(a2 + 8 * v29 + 24) = v9 | v35 & 0x7E;
        }
      }
    }
  }
LABEL_11:
  if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a1 + 200) )
  {
    for ( k = 0; k < *(unsigned __int16 *)(a2 + 1058); *(_QWORD *)(a2 + 8 * v17 + 1072) = 0LL )
    {
      v17 = k++;
      v17 *= 2LL;
      *(_QWORD *)(a2 + 8 * v17 + 1064) = 0LL;
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24) = 0LL;
  *(_QWORD *)(a2 + 8) &= ~*(_QWORD *)(a1 + 200);
  if ( !*(_QWORD *)(a2 + 8) )
    *(_QWORD *)(a2 + 16) = 128LL;
  _m_prefetchw(&v36);
  v18 = v36;
  if ( v36 )
    goto LABEL_19;
  if ( (__int64 *)_InterlockedCompareExchange64(v37, 0LL, (signed __int64)&v36) != &v36 )
  {
    v18 = KxWaitForLockChainValid(&v36, v9, i);
LABEL_19:
    v36 = 0LL;
    v19 = (unsigned __int8)v37;
    if ( ((v19 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), (__int64)v37)) & 4) != 0 )
      KeWakeAddressAll();
  }
  LOWORD(v20) = *(_WORD *)(v10 + 10);
  v21 = 0;
  if ( (_WORD)v20 )
  {
    do
    {
      v22 = v21++;
      v22 *= 2LL;
      *(_QWORD *)(v10 + 8 * v22 + 16) = 0LL;
      *(_QWORD *)(v10 + 8 * v22 + 24) = 0LL;
      v20 = *(unsigned __int16 *)(v10 + 10);
    }
    while ( v21 < v20 );
  }
  v23 = 0;
  if ( (_WORD)v20 )
  {
    do
    {
      v24 = v23++;
      v24 *= 2LL;
      *(_QWORD *)(v7 + 8 * v24) = 0LL;
      *(_QWORD *)(v7 + 8 * v24 + 8) = 0LL;
    }
    while ( v23 < *(unsigned __int16 *)(v10 + 10) );
  }
  *(_QWORD *)v10 = 0LL;
  return 1;
}
