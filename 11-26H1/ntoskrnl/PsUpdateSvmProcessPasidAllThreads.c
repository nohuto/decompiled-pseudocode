/*
 * XREFs of PsUpdateSvmProcessPasidAllThreads @ 0x1407F60E4
 * Callers:
 *     ExpAssignPasid @ 0x1408470D8 (ExpAssignPasid.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x140444020 (PspLockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x140847090 (ExSvmUpdateThreadPasidMsrApc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsUpdateSvmProcessPasidAllThreads(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // r13
  unsigned int v6; // esi
  unsigned int *v7; // rbx
  unsigned int v8; // ebp
  char *v9; // r14
  unsigned int v10; // edi
  char *v11; // rdx
  unsigned int v12; // r12d
  unsigned __int64 v13; // rcx
  unsigned int *Pool2; // rax
  _DWORD *v15; // r8
  char *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r13
  struct _KTHREAD *v20; // [rsp+40h] [rbp-58h]
  _DWORD *v22; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v20 = CurrentThread;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread, a3, a4);
  v9 = (char *)(v5 + 880);
  v10 = 0;
  v11 = *(char **)(v5 + 880);
  if ( v11 == (char *)(v5 + 880) )
    goto LABEL_30;
  do
  {
    if ( (*((_DWORD *)v11 + 10) & 1) == 0 && v11[49] >= 0 )
      ++v10;
    v11 = *(char **)v11;
  }
  while ( v11 != v9 );
  if ( !v10 )
    goto LABEL_30;
  v12 = -1;
  v13 = 104LL * v10;
  if ( v13 > 0xFFFFFFFF )
  {
    v8 = -1073741675;
    goto LABEL_30;
  }
  v8 = (int)v13 + 8 < (unsigned int)v13 ? 0xC0000095 : 0;
  if ( (int)v13 + 8 < (unsigned int)v13 )
  {
LABEL_30:
    PspUnlockProcessThreadListShared(v5, CurrentThread);
    goto LABEL_31;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741801;
    goto LABEL_30;
  }
  *Pool2 = v10;
  v15 = Pool2 + 2;
  v16 = *(char **)v9;
  v22 = Pool2 + 2;
  if ( *(char **)v9 != v9 )
  {
    do
    {
      v17 = (__int64)(v16 - 1400);
      if ( (*((_DWORD *)v16 + 10) & 1) == 0 && *(char *)(v17 + 1449) >= 0 )
      {
        v18 = (__int64)&v15[26 * v6];
        *(_QWORD *)(v18 + 88) = v17;
        *(_QWORD *)(v18 + 96) = v7;
        if ( (struct _KTHREAD *)v17 == v20 )
        {
          v12 = v6;
        }
        else
        {
          KeInitializeApc(v18, v17, 0, (__int64)ExSvmUpdateThreadPasidMsrApc, 0LL, 0LL, 0, 0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v18, 0LL, 0LL, 0)
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(v18 + 96), 0xFFFFFFFF) == 1 )
          {
            ExFreePoolWithTag(v7, 0);
            v7 = 0LL;
          }
          v15 = v22;
        }
        ++v6;
      }
      v16 = *(char **)v16;
    }
    while ( v16 != v9 );
    v5 = a1;
  }
  if ( v6 < v10 && !(v6 - v10 + _InterlockedExchangeAdd((volatile signed __int32 *)v7, v6 - v10)) )
  {
    ExFreePoolWithTag(v7, 0);
    v7 = 0LL;
  }
  PspUnlockProcessThreadListShared(v5, v20);
  if ( v12 != -1 )
    ExSvmUpdateThreadPasidMsrApc(&v22[26 * v12], 0LL, 0LL, 0LL, 0LL);
  KeFlushProcessWriteBuffers(0LL);
LABEL_31:
  if ( v7 && !v6 )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
