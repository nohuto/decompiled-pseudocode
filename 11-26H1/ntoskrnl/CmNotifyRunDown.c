/*
 * XREFs of CmNotifyRunDown @ 0x14094BC20
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     CmpFreeSubordinatePost @ 0x1408D6E80 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmpCancelSubordinatePost @ 0x140AACF20 (CmpCancelSubordinatePost.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmNotifyRunDown(__int64 a1)
{
  _KAFFINITY_EX *v1; // rsi
  __int64 v2; // r13
  _KAFFINITY_EX *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  unsigned __int8 CurrentIrql; // r12
  __int64 v10; // rcx
  _KAFFINITY_EX **v11; // r14
  _KAFFINITY_EX *v12; // rax
  _KAFFINITY_EX **v13; // rdi
  int v14; // eax
  _KAFFINITY_EX *v15; // rdx
  _KPROCESS *Process; // rcx
  bool v17; // dl
  _QWORD *v18; // rcx
  __int16 v19; // ax
  _KAFFINITY_EX *v21; // rdx
  struct _KEVENT *v22; // rcx
  _KAFFINITY_EX *v23; // rcx
  _KAFFINITY_EX ***v24; // rax
  _KAFFINITY_EX **v25; // rdx
  __int64 v26; // rcx
  _KAFFINITY_EX ***v27; // rax
  _KAFFINITY_EX *v28; // rcx
  _KAFFINITY_EX ***v29; // rax
  _KAFFINITY_EX **v30; // rax
  __int128 Src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v32; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  _KPROCESS *v35; // [rsp+70h] [rbp-48h]

  v32 = 0LL;
  v33 = 0LL;
  v1 = (_KAFFINITY_EX *)(a1 + 1240);
  v2 = a1 + 1240;
  result = *(_KAFFINITY_EX **)(a1 + 1240);
  if ( result && result != v1 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v32);
    CmpLockRegistry(v5, v4, v6, v7);
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    }
    if ( *(_QWORD *)&v1->Count )
    {
      while ( 1 )
      {
        v11 = *(_KAFFINITY_EX ***)&v1->Count;
        if ( *(_QWORD *)&v1->Count == v2 )
          break;
        v12 = *v11;
        if ( v11[1] != v1 || (_KAFFINITY_EX **)v12->Bitmap[0] != v11 )
LABEL_50:
          __fastfail(3u);
        *(_QWORD *)&v1->Count = v12;
        v12->Bitmap[0] = (unsigned __int64)v1;
        v13 = v11 - 2;
        v14 = *((_DWORD *)v11 + 10);
        if ( (v14 & 0x10000) != 0 )
        {
          if ( (_WORD)v14 == 2 )
          {
            v15 = v11[6];
            if ( (unsigned __int64 *)v15->StaticBitmap[12] == &v15->StaticBitmap[12] )
            {
              DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v15);
              if ( (_BYTE)KdDebuggerEnabled )
              {
                if ( !(_BYTE)KdDebuggerNotPresent )
                  __debugbreak();
              }
            }
            CurrentThread = KeGetCurrentThread();
            Process = CurrentThread->ApcState.Process;
            v35 = Process;
            v17 = 0;
            if ( Process[1].ReadyTime )
            {
              v19 = WORD2(Process[3].PerProcessorCycleTimes);
              if ( v19 == 332 || v19 == 452 )
                v17 = 1;
            }
            v18 = (_QWORD *)v13[8]->StaticBitmap[12];
            if ( v17 )
            {
              if ( ((unsigned __int8)v18 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              RtlWriteULong64ToUser(v18, 267LL);
            }
            else
            {
              Src = 0x10BuLL;
              if ( ((unsigned __int8)v18 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              RtlCopyToUser(v18, &Src, 0x10uLL);
            }
            v21 = v11[6];
            if ( (unsigned __int64 *)v21->StaticBitmap[12] == &v21->StaticBitmap[12] )
            {
              DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v21);
              if ( (_BYTE)KdDebuggerEnabled )
              {
                if ( !(_BYTE)KdDebuggerNotPresent )
                  __debugbreak();
              }
            }
            v22 = (struct _KEVENT *)v13[8]->Bitmap[0];
            if ( v22 )
            {
              KeSetEvent(v22, 0, 0);
              ObfDereferenceObject((PVOID)v13[8]->Bitmap[0]);
            }
            if ( !KeRemoveQueueApc((__int64)&v13[8]->StaticBitmap[1]) )
            {
              v23 = *v13;
              v24 = (_KAFFINITY_EX ***)v13[1];
              if ( (_KAFFINITY_EX **)(*v13)->Bitmap[0] != v13 || *v24 != v13 )
                goto LABEL_50;
              *v24 = (_KAFFINITY_EX **)v23;
              v23->Bitmap[0] = (unsigned __int64)v24;
              v25 = (_KAFFINITY_EX **)v13[4];
              if ( v25 != v13 + 4 )
              {
                v26 = (__int64)*(v25 - 4);
                v27 = (_KAFFINITY_EX ***)*(v25 - 3);
                if ( *(_KAFFINITY_EX ***)(v26 + 8) != v25 - 4 || *v27 != v25 - 4 )
                  goto LABEL_50;
                *v27 = (_KAFFINITY_EX **)v26;
                *(_QWORD *)(v26 + 8) = v27;
              }
            }
          }
          else
          {
            v28 = *v13;
            v29 = (_KAFFINITY_EX ***)v13[1];
            if ( (_KAFFINITY_EX **)(*v13)->Bitmap[0] != v13 || *v29 != v13 )
              goto LABEL_50;
            *v29 = (_KAFFINITY_EX **)v28;
            v28->Bitmap[0] = (unsigned __int64)v29;
            CmpCancelSubordinatePost(v11 - 2, 0LL);
          }
          CmpFreeSubordinatePost((__int64)v13);
          CmpFreePostBlock(v13);
        }
        else
        {
          v30 = (_KAFFINITY_EX **)v1->Bitmap[0];
          if ( *v30 != v1 )
            goto LABEL_50;
          *v11 = v1;
          v11[1] = (_KAFFINITY_EX *)v30;
          *v30 = (_KAFFINITY_EX *)v11;
          v1->Bitmap[0] = (unsigned __int64)v11;
        }
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    CmpUnlockRegistry(v10);
    return CmCleanupThreadInfo((_KAFFINITY_EX **)&v32);
  }
  return result;
}
