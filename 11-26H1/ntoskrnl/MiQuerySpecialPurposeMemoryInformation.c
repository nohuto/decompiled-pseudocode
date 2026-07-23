/*
 * XREFs of MiQuerySpecialPurposeMemoryInformation @ 0x140884D18
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQuerySpecialPurposeMemoryInformation(
        __int64 a1,
        volatile void *a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  _DWORD *PoolMm; // rsi
  unsigned int v6; // r12d
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v8; // edi
  int v9; // eax
  signed __int64 *v10; // r14
  void *v11; // rdx
  LegacyAutoBoost *v12; // rdi
  signed __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // r14
  _QWORD *v17; // rdx
  unsigned int v18; // r13d
  _QWORD *v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  int CurrentProcessorColor; // eax
  ULONG_PTR v23; // rdx
  _DWORD *v24; // rcx
  char *v25; // r8
  _QWORD *i; // rdx
  unsigned int v27; // r10d
  _QWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int v33; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *v34; // [rsp+40h] [rbp-48h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]
  char v39; // [rsp+A8h] [rbp+20h]

  v39 = (char)a4;
  v4 = a1;
  PoolMm = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  if ( a3 >= 4 )
  {
    if ( (_BYTE)a4 )
      ProbeForWrite(a2, a3, 8u);
    --CurrentThread->SpecialApcDisable;
    v10 = (signed __int64 *)(v4 + 21448);
    v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
    v13 = 17LL;
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v10, 0, v12, (struct _KTHREAD *)v10);
      v13 = 17LL;
    }
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v14 = (unsigned int)(LODWORD(stru_140E2DAB0.Header.WaitListHead.Blink) + 32);
    v35 = v14;
    v15 = v14;
    v33 = LODWORD(stru_140E2DAB0.Header.WaitListHead.Blink) + 32;
    v16 = (_QWORD *)(a1 + 21400);
    v17 = *(_QWORD **)(a1 + 21400);
    if ( v17 != (_QWORD *)(a1 + 21400) )
    {
      v18 = v14;
      do
      {
        v15 += v14;
        v18 += v14;
        v19 = v17 + 3;
        v20 = 4LL;
        do
        {
          v21 = v15 + 16;
          if ( *v19 == -1LL )
            v21 = v15;
          v15 = v21;
          ++v19;
          --v20;
        }
        while ( v20 );
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != v16 );
      v33 = v18;
      v6 = 0;
      CurrentThread = v34;
    }
    if ( v15 > 0xFFFFFFFF )
    {
      v8 = -1073741675;
      v9 = 1;
      v4 = a1;
      goto LABEL_36;
    }
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_DWORD *)ExAllocatePoolMm(256LL, v23, 1901291853, CurrentProcessorColor | 0x80000000);
    if ( PoolMm )
    {
      if ( v15 <= a3 )
      {
        v24 = PoolMm;
        v25 = (char *)PoolMm + v33;
        for ( i = (_QWORD *)*v16; i != v16; i = (_QWORD *)*i )
        {
          *v24 = v35;
          v24[1] = 32;
          v24[3] = (_DWORD)v25 - (_DWORD)v24;
          *((_QWORD *)v24 + 3) = i[2];
          if ( i[9] )
            v24[2] |= 1u;
          v27 = 0;
          v28 = i + 3;
          do
          {
            if ( *v28 != -1LL )
            {
              *(_DWORD *)v25 = v27;
              *((_QWORD *)v25 + 1) = *v28;
              ++v24[4];
              v25 += 16;
            }
            ++v27;
            ++v28;
          }
          while ( v27 < 4 );
          v24 = (_DWORD *)((char *)v24 + v35);
        }
        v6 = v15;
        v8 = 0;
      }
      else
      {
        *PoolMm = v15;
        v8 = -1073741789;
        v6 = 4;
      }
    }
    else
    {
      v8 = -1073741670;
    }
    v9 = 1;
    v4 = a1;
  }
  else
  {
    v8 = -1073741820;
    v9 = 0;
  }
  v13 = 17LL;
LABEL_36:
  if ( v9 )
  {
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 21448), 0LL, v13) )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 21448));
    KeAbPostRelease(v4 + 21448);
    v31 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v31 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v30, v29);
  }
  if ( v6 )
  {
    if ( v39 )
      RtlCopyToUser((void *)a2, PoolMm, v6);
    else
      RtlCopyVolatileMemory((void *)a2, PoolMm, v6);
  }
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
  return v8;
}
