/*
 * XREFs of ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403764A0
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall AutoBoost::KiAbpProcessEntryAddToTree(
        AutoBoost *this,
        struct AutoBoost::_AB_THREAD_ENTRY *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rax
  unsigned int *v7; // rbp
  __int64 v8; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rdi
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  struct _SLIST_ENTRY *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rsi
  signed __int8 v25; // al
  signed __int8 v26; // tt
  signed __int8 v27; // al
  signed __int8 v28; // tt
  signed __int8 v29; // al
  signed __int8 v30; // tt
  bool v31; // zf
  _BYTE *v32; // rax
  unsigned __int64 v33; // r10
  int v34; // edx
  unsigned int v35; // edx
  int v36; // ecx
  _SLIST_ENTRY *v37; // rax
  int v38; // r9d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  volatile signed __int8 *v41; // rsi
  __int64 v42; // r8
  char v43; // r9
  _SLIST_ENTRY *v44; // rcx
  int v45; // ecx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)this;
  v4 = *(_QWORD *)this >> 4;
  if ( *((char *)this + 36) >= 0 )
  {
    v7 = (unsigned int *)((char *)&unk_140E162C0 + 64 * ((*(_QWORD *)this >> 4) & 0x3FFLL));
  }
  else
  {
    a3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 544LL) + 88LL);
    v6 = v4 % *(unsigned int *)a3;
    v7 = (unsigned int *)(a3 + 8 * (v6 + 2 * v6 + 1));
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v7);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)v7);
  }
  v8 = *((_QWORD *)v7 + 2);
  v9 = (unsigned __int64 *)(v7 + 2);
  if ( (v8 & 1) != 0 )
  {
    if ( !*v9 )
    {
      v13 = 0LL;
      v14 = 0LL;
      goto LABEL_19;
    }
    v10 = *v9 ^ (unsigned __int64)v9;
  }
  else
  {
    v10 = *v9;
  }
  v11 = v8 & 1;
  while ( v10 )
  {
    if ( v3 > *(_QWORD *)(v10 + 24) )
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( !v11 || !v12 )
        goto LABEL_16;
    }
    else
    {
      if ( v3 >= *(_QWORD *)(v10 + 24) )
        break;
      v12 = *(_QWORD *)v10;
      if ( !v11 || !v12 )
      {
LABEL_16:
        v10 = v12;
        continue;
      }
    }
    v10 ^= v12;
  }
  v13 = 0LL;
  v14 = 0LL;
  if ( v10 )
    goto LABEL_37;
LABEL_19:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v7, retaddr);
  ++dword_140E262D4;
  v10 = (unsigned __int64)RtlpInterlockedPopEntrySList(&SListHead);
  if ( !v10 )
  {
    ++dword_140E262D8;
    v10 = guard_dispatch_icall_no_overrides(
            (unsigned int)dword_140E262E4,
            (unsigned int)dword_140E262EC,
            (unsigned int)dword_140E262E8);
  }
  if ( !v10 )
    return;
  if ( *((char *)this + 36) < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 544LL) + 88LL);
    v48 = v4 % *(unsigned int *)a3;
    v7 = (unsigned int *)(a3 + 8 * (v48 + 2 * v48 + 1));
  }
  else
  {
    v7 = (unsigned int *)((char *)&unk_140E162C0 + 64 * (v4 & 0x3FF));
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v7);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)v7);
  }
  v15 = *((_QWORD *)v7 + 2);
  if ( (v15 & 1) == 0 )
  {
    v16 = *((_QWORD *)v7 + 1);
    goto LABEL_33;
  }
  v49 = *((_QWORD *)v7 + 1);
  if ( v49 )
  {
    v16 = v49 ^ (unsigned __int64)(v7 + 2);
LABEL_33:
    v17 = v15 & 1;
    while ( v16 )
    {
      if ( v3 < *(_QWORD *)(v16 + 24) )
      {
        v19 = *(_QWORD *)v16;
        if ( !v17 || !v19 )
          goto LABEL_45;
      }
      else
      {
        if ( v3 <= *(_QWORD *)(v16 + 24) )
        {
          v14 = (struct _SLIST_ENTRY *)v10;
          v10 = v16;
          goto LABEL_37;
        }
        v19 = *(_QWORD *)(v16 + 8);
        if ( !v17 || !v19 )
        {
LABEL_45:
          v16 = v19;
          continue;
        }
      }
      v16 ^= v19;
    }
  }
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 48) = 0LL;
  *(_QWORD *)(v10 + 56) = 0LL;
  *(_QWORD *)(v10 + 64) = 0LL;
  *(_DWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 24) = v3;
  v20 = *((_QWORD *)v7 + 2);
  if ( (v20 & 1) != 0 )
  {
    v50 = *((_QWORD *)v7 + 1);
    if ( !v50 )
    {
      LOBYTE(a3) = 0;
      RtlRbInsertNodeEx(v7 + 2, 0LL, a3, v10);
      goto LABEL_37;
    }
    v21 = v50 ^ (unsigned __int64)(v7 + 2);
  }
  else
  {
    v21 = *((_QWORD *)v7 + 1);
  }
  LOBYTE(a3) = 0;
  v22 = v20 & 1;
  if ( !v21 )
    goto LABEL_59;
  while ( 1 )
  {
    if ( v3 < *(_QWORD *)(v21 + 24) )
    {
      v23 = *(_QWORD *)v21;
      if ( v22 )
      {
        if ( !v23 )
          goto LABEL_59;
        v23 ^= v21;
      }
      if ( !v23 )
        goto LABEL_59;
      goto LABEL_55;
    }
    v23 = *(_QWORD *)(v21 + 8);
    if ( v22 )
    {
      if ( !v23 )
        break;
      v23 ^= v21;
    }
    if ( !v23 )
      break;
LABEL_55:
    v21 = v23;
  }
  LOBYTE(a3) = 1;
LABEL_59:
  RtlRbInsertNodeEx(v7 + 2, v21, a3, v10);
LABEL_37:
  v18 = (volatile signed __int32 *)(v10 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(v18, 0LL) )
      KxWaitForSpinLockAndAcquire(v18);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v18);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v7, retaddr);
  v24 = *((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2);
  _m_prefetchw((char *)this + 35);
  v25 = *((_BYTE *)this + 35);
  do
  {
    v26 = v25;
    v25 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 35, v25 | 1, v25);
  }
  while ( v26 != v25 );
  if ( (v25 & 1) != 0 )
  {
    do
    {
      while ( (*((_BYTE *)this + 35) & 1) != 0 )
        _mm_pause();
      _m_prefetchw((char *)this + 35);
      v27 = *((_BYTE *)this + 35);
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 35, v27 | 1, v27);
      }
      while ( v28 != v27 );
    }
    while ( (v27 & 1) != 0 );
  }
  *(_QWORD *)this = v10;
  _m_prefetchw((char *)this + 34);
  v29 = *((_BYTE *)this + 34);
  do
  {
    v30 = v29;
    v29 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 34, v29 | 2, v29);
  }
  while ( v30 != v29 );
  v31 = (v29 & 1) == 0;
  v32 = (char *)this + 33;
  if ( !v31 )
  {
    _InterlockedAnd8((volatile signed __int8 *)this + 34, 0xFEu);
    *v32 &= ~4u;
  }
  if ( (*v32 & 4) != 0 )
  {
    v33 = v10 + 56;
    v43 = *(_BYTE *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 195LL);
    if ( v43 > 30 )
      v43 = 30;
    *((_BYTE *)this + 37) = v43;
    v44 = *(_SLIST_ENTRY **)(v10 + 64);
    if ( ((unsigned __int8)v44 & 1) != 0 )
    {
      if ( !*(_QWORD *)v33 )
      {
        LOBYTE(a3) = 0;
        v41 = (volatile signed __int8 *)(v24 + 792);
        goto LABEL_97;
      }
      v13 = *(_QWORD *)v33 ^ v33;
    }
    else
    {
      v13 = *(_QWORD *)v33;
    }
    LOBYTE(a3) = 0;
    v45 = (unsigned __int8)v44 & 1;
    if ( v13 )
    {
      while ( 1 )
      {
        while ( *(char *)(v13 + 29) - v43 < 0 )
        {
          v46 = *(_QWORD *)v13;
          if ( v45 )
          {
            if ( !v46 )
              goto LABEL_117;
            v46 ^= v13;
          }
          if ( !v46 )
            goto LABEL_117;
          v13 = v46;
        }
        v47 = *(_QWORD *)(v13 + 8);
        if ( v45 )
        {
          if ( !v47 )
            break;
          v47 ^= v13;
        }
        if ( !v47 )
          break;
        v13 = v47;
      }
      LOBYTE(a3) = 1;
    }
LABEL_117:
    v41 = (volatile signed __int8 *)(v24 + 792);
  }
  else
  {
    v33 = v10 + 40;
    v34 = 0;
    if ( (*((_DWORD *)this + 10) & 0x3FFFFFFF) != 0 )
    {
      _BitScanReverse(&v35, *((_DWORD *)this + 10) & 0x3FFFFFFF);
      v34 = v35 + 1;
    }
    v36 = *(char *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 563LL);
    if ( v36 > v34 )
    {
      LOBYTE(v34) = 30;
      if ( v36 < 30 )
        LOBYTE(v34) = *(_BYTE *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 563LL);
    }
    *((_BYTE *)this + 37) = v34;
    v37 = *(_SLIST_ENTRY **)(v10 + 48);
    if ( ((unsigned __int8)v37 & 1) != 0 )
    {
      if ( *(_QWORD *)v33 )
      {
        v13 = *(_QWORD *)v33 ^ v33;
        goto LABEL_83;
      }
LABEL_140:
      LOBYTE(a3) = 0;
    }
    else
    {
      v13 = *(_QWORD *)v33;
LABEL_83:
      LOBYTE(a3) = 0;
      v38 = (unsigned __int8)v37 & 1;
      if ( v13 )
      {
        a3 = (unsigned int)(char)v34;
        while ( 1 )
        {
          while ( (int)a3 - *(char *)(v13 + 29) < 0 )
          {
            v39 = *(_QWORD *)v13;
            if ( v38 )
            {
              if ( !v39 )
                goto LABEL_140;
              v39 ^= v13;
            }
            if ( !v39 )
              goto LABEL_140;
            v13 = v39;
          }
          v40 = *(_QWORD *)(v13 + 8);
          if ( v38 )
          {
            if ( !v40 )
              break;
            v40 ^= v13;
          }
          if ( !v40 )
            break;
          v13 = v40;
        }
        LOBYTE(a3) = 1;
      }
    }
    v41 = (volatile signed __int8 *)(v24 + 793);
  }
LABEL_97:
  RtlRbInsertNodeEx(v33, v13, a3, (char *)this + 8);
  _InterlockedIncrement8(v41);
  *((_BYTE *)this + 32) |= 2u;
  _InterlockedAnd8((volatile signed __int8 *)this + 35, 0xFEu);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 32), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v10 + 32), retaddr);
  if ( v14 )
  {
    ++dword_140E262DC;
    if ( LOWORD(SListHead.Alignment) >= (unsigned __int16)word_140E262D0 )
    {
      ++dword_140E262E0;
      guard_dispatch_icall_no_overrides(v14, &SListHead, v42);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&SListHead, v14);
    }
  }
}
