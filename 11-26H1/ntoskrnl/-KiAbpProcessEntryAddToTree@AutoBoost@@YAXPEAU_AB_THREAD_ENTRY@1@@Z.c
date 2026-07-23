/*
 * XREFs of ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall AutoBoost::KiAbpProcessEntryAddToTree(AutoBoost *this, struct AutoBoost::_AB_THREAD_ENTRY *a2)
{
  _RTL_BALANCED_NODE *v2; // rsi
  unsigned __int64 v3; // r14
  unsigned int *v5; // r8
  unsigned __int64 v6; // rax
  unsigned int *v7; // rbp
  __int64 v8; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rdi
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 Root; // r15
  _SLIST_ENTRY *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // r8
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  signed __int8 v26; // al
  signed __int8 v27; // tt
  signed __int8 v28; // al
  signed __int8 v29; // tt
  signed __int8 v30; // al
  signed __int8 v31; // tt
  bool v32; // zf
  _BYTE *v33; // rax
  _RTL_RB_TREE *v34; // r10
  int v35; // edx
  unsigned int v36; // edx
  int v37; // ecx
  _SLIST_ENTRY *v38; // rax
  BOOLEAN v39; // r8
  int v40; // r9d
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  volatile signed __int8 *v43; // rsi
  __int64 v44; // r8
  char v45; // r9
  _SLIST_ENTRY *v46; // rcx
  int v47; // ecx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned int *v50; // r8
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_RTL_BALANCED_NODE **)this;
  v3 = *(_QWORD *)this >> 4;
  if ( *((char *)this + 36) >= 0 )
  {
    v7 = (unsigned int *)((char *)&unk_140E16400 + 64 * ((*(_QWORD *)this >> 4) & 0x3FFLL));
  }
  else
  {
    v5 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 544LL) + 88LL);
    v6 = v3 % *v5;
    v7 = &v5[4 * v6 + 2 + 2 * v6];
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
      Root = 0LL;
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
    if ( (unsigned __int64)v2 > *(_QWORD *)(v10 + 24) )
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( !v11 || !v12 )
        goto LABEL_16;
    }
    else
    {
      if ( (unsigned __int64)v2 >= *(_QWORD *)(v10 + 24) )
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
  Root = 0LL;
  v14 = 0LL;
  if ( v10 )
    goto LABEL_37;
LABEL_19:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v7, retaddr);
  ++dword_140E26414;
  v10 = (unsigned __int64)RtlpInterlockedPopEntrySList(&SListHead);
  if ( !v10 )
  {
    ++dword_140E26418;
    v10 = guard_dispatch_icall_no_overrides(
            (unsigned int)dword_140E26424,
            (unsigned int)dword_140E2642C,
            (unsigned int)dword_140E26428);
  }
  if ( !v10 )
    return;
  if ( *((char *)this + 36) < 0 )
  {
    v50 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 544LL) + 88LL);
    v51 = v3 % *v50;
    v7 = &v50[4 * v51 + 2 + 2 * v51];
  }
  else
  {
    v7 = (unsigned int *)((char *)&unk_140E16400 + 64 * (v3 & 0x3FF));
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
  v52 = *((_QWORD *)v7 + 1);
  if ( v52 )
  {
    v16 = v52 ^ (unsigned __int64)(v7 + 2);
LABEL_33:
    v17 = v15 & 1;
    while ( v16 )
    {
      if ( (unsigned __int64)v2 < *(_QWORD *)(v16 + 24) )
      {
        v19 = *(_QWORD *)v16;
        if ( !v17 || !v19 )
          goto LABEL_45;
      }
      else
      {
        if ( (unsigned __int64)v2 <= *(_QWORD *)(v16 + 24) )
        {
          v14 = (_SLIST_ENTRY *)v10;
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
  *(_QWORD *)(v10 + 24) = v2;
  v20 = *((_QWORD *)v7 + 2);
  if ( (v20 & 1) != 0 )
  {
    v53 = *((_QWORD *)v7 + 1);
    if ( !v53 )
    {
      RtlRbInsertNodeEx((PRTL_RB_TREE)(v7 + 2), 0LL, 0, (PRTL_BALANCED_NODE)v10);
      goto LABEL_37;
    }
    v21 = v53 ^ (unsigned __int64)(v7 + 2);
  }
  else
  {
    v21 = *((_QWORD *)v7 + 1);
  }
  v22 = 0;
  v23 = v20 & 1;
  if ( !v21 )
    goto LABEL_59;
  while ( 1 )
  {
    if ( (unsigned __int64)v2 < *(_QWORD *)(v21 + 24) )
    {
      v24 = *(_QWORD *)v21;
      if ( v23 )
      {
        if ( !v24 )
          goto LABEL_59;
        v24 ^= v21;
      }
      if ( !v24 )
        goto LABEL_59;
      goto LABEL_55;
    }
    v24 = *(_QWORD *)(v21 + 8);
    if ( v23 )
    {
      if ( !v24 )
        break;
      v24 ^= v21;
    }
    if ( !v24 )
      break;
LABEL_55:
    v21 = v24;
  }
  v22 = 1;
LABEL_59:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(v7 + 2), (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)v10);
LABEL_37:
  v18 = (volatile signed __int32 *)(v10 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v18, 0LL) )
      KxWaitForSpinLockAndAcquire(v18);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v18);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v7, retaddr);
  v25 = *((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2);
  _m_prefetchw((char *)this + 35);
  v26 = *((_BYTE *)this + 35);
  do
  {
    v27 = v26;
    v26 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 35, v26 | 1, v26);
  }
  while ( v27 != v26 );
  if ( (v26 & 1) != 0 )
  {
    do
    {
      while ( (*((_BYTE *)this + 35) & 1) != 0 )
        _mm_pause();
      _m_prefetchw((char *)this + 35);
      v28 = *((_BYTE *)this + 35);
      do
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 35, v28 | 1, v28);
      }
      while ( v29 != v28 );
    }
    while ( (v28 & 1) != 0 );
  }
  *(_QWORD *)this = v10;
  _m_prefetchw((char *)this + 34);
  v30 = *((_BYTE *)this + 34);
  do
  {
    v31 = v30;
    v30 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 34, v30 | 2, v30);
  }
  while ( v31 != v30 );
  v32 = (v30 & 1) == 0;
  v33 = (char *)this + 33;
  if ( !v32 )
  {
    _InterlockedAnd8((volatile signed __int8 *)this + 34, 0xFEu);
    *v33 &= ~4u;
  }
  if ( (*v33 & 4) != 0 )
  {
    v34 = (_RTL_RB_TREE *)(v10 + 56);
    v45 = *(_BYTE *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 195LL);
    if ( v45 > 30 )
      v45 = 30;
    *((_BYTE *)this + 37) = v45;
    v46 = *(_SLIST_ENTRY **)(v10 + 64);
    if ( ((unsigned __int8)v46 & 1) != 0 )
    {
      if ( !v34->Root )
      {
        v39 = 0;
        v43 = (volatile signed __int8 *)(v25 + 792);
        goto LABEL_96;
      }
      Root = (unsigned __int64)v34->Root ^ (unsigned __int64)v34;
    }
    else
    {
      Root = (unsigned __int64)v34->Root;
    }
    v39 = 0;
    v47 = (unsigned __int8)v46 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        while ( *(char *)(Root + 29) - v45 < 0 )
        {
          v48 = *(_QWORD *)Root;
          if ( v47 )
          {
            if ( !v48 )
              goto LABEL_116;
            v48 ^= Root;
          }
          if ( !v48 )
            goto LABEL_116;
          Root = v48;
        }
        v49 = *(_QWORD *)(Root + 8);
        if ( v47 )
        {
          if ( !v49 )
            break;
          v49 ^= Root;
        }
        if ( !v49 )
          break;
        Root = v49;
      }
      v39 = 1;
    }
LABEL_116:
    v43 = (volatile signed __int8 *)(v25 + 792);
  }
  else
  {
    v34 = (_RTL_RB_TREE *)(v10 + 40);
    v35 = 0;
    if ( (*((_DWORD *)this + 10) & 0x3FFFFFFF) != 0 )
    {
      _BitScanReverse(&v36, *((_DWORD *)this + 10) & 0x3FFFFFFF);
      v35 = v36 + 1;
    }
    v37 = *(char *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 563LL);
    if ( v37 > v35 )
    {
      LOBYTE(v35) = 30;
      if ( v37 < 30 )
        LOBYTE(v35) = *(_BYTE *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 563LL);
    }
    *((_BYTE *)this + 37) = v35;
    v38 = *(_SLIST_ENTRY **)(v10 + 48);
    if ( ((unsigned __int8)v38 & 1) != 0 )
    {
      if ( v34->Root )
      {
        Root = (unsigned __int64)v34->Root ^ (unsigned __int64)v34;
        goto LABEL_83;
      }
LABEL_139:
      v39 = 0;
    }
    else
    {
      Root = (unsigned __int64)v34->Root;
LABEL_83:
      v39 = 0;
      v40 = (unsigned __int8)v38 & 1;
      if ( Root )
      {
        while ( 1 )
        {
          while ( (char)v35 - *(char *)(Root + 29) < 0 )
          {
            v41 = *(_QWORD *)Root;
            if ( v40 )
            {
              if ( !v41 )
                goto LABEL_139;
              v41 ^= Root;
            }
            if ( !v41 )
              goto LABEL_139;
            Root = v41;
          }
          v42 = *(_QWORD *)(Root + 8);
          if ( v40 )
          {
            if ( !v42 )
              break;
            v42 ^= Root;
          }
          if ( !v42 )
            break;
          Root = v42;
        }
        v39 = 1;
      }
    }
    v43 = (volatile signed __int8 *)(v25 + 793);
  }
LABEL_96:
  RtlRbInsertNodeEx(v34, (PRTL_BALANCED_NODE)Root, v39, (PRTL_BALANCED_NODE)((char *)this + 8));
  _InterlockedIncrement8(v43);
  *((_BYTE *)this + 32) |= 2u;
  _InterlockedAnd8((volatile signed __int8 *)this + 35, 0xFEu);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 32), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v10 + 32), retaddr);
  if ( v14 )
  {
    ++dword_140E2641C;
    if ( LOWORD(SListHead.Alignment) >= (unsigned __int16)word_140E26410 )
    {
      ++dword_140E26420;
      guard_dispatch_icall_no_overrides(v14, &SListHead, v44);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&SListHead, v14);
    }
  }
}
