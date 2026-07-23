/*
 * XREFs of MiSelectImageBase @ 0x14099BC88
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsEx @ 0x140361740 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x140443150 (RtlCopyBitMapEx.c)
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 *     MiSetControlAreaImageRange @ 0x1404B6F4C (MiSetControlAreaImageRange.c)
 *     MiSetControlAreaSystemVa @ 0x1404FFCD0 (MiSetControlAreaSystemVa.c)
 *     RtlMergeBitMapsEx @ 0x14061BB30 (RtlMergeBitMapsEx.c)
 *     MiGetImageWowSubsystemIndex @ 0x14099AB60 (MiGetImageWowSubsystemIndex.c)
 *     MiObtainRelocationBits @ 0x14099C068 (MiObtainRelocationBits.c)
 *     MiBytesToMapSystemImage @ 0x140AC99D8 (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140B0C034 (MiSelectSystemImageAddress.c)
 *     MiSelectOverflowDllBase @ 0x140B4B79C (MiSelectOverflowDllBase.c)
 *     MiImageCanUseHighOverflowArea @ 0x140B4B980 (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, int a3, char a4, unsigned __int64 *a5)
{
  __int64 v5; // r10
  int v6; // esi
  __int64 v8; // rcx
  unsigned int v9; // r15d
  int v10; // r9d
  char v11; // r11
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int16 v15; // r10
  unsigned __int64 ClearBits; // r12
  int v17; // r14d
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 Flink; // r8
  unsigned __int64 *p_Blink; // r12
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int16 v27; // r9
  int ImageWowSubsystemIndex; // eax
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rcx
  bool v35; // zf
  __int64 v36; // [rsp+20h] [rbp-50h]
  __int64 v37; // [rsp+28h] [rbp-48h]
  unsigned __int64 v38; // [rsp+30h] [rbp-40h]
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]
  AutoBoost *v40; // [rsp+38h] [rbp-38h]
  unsigned __int64 RelativeTimerBias; // [rsp+40h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-28h]
  _KPROCESS **p_Process; // [rsp+50h] [rbp-20h] BYREF
  struct _LIST_ENTRY **v44; // [rsp+58h] [rbp-18h]
  unsigned __int64 v45; // [rsp+60h] [rbp-10h] BYREF
  int v46; // [rsp+68h] [rbp-8h]
  int v47; // [rsp+6Ch] [rbp-4h]
  unsigned int v48; // [rsp+B0h] [rbp+40h]

  v5 = *(_QWORD *)a1;
  v6 = 0;
  v47 = 0;
  v37 = v5;
  if ( !_bittest16((const signed __int16 *)(a1 + 12), 0xFu) )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v8 + 51) & 0x10) != 0 && _bittest16((const signed __int16 *)(v8 + 44), 0xDu) )
      v9 = 2;
    else
      v9 = *(_QWORD *)(a1 + 32) <= 0xFFFFFFFFuLL;
    goto LABEL_4;
  }
  ImageWowSubsystemIndex = MiGetImageWowSubsystemIndex(a1);
  if ( ImageWowSubsystemIndex == -1 )
  {
    v9 = 4;
  }
  else
  {
    v9 = ImageWowSubsystemIndex + 3;
    if ( ImageWowSubsystemIndex != 1 )
    {
LABEL_4:
      MiWriteControlAreaFlags2(v5, (v9 & 3) << 20, 3145728, 0);
      v10 = a3;
      v11 = a4;
    }
  }
  v12 = *(_QWORD *)(a1 + 56);
  LODWORD(v13) = *(_DWORD *)(a1 + 8);
  v36 = v12;
  if ( v10 )
  {
    v21 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v13 << 12));
    if ( !v21 )
      return 3221225503LL;
    v12 = v36;
    v13 = v21 >> 12;
  }
  else if ( LODWORD(stru_140E2D2D0.QueueListEntry.Flink) && (*(_DWORD *)(v12 + 76) & 0x40) != 0 )
  {
    if ( (LODWORD(stru_140E2D2D0.QueueListEntry.Flink) >> 12) + (int)v13 >= (unsigned int)v13 )
    {
      LODWORD(v13) = (LODWORD(stru_140E2D2D0.QueueListEntry.Flink) >> 12) + v13;
      goto LABEL_10;
    }
    return 3221225503LL;
  }
LABEL_10:
  v14 = *(_QWORD *)(a1 + 32);
  v15 = -1;
  ClearBits = -1LL;
  v17 = 1;
  if ( (v11 & 1) != 0 )
  {
    v27 = 0;
    goto LABEL_28;
  }
  v18 = (unsigned int)(v13 + 15) >> 4;
  v48 = (unsigned int)(v13 + 15) >> 4;
  v19 = v14 - *(_QWORD *)(a2 + 40);
  v38 = v19;
  if ( !v10 )
  {
    v20 = 13LL;
    if ( (v11 & 2) == 0 && (*(_WORD *)(v12 + 44) & 0x2000) == 0 )
    {
LABEL_13:
      if ( (*(_DWORD *)(v37 + 92) & 0x800000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 32);
LABEL_29:
        v6 = v17;
LABEL_30:
        MiWriteControlAreaFlags2(v37, v6 << 23, 0x800000, 0);
        *a5 = v14;
        return 0LL;
      }
      if ( !v9 )
      {
        v29 = ExGenRandom(1, v18);
        v27 = v48;
        v14 = (v29 % (131073 - (unsigned __int64)(unsigned __int16)v48) + 2146828288) << 16;
        goto LABEL_28;
      }
      if ( _bittest16((const signed __int16 *)(v12 + 44), 0xDu) )
      {
        v14 = MiSelectOverflowDllBase(a1, v19, v9);
      }
      else
      {
        v31 = (unsigned __int64)(unsigned __int8)ExGenRandom(1, v18) << 16;
        v14 = v19 - v31;
        if ( v38 < 0x1000000 )
          v14 = v31 + 0x10000;
      }
      goto LABEL_27;
    }
    p_Process = 0LL;
    LOBYTE(v12) = v9 != 4;
    if ( dword_140FBF220 )
    {
      if ( (unsigned int)MiImageCanUseHighOverflowArea(a1, v19, v12) )
        goto LABEL_42;
      v18 = v48;
    }
    if ( (_BYTE)v12 )
    {
      v44 = 0LL;
      switch ( v9 )
      {
        case 1u:
          Flink = (unsigned __int64)stru_140E2D2D0.Timer.TimerListEntry.Flink;
          p_Blink = (unsigned __int64 *)&stru_140E2D2D0.Timer.Header.WaitListHead.Blink;
          v25 = 2013265920LL;
          break;
        case 2u:
          p_Process = &stru_140E2D2D0.ApcState.Process;
          RelativeTimerBias = stru_140E2D2D0.RelativeTimerBias;
          v25 = 2013265920LL;
          v44 = &stru_140E2D2D0.Timer.Header.WaitListHead.Blink;
          CurrentThread = KeGetCurrentThread();
          CurrentThread->SpecialApcDisable += v15;
          v32 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0.116 + 4, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v20);
          v34 = v32;
          v40 = v32;
          if ( _interlockedbittestandset64((_DWORD *)&stru_140E2D2D0.0 + 1, 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)((char *)&stru_140E2D2D0.116 + 4),
              v32,
              (__int64)&stru_140E2D2D0.116 + 4);
            v34 = v40;
          }
          if ( v34 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v34, v33);
            else
              *((_BYTE *)v34 + 10) = 1;
          }
          RtlCopyBitMapEx((unsigned __int64 *)&stru_140E2D2D0.ApcState.Process, &stru_140E2D2D0.Timer.Header.Lock, 0LL);
          RtlMergeBitMapsEx(
            (unsigned __int64 *)&stru_140E2D2D0.Timer,
            (__int64 *)&stru_140E2D2D0.Timer.Header.WaitListHead.Blink);
          v39 = (unsigned __int16)v48;
          ClearBits = RtlFindClearBitsEx(
                        (unsigned __int64 *)&stru_140E2D2D0.Timer,
                        (unsigned __int16)v48,
                        RelativeTimerBias);
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4),
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4));
          KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.116 + 4);
          v35 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v35
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery((__int64)CurrentThread, v18);
          }
          goto LABEL_24;
        case 3u:
          Flink = stru_140E2D2D0.RelativeTimerBias;
          p_Blink = (unsigned __int64 *)&stru_140E2D2D0.ApcState.Process;
          v25 = 2013265920LL;
          break;
        default:
          Flink = (unsigned __int64)stru_140E2D2D0.TrapFrame;
          p_Blink = (unsigned __int64 *)&stru_140E2D2D0.SystemCallNumber;
          v25 = 0x7FFFFFFF0000LL;
          break;
      }
      p_Process = (_KPROCESS **)p_Blink;
      v39 = (unsigned __int16)v18;
      ClearBits = RtlFindClearBitsEx(p_Blink, (unsigned __int16)v18, Flink);
LABEL_24:
      if ( ClearBits != -1LL )
      {
        v26 = MiObtainRelocationBits(&p_Process, (unsigned __int16)v48, ClearBits);
        ClearBits = v26;
        if ( v26 != -1 )
        {
          v17 = 0;
          v14 = v25 - ((v26 + v39) << 16);
LABEL_27:
          v27 = v48;
LABEL_28:
          v46 = v27;
          v45 = ClearBits;
          MiSetControlAreaImageRange(v37, (__int64)&v45, 0);
          goto LABEL_29;
        }
      }
      v19 = v38;
    }
LABEL_42:
    v12 = v36;
    goto LABEL_13;
  }
  v30 = MiSelectSystemImageAddress();
  v14 = v30;
  if ( v30 )
  {
    v45 = (unsigned __int64)(v30 + 0x800000000000LL) >> 16;
    v46 = (unsigned __int16)v48;
    MiSetControlAreaImageRange(v37, (__int64)&v45, 0);
    MiSetControlAreaSystemVa(v37, a3);
    goto LABEL_30;
  }
  return 3221225626LL;
}
