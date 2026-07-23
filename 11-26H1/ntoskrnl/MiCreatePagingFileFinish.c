/*
 * XREFs of MiCreatePagingFileFinish @ 0x140988DEC
 * Callers:
 *     MiCreatePagingFileMap @ 0x14098989C (MiCreatePagingFileMap.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x14047ED48 (MiUpdateControlAreaCommitCount.c)
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MiLogSectionCreate @ 0x14086ED1C (MiLogSectionCreate.c)
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 */

_QWORD *__fastcall MiCreatePagingFileFinish(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rsi
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // r13
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rbx
  _QWORD *result; // rax
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 i; // rcx
  __int64 v26; // rbx
  __int64 *v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rbx
  ULONG_PTR v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+78h] [rbp+10h]
  __int64 v32; // [rsp+80h] [rbp+18h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  v4 = a1[18];
  v5 = *a1;
  v33 = v4;
  v7 = *(_QWORD *)v4;
  v8 = *(_DWORD *)(*a1 + 16LL);
  v31 = *(_QWORD *)v4;
  if ( (v8 & 0x8000000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (unsigned __int64 *)(v7 + 40);
    v11 = a1[1];
    v32 = *(unsigned int *)(v4 + 96);
    --CurrentThread->SpecialApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire(v7 + 40, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    MiUpdateControlAreaCommitCount(v4, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v16, v15);
    v18 = v4 + 128;
    if ( v8 < 0 )
    {
      v7 = v31;
      *(_WORD *)(v31 + 12) |= 0x400u;
      MiWriteControlAreaFlags2(v4, 0x10000, 0x10000, 0);
      if ( v32 )
      {
        v20 = v32;
        v21 = v18 + 48;
        do
        {
          v30 = *(_QWORD *)(v21 - 40);
          *(_DWORD *)v21 = *(_DWORD *)v21 & 0x3FFFFFFF | 0x40000000;
          v22 = a1[15];
          if ( v22 )
          {
            a1[15] = v22 - 1;
            *(_DWORD *)v21 = *(_DWORD *)v21 & 0x3FFFFFFF | 0x80000000;
          }
          MiUpdateSystemProtoPtesTree((_QWORD *)(v21 + 8), 1);
          v23 = 0LL;
          v24 = 0LL;
          if ( *(_DWORD *)(v21 - 4) )
          {
            do
            {
              for ( i = 0LL; ; i = (unsigned int)(i + 1) )
              {
                v26 = (unsigned int)i;
                if ( (unsigned int)i >= 4 )
                  break;
                v27 = &a1[3 * i + 3];
                v28 = *v27;
                if ( *v27 != 0x3FFFFFFFFFLL )
                {
                  MiSimpleUnlinkPageEx((__int64)&a1[3 * i + 3], *v27);
                  v23 = 48 * v28 - 0x220000000000LL;
                  break;
                }
              }
              v29 = MiPageSizes[v26];
              MiUpdateLargePageSectionPfns(v23, v30, *(_DWORD *)(v5 + 32));
              v24 += v29;
              v30 += 8 * v29;
            }
            while ( v24 != *(_DWORD *)(v21 - 4) );
          }
          v21 += 88LL;
          --v20;
        }
        while ( v20 );
        v4 = v33;
        v7 = v31;
      }
    }
    else
    {
      MiInitializePrototypePtes(*(_QWORD *)(v4 + 136));
      MiUpdateSystemProtoPtesTree((_QWORD *)(v4 + 184), 1);
      v7 = v31;
    }
  }
  *(_QWORD *)(v5 + 64) = v4;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[2] + 2128LL)) <= 1 )
    __fastfail(0xEu);
  *(_DWORD *)v5 |= 4u;
  result = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL);
  *(_QWORD *)(v5 + 128) = result;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
    return MiLogSectionCreate((__int64 *)v4, 1);
  return result;
}
