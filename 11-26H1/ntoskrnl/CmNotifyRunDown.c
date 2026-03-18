/*
 * XREFs of CmNotifyRunDown @ 0x140ABE29C
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     KeRemoveQueueApc @ 0x140467790 (KeRemoveQueueApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     CmpFreeSubordinatePost @ 0x1408D08C0 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1408D1020 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     CmpCancelSubordinatePost @ 0x140AAF2D0 (CmpCancelSubordinatePost.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmNotifyRunDown(__int64 a1)
{
  _KAFFINITY_EX *v1; // rsi
  __int64 v2; // r13
  _KAFFINITY_EX *result; // rax
  __int64 v4; // rcx
  int v5; // edx
  unsigned __int8 CurrentIrql; // r12
  __int64 v7; // rcx
  _KAFFINITY_EX **v8; // r14
  _KAFFINITY_EX *v9; // rax
  _KAFFINITY_EX **v10; // rdi
  int v11; // eax
  _KAFFINITY_EX *v12; // rdx
  _KPROCESS *Process; // rcx
  bool v14; // dl
  _QWORD *v15; // rcx
  __int16 v16; // ax
  _KAFFINITY_EX *v18; // rdx
  struct _KEVENT *v19; // rcx
  _KAFFINITY_EX *v20; // rcx
  _KAFFINITY_EX ***v21; // rax
  _KAFFINITY_EX **v22; // rdx
  __int64 v23; // rcx
  _KAFFINITY_EX ***v24; // rax
  _KAFFINITY_EX *v25; // rcx
  _KAFFINITY_EX ***v26; // rax
  _KAFFINITY_EX **v27; // rax
  __int128 Src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v29; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  _KPROCESS *v32; // [rsp+70h] [rbp-48h]

  v29 = 0LL;
  v30 = 0LL;
  v1 = (_KAFFINITY_EX *)(a1 + 1240);
  v2 = a1 + 1240;
  result = *(_KAFFINITY_EX **)(a1 + 1240);
  if ( result && result != v1 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v29);
    CmpLockRegistry(v4);
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    if ( *(_QWORD *)&v1->Count )
    {
      while ( 1 )
      {
        v8 = *(_KAFFINITY_EX ***)&v1->Count;
        if ( *(_QWORD *)&v1->Count == v2 )
          break;
        v9 = *v8;
        if ( v8[1] != v1 || (_KAFFINITY_EX **)v9->Bitmap[0] != v8 )
LABEL_50:
          __fastfail(3u);
        *(_QWORD *)&v1->Count = v9;
        v9->Bitmap[0] = (unsigned __int64)v1;
        v10 = v8 - 2;
        v11 = *((_DWORD *)v8 + 10);
        if ( (v11 & 0x10000) != 0 )
        {
          if ( (_WORD)v11 == 2 )
          {
            v12 = v8[6];
            if ( (unsigned __int64 *)v12->StaticBitmap[12] == &v12->StaticBitmap[12] )
            {
              DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
              if ( (_BYTE)KdDebuggerEnabled )
              {
                if ( !(_BYTE)KdDebuggerNotPresent )
                  __debugbreak();
              }
            }
            CurrentThread = KeGetCurrentThread();
            Process = CurrentThread->ApcState.Process;
            v32 = Process;
            v14 = 0;
            if ( Process[1].ReadyTime )
            {
              v16 = WORD2(Process[3].PerProcessorCycleTimes);
              if ( v16 == 332 || v16 == 452 )
                v14 = 1;
            }
            v15 = (_QWORD *)v10[8]->StaticBitmap[12];
            if ( v14 )
            {
              if ( ((unsigned __int8)v15 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              RtlWriteULong64ToUser(v15, 267LL);
            }
            else
            {
              Src = 0x10BuLL;
              if ( ((unsigned __int8)v15 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              RtlCopyToUser(v15, &Src, 0x10uLL);
            }
            v18 = v8[6];
            if ( (unsigned __int64 *)v18->StaticBitmap[12] == &v18->StaticBitmap[12] )
            {
              DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v18);
              if ( (_BYTE)KdDebuggerEnabled )
              {
                if ( !(_BYTE)KdDebuggerNotPresent )
                  __debugbreak();
              }
            }
            v19 = (struct _KEVENT *)v10[8]->Bitmap[0];
            if ( v19 )
            {
              KeSetEvent(v19, 0, 0);
              ObfDereferenceObject((PVOID)v10[8]->Bitmap[0]);
            }
            if ( !KeRemoveQueueApc((__int64)&v10[8]->StaticBitmap[1]) )
            {
              v20 = *v10;
              v21 = (_KAFFINITY_EX ***)v10[1];
              if ( (_KAFFINITY_EX **)(*v10)->Bitmap[0] != v10 || *v21 != v10 )
                goto LABEL_50;
              *v21 = (_KAFFINITY_EX **)v20;
              v20->Bitmap[0] = (unsigned __int64)v21;
              v22 = (_KAFFINITY_EX **)v10[4];
              if ( v22 != v10 + 4 )
              {
                v23 = (__int64)*(v22 - 4);
                v24 = (_KAFFINITY_EX ***)*(v22 - 3);
                if ( *(_KAFFINITY_EX ***)(v23 + 8) != v22 - 4 || *v24 != v22 - 4 )
                  goto LABEL_50;
                *v24 = (_KAFFINITY_EX **)v23;
                *(_QWORD *)(v23 + 8) = v24;
              }
            }
          }
          else
          {
            v25 = *v10;
            v26 = (_KAFFINITY_EX ***)v10[1];
            if ( (_KAFFINITY_EX **)(*v10)->Bitmap[0] != v10 || *v26 != v10 )
              goto LABEL_50;
            *v26 = (_KAFFINITY_EX **)v25;
            v25->Bitmap[0] = (unsigned __int64)v26;
            CmpCancelSubordinatePost((__int64)(v8 - 2), 0LL);
          }
          CmpFreeSubordinatePost((__int64)v10);
          CmpFreePostBlock(v10);
        }
        else
        {
          v27 = (_KAFFINITY_EX **)v1->Bitmap[0];
          if ( *v27 != v1 )
            goto LABEL_50;
          *v8 = v1;
          v8[1] = (_KAFFINITY_EX *)v27;
          *v27 = (_KAFFINITY_EX *)v8;
          v1->Bitmap[0] = (unsigned __int64)v8;
        }
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    CmpUnlockRegistry(v7);
    return CmCleanupThreadInfo((_KAFFINITY_EX **)&v29);
  }
  return result;
}
