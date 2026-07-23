/*
 * XREFs of MiReturnImageBase @ 0x140A85CA8
 * Callers:
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x140AA79E0 (MiFreeRelocations.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiZeroCfgSystemWideBitmap @ 0x140341378 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140A85E84 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(__int64 a1)
{
  unsigned __int64 v1; // r14
  int v3; // eax
  struct _LIST_ENTRY **v4; // r12
  unsigned __int8 *p_Blink; // rsi
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  struct _KLOCK_ENTRIES *v8; // r9
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
    return;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    v3 = *(_DWORD *)(a1 + 16);
    v4 = 0LL;
    switch ( v3 )
    {
      case 1:
        p_Blink = (unsigned __int8 *)&stru_140E2D2D0.Timer.Header.WaitListHead.Blink;
        break;
      case 2:
        p_Blink = &stru_140E2D2D0.ApcStateFill[32];
        v4 = &stru_140E2D2D0.Timer.Header.WaitListHead.Blink;
        break;
      case 3:
        p_Blink = &stru_140E2D2D0.ApcStateFill[32];
        break;
      default:
        p_Blink = (unsigned __int8 *)&stru_140E2D2D0.SystemCallNumber;
        v6 = 0x7FFFFFFF0000LL;
LABEL_8:
        MiZeroCfgSystemWideBitmap(a1, v6 - ((v1 + *(unsigned int *)(a1 + 8)) << 16));
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v9 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0.116 + 4, 0LL, 0LL, v8);
        v11 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D2D0.116 + 1, 0LL);
        v12 = v9;
        if ( v11 )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)((char *)&stru_140E2D2D0.116 + 4),
            v9,
            (__int64)&stru_140E2D2D0.116 + 4);
        if ( v12 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v12, v10);
          else
            *((_BYTE *)v12 + 10) = 1;
        }
        if ( v4 )
          RtlClearBitsEx((__int64)v4, v1, *(unsigned int *)(a1 + 8));
        RtlClearBitsEx((__int64)p_Blink, v1, *(unsigned int *)(a1 + 8));
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4),
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4));
        KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.116 + 4);
        if ( CurrentThread->SpecialApcDisable++ == -1
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v14, v13);
        }
        return;
    }
    v6 = 2013265920LL;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 13) )
    MiReturnSystemImageAddress((v1 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
}
