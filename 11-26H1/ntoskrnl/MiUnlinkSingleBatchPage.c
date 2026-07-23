/*
 * XREFs of MiUnlinkSingleBatchPage @ 0x1402DA130
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiActivateDecayNode @ 0x140298EF4 (MiActivateDecayNode.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402ACBC0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     MiReplaceStandbyLookaside @ 0x1402DDCB0 (MiReplaceStandbyLookaside.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14045B25C (MiUnlinkProtectedStandbyPfn.c)
 *     MiRemoveDecayClusterTimer @ 0x14045B578 (MiRemoveDecayClusterTimer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlinkSingleBatchPage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // r13
  int v4; // r15d
  unsigned __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  ULONG_PTR v9; // rsi
  unsigned int v10; // esi
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // esi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r10
  unsigned int v16; // r8d
  ULONG_PTR v17; // r11
  int v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned int v20; // r8d
  ULONG_PTR v21; // r11
  int v22; // r8d
  unsigned __int64 v23; // rdx
  int v24; // edx
  volatile signed __int64 *v25; // r8
  volatile signed __int64 v26; // rcx
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  int *v29; // rdx
  signed __int64 v30; // rcx
  int v31; // eax
  int v32; // r8d
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r11
  unsigned __int64 v37; // r10
  volatile signed __int32 *v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // r10
  unsigned __int64 v41; // r8
  volatile signed __int32 *v42; // r9
  unsigned __int64 v43; // rcx
  __int64 result; // rax
  unsigned int v45; // r8d
  unsigned __int64 v46; // rdx
  unsigned int v47; // r8d
  unsigned __int64 v48; // rdx
  ULONG_PTR v49; // [rsp+70h] [rbp+8h]

  v3 = *(unsigned __int64 **)(a1 + 48);
  v4 = *(_BYTE *)(a2 + 34) & 7;
  v6 = 0xFFFFDE0000000000uLL;
  v7 = (unsigned __int128)((__int64)(a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = 0x3FFFFFFFFFLL;
  v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v49 = v9;
  if ( v4 == 2 && (*(_DWORD *)(a1 + 4) & 4) == 0
    || (*(__int64 *)(a2 + 40) >= 0 ? ++*(_QWORD *)(a1 + 64) : ++*(_QWORD *)(a1 + 72), v4 == 2) )
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    {
      MiReplaceStandbyLookaside(v9);
      v6 = 0xFFFFDE0000000000uLL;
      v8 = 0x3FFFFFFFFFLL;
    }
    v10 = *(_DWORD *)(a2 + 32);
    v11 = 5LL;
    v12 = 0xFFFFDE0000000030uLL;
    if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a2 + 32) & 0x8000000) == 0 )
      goto LABEL_19;
    if ( a2 < 0xFFFFDE0000000000uLL
      || a2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
      || (v12 = (__int64)(a2 + 0x220000000000LL) / 48, v12 >= qword_140E34930) && v12 < qword_140E34930 + 2048 )
    {
LABEL_10:
      v13 = 5;
      goto LABEL_20;
    }
    if ( (v10 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a2) == 9 )
      v13 = v11;
    else
LABEL_19:
      v13 = HIBYTE(v10) & 7;
LABEL_20:
    if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
    {
      MiUnlinkProtectedStandbyPfn(a2, v12, v8, v11);
      v8 = 0x3FFFFFFFFFLL;
      v14 = 0x3FFFFFFFFFLL;
      v15 = 0x3FFFFFFFFFLL;
      goto LABEL_54;
    }
    v14 = *(_QWORD *)a2 & 0xFFFFFFFFFFLL;
    v15 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFLL;
    if ( v14 == v8 || v14 >= qword_140E34930 && v14 < qword_140E34930 + 2048 )
    {
LABEL_38:
      if ( v15 == v8 || v15 >= qword_140E34930 && v15 < qword_140E34930 + 2048 )
      {
LABEL_54:
        v24 = *(_DWORD *)(a1 + 4);
        if ( (v24 & 0x10) != 0 || v13 >= *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 16484LL) )
        {
          v9 = v49;
        }
        else
        {
          v9 = v49;
          if ( (v24 & 2) == 0 )
            *(_DWORD *)(a2 + 32) |= 0x10000000u;
        }
        goto LABEL_63;
      }
      v20 = *(_DWORD *)(48 * v15 - 0x220000000000LL + 32);
      v21 = 48 * v15 - 0x220000000000LL;
      if ( (*(_QWORD *)(v21 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_42;
      if ( (*(_DWORD *)(v21 + 32) & 0x8000000) != 0 )
      {
        if ( v21 < 0xFFFFDE0000000000uLL
          || v21 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
          || (v23 = (__int64)(48 * v15) / 48, v23 >= qword_140E34930) && v23 < qword_140E34930 + 2048 )
        {
LABEL_42:
          v22 = v11;
LABEL_52:
          if ( v13 != v22 )
          {
            v47 = *(_DWORD *)(v21 + 32);
            if ( (*(_QWORD *)(v21 + 40) & 0x20000000000000LL) == 0 )
            {
              if ( (*(_DWORD *)(v21 + 32) & 0x8000000) == 0
                || v21 >= 0xFFFFDE0000000000uLL
                && v21 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
                && ((v48 = (__int64)(v21 + 0x220000000000LL) / 48, v48 < qword_140E34930)
                 || v48 >= qword_140E34930 + 2048)
                && ((v47 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v21) != 9) )
              {
                LODWORD(v11) = HIBYTE(v47) & 7;
              }
            }
            KeBugCheckEx(0x1Au, 0x8887uLL, a2, v21, (unsigned int)v11 | (unsigned __int64)(v13 << 8));
          }
          v8 = 0x3FFFFFFFFFLL;
          goto LABEL_54;
        }
        if ( (v20 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(48 * v15 - 0x220000000000LL) == 9 )
        {
          v22 = v11;
          goto LABEL_52;
        }
      }
      v22 = HIBYTE(v20) & 7;
      goto LABEL_52;
    }
    v16 = *(_DWORD *)(48 * v14 + v6 + 32);
    v17 = 48 * v14 + v6;
    if ( (*(_QWORD *)(v17 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_26;
    if ( (*(_DWORD *)(v17 + 32) & 0x8000000) != 0 )
    {
      if ( v17 < 0xFFFFDE0000000000uLL
        || v17 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
        || (v19 = (__int64)(48 * v14) / 48, v19 >= qword_140E34930) && v19 < qword_140E34930 + 2048 )
      {
LABEL_26:
        v18 = v11;
LABEL_36:
        if ( v13 != v18 )
        {
          v45 = *(_DWORD *)(v17 + 32);
          if ( (*(_QWORD *)(v17 + 40) & 0x20000000000000LL) == 0 )
          {
            if ( (*(_DWORD *)(v17 + 32) & 0x8000000) == 0
              || v17 >= 0xFFFFDE0000000000uLL
              && v17 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
              && ((v46 = (__int64)(v17 + 0x220000000000LL) / 48, v46 < qword_140E34930) || v46 >= qword_140E34930 + 2048)
              && ((v45 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v17) != 9) )
            {
              LODWORD(v11) = HIBYTE(v45) & 7;
            }
          }
          KeBugCheckEx(0x1Au, 0x8886uLL, a2, v17, (unsigned int)v11 | (unsigned __int64)(v13 << 8));
        }
        v8 = 0x3FFFFFFFFFLL;
        goto LABEL_38;
      }
      if ( (v16 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v17) == 9 )
      {
        v18 = v11;
        goto LABEL_36;
      }
    }
    v18 = HIBYTE(v16) & 7;
    goto LABEL_36;
  }
  v14 = *(_QWORD *)a2 & 0xFFFFFFFFFFLL;
  v15 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFLL;
  if ( v4 == 3 )
  {
    ++*(_QWORD *)(a1 + 80);
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      *(_BYTE *)(a2 + 36) &= 0xF0u;
    else
      ++*(_QWORD *)(a1 + 88);
  }
LABEL_63:
  if ( v14 != v8 )
  {
    v25 = (volatile signed __int64 *)(48 * v14 - 0x21FFFFFFFFE8LL);
    v26 = *v25;
    v27 = _InterlockedCompareExchange64(v25, v15 | *v25 & 0xFFFFFF0000000000uLL, *v25);
    if ( v4 == 2 )
    {
      if ( v26 != v27 )
      {
        do
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange64(v25, v15 ^ v27 & 0xFFFFFF0000000000uLL, v27);
        }
        while ( v28 != v27 );
        v29 = (int *)(a1 + 4);
        v8 = 0x3FFFFFFFFFLL;
        goto LABEL_73;
      }
    }
    else if ( v26 != v27 )
    {
      do
      {
        v30 = v27;
        v27 = _InterlockedCompareExchange64(v25, v15 ^ v27 & 0xFFFFFF0000000000uLL, v27);
      }
      while ( v30 != v27 );
    }
    v29 = (int *)(a1 + 4);
    v8 = 0x3FFFFFFFFFLL;
    goto LABEL_73;
  }
  v29 = (int *)(a1 + 4);
  if ( (*(_DWORD *)(a1 + 4) & 8) == 0 )
    v3[1] = v15;
LABEL_73:
  if ( v15 == v8 )
  {
    if ( (*v29 & 8) == 0 )
      *v3 = v14;
  }
  else
  {
    *(_QWORD *)(48 * v15 - 0x220000000000LL) = v14 | *(_QWORD *)(48 * v15 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  }
  v31 = *v29;
  if ( (*v29 & 1) != 0 )
    ++*(_QWORD *)(a1 + 104);
  if ( (v31 & 0x10) != 0 )
  {
    v32 = *(_DWORD *)(a2 + 32);
    v33 = (*(_QWORD *)(a2 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a2 + 36) & 0x1FFFFF) << 19) & 0xFFFFFFFFFFLL | (((8LL * (*(_DWORD *)(a2 + 36) & 0xFFE00000)) | (((*(_QWORD *)a2 >> 20) | *(_QWORD *)(a2 + 40) & 0xF80000000000000uLL) >> 20)) << 40);
    _InterlockedDecrement((volatile signed __int32 *)(v33 + 88));
    v34 = *(_QWORD *)(v33 + 56);
    if ( *(_DWORD *)(v34 + 128) == 8 )
      _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v34 + 24) + 22080LL));
    *(_DWORD *)(a2 + 32) = v32 & 0xF7FFFFFF;
  }
  else if ( v4 == 2 && (v31 & 2) == 0 )
  {
    MiUnlinkSecondaryListStandbyPage(a2, *(_DWORD *)(a1 + 44), *(_DWORD *)a1 & 1);
    if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
      *(_DWORD *)(a2 + 32) &= ~0x8000000u;
  }
  if ( (*(_DWORD *)(a1 + 4) & 2) != 0 )
  {
    MiRemoveDecayClusterTimer(a2);
  }
  else if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) == 0 )
  {
    v35 = (__int64)(a2 + 0x220000000000LL) / 48;
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
    {
      v36 = ((__int64)(a2 + 0x220000000000LL) / 48) & 0x1F;
      LOBYTE(v37) = 1;
      v38 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v35 >> 5);
      if ( (unsigned __int64)(v36 + 1) > 0x20 )
      {
        if ( (v35 & 0x1F) == 0 )
          goto LABEL_98;
        _InterlockedOr(v38, ((1 << (32 - (v35 & 0x1F))) - 1) << v36);
        v37 = 1LL - (32 - (unsigned int)(v35 & 0x1F));
        ++v38;
        if ( v37 >= 0x20 )
        {
          v39 = v37 >> 5;
          v37 += -32LL * (v37 >> 5);
          do
          {
            *v38++ = -1;
            --v39;
          }
          while ( v39 );
        }
        if ( v37 )
LABEL_98:
          _InterlockedOr(v38, (1 << v37) - 1);
      }
      else
      {
        _InterlockedOr(v38, 1 << v36);
      }
    }
    else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
    {
      v40 = ((__int64)(a2 + 0x220000000000LL) / 48) & 0x1F;
      LOBYTE(v41) = 1;
      v42 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v35 >> 5);
      if ( (unsigned __int64)(v40 + 1) > 0x20 )
      {
        if ( (v35 & 0x1F) == 0 )
          goto LABEL_107;
        _InterlockedAnd(v42, ~(((1 << (32 - (v35 & 0x1F))) - 1) << v40));
        v41 = 1LL - (32 - (unsigned int)(v35 & 0x1F));
        ++v42;
        if ( v41 >= 0x20 )
        {
          v43 = v41 >> 5;
          v41 += -32LL * (v41 >> 5);
          do
          {
            *v42++ = 0;
            --v43;
          }
          while ( v43 );
        }
        if ( v41 )
LABEL_107:
          _InterlockedAnd(v42, -1 << v41);
      }
      else
      {
        _InterlockedAnd(v42, ~(1 << v40));
      }
    }
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 24) &= 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  *(_DWORD *)(a2 + 36) = 0;
  if ( *(_DWORD *)(a1 + 44) == 9 && (*(_DWORD *)(a1 + 4) & 2) == 0 && (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) == 0 )
    MiUpdateLargePageCandidateValue(*(_QWORD *)(a1 + 8), v9, 3, 2, 0LL);
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 4) != 0 )
    ++*(_QWORD *)(a1 + 96);
  return result;
}
