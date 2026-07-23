/*
 * XREFs of CmpReportNotifyHelper @ 0x1408D6A50
 * Callers:
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpReportNotifyForKcbStack @ 0x1408D69AC (CmpReportNotifyForKcbStack.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     CmpTransIsTransActive @ 0x14050CC2C (CmpTransIsTransActive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpFreeSubordinatePost @ 0x1408D6E80 (CmpFreeSubordinatePost.c)
 *     CmpNotifyTriggerCheck @ 0x1408D6EE8 (CmpNotifyTriggerCheck.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpAddToDelayedDeref @ 0x140AACF6C (CmpAddToDelayedDeref.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4, _OWORD *a5)
{
  int v5; // r15d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // edx
  unsigned __int8 CurrentIrql; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  _OWORD *v19; // rbp
  int v20; // eax
  __int64 *v21; // r14
  PVOID *v22; // rbx
  PVOID *result; // rax
  __int64 v24; // rax
  PVOID **v25; // rcx
  PVOID *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  PVOID P; // [rsp+20h] [rbp-68h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-60h]
  _OWORD v46[5]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (int)a4;
  p_P = &P;
  P = &P;
  v8 = a1;
  v9 = *(__int16 *)(a1 + 2);
  _mm_lfence();
  if ( (int)v9 >= 2 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v9 - 16);
  else
    v10 = *(_QWORD *)(a1 + 8 * v9 + 8);
  CmLockHive(a2, a2, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
  }
  v13 = a2 + 1592;
LABEL_8:
  while ( 1 )
  {
    v13 = *(_QWORD *)v13;
    if ( !v13 )
      break;
    v14 = *(_QWORD *)(v13 + 32);
    if ( *(_WORD *)(v14 + 12) > *(_WORD *)(v10 + 12) )
      break;
    if ( (v5 & *(_DWORD *)(v13 + 48) & 0x3FFFFFFF) != 0 && ((*(_DWORD *)(v13 + 48) & 0x40000000) != 0 || v14 == v10) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v15) && (!v15 || (unsigned int)CmpTransIsTransActive(v15)) )
      {
        v16 = *(_QWORD *)(v13 + 32);
        v17 = v10;
        v18 = *(_WORD *)(v16 + 12);
        if ( *(_WORD *)(v10 + 12) > v18 )
        {
          do
            v17 = *(_QWORD *)(v17 + 72);
          while ( *(_WORD *)(v17 + 12) > v18 );
        }
        if ( v17 == v16 && (unsigned __int8)CmpNotifyTriggerCheck(v13, v8, a3) )
        {
          memset(v46, 0, 32);
          if ( !a5 )
          {
            *((_QWORD *)&v46[0] + 1) = v46;
            *(_QWORD *)&v46[0] = v46;
          }
          v19 = v46;
          if ( a5 )
            v19 = a5;
          ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
          v20 = *(_DWORD *)(v13 + 48);
          v21 = (__int64 *)(v13 + 16);
          if ( (__int64 *)*v21 == v21 )
          {
            *(_DWORD *)(v13 + 48) = v20 | 0x80000000;
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
            v8 = a1;
            continue;
          }
          *(_DWORD *)(v13 + 48) = v20 & 0x7FFFFFFF;
          while ( 1 )
          {
            do
            {
LABEL_43:
              v27 = *v21;
              if ( (__int64 *)*v21 == v21 )
              {
                ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
                v8 = a1;
                if ( !a5 )
                  CmpSignalDeferredPosts(v19);
                goto LABEL_8;
              }
              if ( *(__int64 **)(v27 + 8) != v21 )
                goto LABEL_41;
              v28 = *(_QWORD *)v27;
              if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
                goto LABEL_41;
              *v21 = v28;
              *(_QWORD *)(v28 + 8) = v21;
              v29 = *(_DWORD *)(v27 + 56);
              if ( (v29 & 0x10000) == 0 )
              {
                v34 = v27;
                do
                {
                  v35 = *(_QWORD *)(v34 + 32);
                  *(_DWORD *)(v35 + 24) &= ~0x10000u;
                  v34 = v35 - 32;
                }
                while ( v34 != v27 );
                v29 = *(_DWORD *)(v27 + 56) | 0x10000;
                *(_DWORD *)(v27 + 56) = v29;
              }
              if ( (_WORD)v29 != 1 )
              {
                v30 = *(_QWORD *)(v27 + 32);
                if ( v30 != v27 + 32 )
                {
                  v31 = *(_QWORD *)(v30 - 32);
                  v32 = v30 - 32;
                  if ( *(_QWORD *)(v31 + 8) != v30 - 32 )
                    goto LABEL_41;
                  v33 = *(_QWORD **)(v30 - 24);
                  if ( *v33 != v32 )
                    goto LABEL_41;
                  *v33 = v31;
                  *(_QWORD *)(v31 + 8) = v33;
                  CmpAddToDelayedDeref(v32, &P, v31);
                }
                v25 = *(PVOID ***)(v27 + 48);
                if ( v25 )
                {
                  v26 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_41;
                  v25[1] = p_P;
                  *v25 = &P;
                  *v26 = v25;
                  p_P = (PVOID *)v25;
                  *(_QWORD *)(v27 + 48) = 0LL;
                }
              }
              v36 = (unsigned __int16)*(_DWORD *)(v27 + 56);
              if ( v36 == 4 )
                break;
              v41 = v36 - 1;
              if ( !v41 )
              {
                v43 = *(_QWORD *)(v27 + 64);
                *(_QWORD *)v27 = 0LL;
                *(_DWORD *)(v43 + 24) = 268;
                KeSetEvent(*(PRKEVENT *)(v27 + 64), 0, 0);
                goto LABEL_43;
              }
              v42 = v41 - 1;
              if ( !v42 )
              {
                KeInsertQueueApc(*(_QWORD *)(v27 + 64) + 16LL, 268LL, v27, 0);
                goto LABEL_43;
              }
            }
            while ( v42 != 1 );
            CmpFreeSubordinatePost(v27);
            v37 = *(_QWORD *)(v27 + 16);
            v38 = (_QWORD *)(v27 + 16);
            if ( *(_QWORD *)(v37 + 8) != v27 + 16 )
              goto LABEL_41;
            v39 = *(_QWORD **)(v27 + 24);
            if ( (_QWORD *)*v39 != v38 )
              goto LABEL_41;
            *v39 = v37;
            *(_QWORD *)(v37 + 8) = v39;
            v40 = (_QWORD *)*((_QWORD *)v19 + 1);
            if ( (_OWORD *)*v40 != v19 )
              goto LABEL_41;
            *v38 = v19;
            *(_QWORD *)(v27 + 24) = v40;
            *v40 = v38;
            *((_QWORD *)v19 + 1) = v38;
          }
        }
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  CmUnlockHive(a2);
  while ( 1 )
  {
    v22 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v24 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
LABEL_41:
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v24 + 8) = &P;
    ObDereferenceObjectDeferDelete(v22[2]);
    ExFreePoolWithTag(v22, 0);
  }
  return result;
}
