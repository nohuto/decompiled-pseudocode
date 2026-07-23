/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x14042DC6C
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x14042DBF0 (ExSetResourceOwnerPointer.c)
 *     ExSetResourceOwnerPointerEx @ 0x14042DC30 (ExSetResourceOwnerPointerEx.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402055E0 (PsBoostThreadIoQoS.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140300FE0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ExpGetThreadResourceHint @ 0x14042E190 (ExpGetThreadResourceHint.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1406CAF5C (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, char a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  unsigned int ThreadResourceHint; // eax
  ULONG_PTR *v16; // rdx
  unsigned __int64 v17; // r8
  struct _SINGLE_LIST_ENTRY *v18; // r9
  ULONG_PTR v19; // rsi
  struct _KTHREAD *v20; // rcx
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rsi
  ULONG_PTR v23; // rax
  int v24; // eax
  int v25; // r15d
  LegacyAutoBoost *v26; // r14
  unsigned int v27; // ebx
  unsigned int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  LegacyAutoBoost *v31; // rdi
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // r8
  struct _SINGLE_LIST_ENTRY *v35; // r9
  unsigned int v36; // ebx
  __int64 v37; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+80h] [rbp+8h]
  int v40; // [rsp+80h] [rbp+8h]
  unsigned int v41; // [rsp+80h] [rbp+8h]
  unsigned int v42; // [rsp+98h] [rbp+20h]
  int v43; // [rsp+98h] [rbp+20h]
  unsigned int v44; // [rsp+98h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v7 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(BugCheckParameter1 + 96), &LockHandle);
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    v44 = *(_DWORD *)(BugCheckParameter1 + 56);
    v41 = v44;
    if ( ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(struct _KTHREAD **)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, (ULONG_PTR)CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (struct _KTHREAD *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          (ULONG_PTR)CurrentThread,
          BugCheckParameter4);
      ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      v41 = v44 | 2;
    }
    else
    {
      v36 = v44;
      v37 = *(_QWORD *)(BugCheckParameter1 + 48);
      if ( (v44 & 1) != 0 )
      {
        LOBYTE(v33) = 1;
        PsBoostThreadIo(*(LegacyAutoBoost **)(BugCheckParameter1 + 48), v33, v34, v35);
        v36 = v44 & 0xFFFFFFFE;
        v41 = v44 & 0xFFFFFFFE;
      }
      if ( (v36 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v37 + 1508));
        v41 = v36 & 0xFFFFFFFB;
      }
    }
    if ( v41 != v44 )
      *(_DWORD *)(BugCheckParameter1 + 56) = v41;
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x9114u);
    v29 = v7 != 0 ? 65824 : 65792;
  }
  else
  {
    v8 = BugCheckParameter1 + 48;
    v9 = *(_QWORD *)(BugCheckParameter1 + 48);
    v10 = (__int64 *)(BugCheckParameter1 + 16);
    if ( v9 != BugCheckParameter4 )
    {
      v11 = *v10;
      v12 = v9 != 0;
      v13 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( *v10 && (v14 = v11 + 16LL * *(unsigned int *)(v11 + 8), v8 = v11 + 16, v12 < v13) )
      {
        while ( *(_QWORD *)v8 != BugCheckParameter4 )
        {
          if ( !*(_QWORD *)v8 || (++v12, v12 != v13) )
          {
            v8 += 16LL;
            if ( v8 != v14 )
              continue;
          }
          goto LABEL_5;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v8 - *(_DWORD *)v10) >> 4;
      }
      else
      {
LABEL_5:
        v8 = 0LL;
      }
    }
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v10);
    v19 = BugCheckParameter1 + 48;
    v20 = *(struct _KTHREAD **)(BugCheckParameter1 + 48);
    if ( v20 != CurrentThread )
    {
      v17 = v20 != 0LL;
      if ( !ThreadResourceHint
        || (v21 = *v16) == 0
        || ThreadResourceHint >= *(_DWORD *)(v21 + 8)
        || (v19 = v21 + 16LL * ThreadResourceHint, *(struct _KTHREAD **)v19 != CurrentThread) )
      {
        v22 = *v16;
        v18 = (struct _SINGLE_LIST_ENTRY *)(*(unsigned int *)(BugCheckParameter1 + 64)
                                          + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72));
        if ( !*v16 || (v23 = v22 + 16LL * *(unsigned int *)(v22 + 8), v19 = v22 + 16, v17 >= (unsigned __int64)v18) )
LABEL_13:
          KeBugCheckEx(0xE3u, BugCheckParameter1, (ULONG_PTR)CurrentThread, *v16, 4uLL);
        while ( *(struct _KTHREAD **)v19 != CurrentThread )
        {
          if ( !*(_QWORD *)v19 || (++v17, (struct _SINGLE_LIST_ENTRY *)v17 != v18) )
          {
            v19 += 16LL;
            if ( v19 != v23 )
              continue;
          }
          goto LABEL_13;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v19 - *(_DWORD *)v16) >> 4;
      }
    }
    if ( !v19 )
      goto LABEL_13;
    v24 = *(_DWORD *)(v19 + 8);
    v25 = a3 & 1;
    if ( v8 )
    {
      v40 = *(_DWORD *)(v19 + 8);
      v43 = *(_DWORD *)(v8 + 8);
      if ( v25 )
      {
        if ( (struct _KTHREAD *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(0x132u, BugCheckParameter1, *v16, (ULONG_PTR)CurrentThread, BugCheckParameter4);
        v30 = *(_DWORD *)(v19 + 8);
        v32 = *(_DWORD *)(v8 + 8);
        if ( (v24 & 1) != 0 )
        {
          if ( (v43 & 1) != 0 )
          {
            LOBYTE(v16) = 1;
            PsBoostThreadIo(*(LegacyAutoBoost **)v19, (__int64)v16, v17, v18);
          }
          else
          {
            v32 = v43 | 1;
          }
          v30 = v40 & 0xFFFFFFFE;
        }
        if ( (v30 & 4) != 0 )
        {
          if ( (v32 & 4) != 0 )
            PsBoostThreadIoQoS(*(AutoBoost **)v19, 1LL, v17, v18);
          else
            v32 |= 4u;
          v30 &= ~4u;
        }
        if ( (v32 & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v19, 0x746C6644u);
          v32 |= 2u;
        }
      }
      else
      {
        v30 = *(_DWORD *)(v19 + 8);
        v31 = *(LegacyAutoBoost **)v19;
        if ( (v24 & 1) != 0 )
        {
          LOBYTE(v16) = 1;
          PsBoostThreadIo(*(LegacyAutoBoost **)v19, (__int64)v16, v17, v18);
          v30 = v40 & 0xFFFFFFFE;
        }
        if ( (v30 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v31 + 377);
          v30 &= ~4u;
        }
        v32 = v43;
      }
      *(_DWORD *)(v8 + 8) = v32 & 7 | (v30 + (v32 & 0xFFFFFFF8)) & 0xFFFFFFF8;
      *(_DWORD *)(v19 + 8) = v30 & 7;
      *(_QWORD *)v19 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
      v28 = 37148;
    }
    else
    {
      v42 = *(_DWORD *)(v19 + 8);
      v39 = v42;
      if ( v25 )
      {
        if ( (struct _KTHREAD *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(0x132u, BugCheckParameter1, *v16, (ULONG_PTR)CurrentThread, BugCheckParameter4);
        ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        v39 = v42 | 2;
      }
      else
      {
        v26 = *(LegacyAutoBoost **)v19;
        v27 = *(_DWORD *)(v19 + 8);
        if ( (v24 & 1) != 0 )
        {
          LOBYTE(v16) = 1;
          PsBoostThreadIo(*(LegacyAutoBoost **)v19, (__int64)v16, v17, v18);
          v27 &= ~1u;
          v39 = v27;
        }
        if ( (v27 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v26 + 377);
          v39 = v27 & 0xFFFFFFFB;
        }
      }
      if ( v39 != v42 )
        *(_DWORD *)(v19 + 8) = v39;
      *(_QWORD *)v19 = BugCheckParameter4;
      v28 = 37144;
    }
    __incgsdword(v28);
    v29 = 65792;
    if ( v7 )
      v29 = 65856;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
    PerfLogExecutiveResourceSetOwnerPointer(v29, BugCheckParameter1);
}
