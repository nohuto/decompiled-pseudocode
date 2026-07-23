/*
 * XREFs of MiFindSuitableLookasideReplacement @ 0x1402DE320
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceStandbyLookaside @ 0x1402DDCB0 (MiReplaceStandbyLookaside.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetStandbyPageType @ 0x1402ADC40 (MiGetStandbyPageType.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiFindSuitableLookasideReplacement(int a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r13
  int v7; // esi
  int v9; // r11d
  __int64 v10; // rdi
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r15d
  unsigned __int64 v15; // r8
  __int64 v16; // rbx
  ULONG_PTR v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edx
  _QWORD *v21; // rax
  ULONG_PTR v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rbp
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  int StandbyPageType; // [rsp+60h] [rbp+8h]
  int v35; // [rsp+78h] [rbp+20h]

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = 0x3FFFFFFFFFLL;
  v11 = (a4 + 0x220000000000LL) / 48;
  if ( !a1 )
  {
    if ( v11 >= qword_140E34930 && v11 < qword_140E34930 + 2048 )
    {
      v13 = 1;
      goto LABEL_5;
    }
    v12 = 48 * v11 - 0x220000000000LL;
    if ( (*(_DWORD *)(v12 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v12) == 9 )
    {
      v13 = 2;
      goto LABEL_5;
    }
  }
  v13 = 0;
LABEL_5:
  v14 = v13;
  v35 = v13;
  v15 = 0LL;
  StandbyPageType = v13;
  while ( v15 < 0x10 )
  {
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        ++v15;
        if ( v7 )
          v27 = *(_QWORD *)a4;
        else
          v27 = *(_QWORD *)(a4 + 24);
        v17 = v27 & 0xFFFFFFFFFFLL;
      }
      else
      {
        if ( v7 )
        {
          v30 = ((*(_QWORD *)a4 >> 20) | *(_QWORD *)(a4 + 40) & 0xF80000000000000uLL) >> 20;
          v31 = 8LL * (*(_DWORD *)(a4 + 36) & 0xFFE00000);
        }
        else
        {
          v30 = (unsigned __int64)(*(_DWORD *)(a4 + 36) & 0x1FFFFF) << 19;
          v31 = (*(_QWORD *)(a4 + 24) >> 40) & 0x7FFFFLL;
        }
        v17 = v31 | v30;
        ++v15;
      }
    }
    else
    {
      ++v15;
      if ( v7 )
        v16 = *(_QWORD *)(a4 + 24);
      else
        v16 = *(_QWORD *)a4;
      v17 = v16 & 0xFFFFFFFFFFLL;
      if ( v17 == 0x3FFFFFFFFFLL )
      {
LABEL_53:
        if ( v7 )
          break;
        if ( v6 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = 0LL;
        }
        v7 = 1;
        StandbyPageType = v35;
        v17 = v11;
        v15 = 0LL;
        goto LABEL_26;
      }
      if ( v17 >= qword_140E34930 && v17 < qword_140E34930 + 2048 )
      {
        if ( !a5 || v15 > 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v17 - 0x220000000000LL + 24), 0x3FuLL) )
            goto LABEL_53;
          if ( v6 )
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = 48 * v17 - 0x220000000000LL;
        }
        if ( v14 == 2 )
        {
          StandbyPageType = MiGetStandbyPageType(v17);
          goto LABEL_26;
        }
        v32 = *(_QWORD *)(48 * v17 - 0x21FFFFFFFFF0LL);
        if ( qword_140E2D8C0 && (v32 & 0x10) == 0 )
          v32 &= qword_140E2D8C8;
        v17 = (v32 >> 12) & 0xFFFFFFFFFFLL;
        ++v15;
      }
      if ( v17 < qword_140E34930 || v17 >= qword_140E34930 + 2048 )
      {
        v18 = 48 * v17 - 0x220000000000LL;
        if ( (*(_DWORD *)(v18 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v18) == 9 )
          StandbyPageType = 2;
        else
          StandbyPageType = 0;
      }
      else
      {
        StandbyPageType = 1;
      }
    }
    if ( v17 == 0x3FFFFFFFFFLL )
      goto LABEL_53;
    if ( !a5 || v15 > 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v17 - 0x220000000000LL + 24), 0x3FuLL) )
        goto LABEL_53;
      if ( v6 )
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = 48 * v17 - 0x220000000000LL;
    }
    if ( v9 || v17 < qword_140E34930 || v17 >= qword_140E34930 + 2048 )
    {
      if ( v17 < qword_140E34930 || v17 >= qword_140E34930 + 2048 )
      {
        v19 = *(_QWORD *)(48 * v17 - 0x21FFFFFFFFF0LL);
        if ( (v19 & 0x400) != 0 )
        {
          if ( (v19 & 8) == 0 )
            goto LABEL_29;
        }
        else if ( (v19 & 0x10000000) == 0 )
        {
LABEL_29:
          v22 = a2[a3];
          a2[a3] = v17;
          if ( v22 != -1LL && (v22 < qword_140E34930 || v22 >= qword_140E34930 + 2048) )
          {
            v23 = *(_QWORD *)(48 * v22 - 0x21FFFFFFFFF0LL);
            v24 = -9LL;
            if ( (v23 & 0x400) == 0 )
              v24 = -268435457LL;
            v25 = v23 & v24;
            MiPageToNode(v22);
            if ( qword_140E2D868 )
              MiSearchChannelTable(v22);
            *(_QWORD *)(48 * v22 - 0x21FFFFFFFFF0LL) = v25;
          }
          v10 = v17;
          if ( v17 != -1LL && (v17 < qword_140E34930 || v17 >= qword_140E34930 + 2048) )
          {
            v28 = *(_QWORD *)(48 * v17 - 0x21FFFFFFFFF0LL);
            v29 = 8LL;
            if ( (v28 & 0x400) == 0 )
              v29 = 0x10000000LL;
            *(_QWORD *)(48 * v17 - 0x21FFFFFFFFF0LL) = v28 | v29;
            v10 = v17;
          }
          break;
        }
      }
      v20 = 0;
      v21 = a2;
      while ( *v21 != v17 )
      {
        ++v20;
        ++v21;
        if ( v20 >= 0x40 )
        {
          if ( v20 == 64 )
            goto LABEL_29;
          break;
        }
      }
    }
    else
    {
      StandbyPageType = 1;
    }
LABEL_26:
    v14 = StandbyPageType;
    a4 = 48 * v17 - 0x220000000000LL;
  }
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v5) = v10 != 0x3FFFFFFFFFLL;
  return v5;
}
