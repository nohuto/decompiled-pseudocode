/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MiUnlockWsSwapExclusive @ 0x1403FE2C8 (MiUnlockWsSwapExclusive.c)
 *     MiLockWsSwapExclusive @ 0x1403FE9A4 (MiLockWsSwapExclusive.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 PageFilePte; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // edi
  unsigned int v8; // r12d
  __int64 *v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // eax
  signed __int32 v19[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Object; // [rsp+58h] [rbp-B0h]
  __int128 Object_8; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+70h] [rbp-98h]
  __int128 v23; // [rsp+80h] [rbp-88h]
  unsigned int v24; // [rsp+94h] [rbp-74h]
  __int64 *v25; // [rsp+98h] [rbp-70h]
  unsigned __int64 QpcTimeStamp; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v28; // [rsp+B8h] [rbp-50h] BYREF
  char v29; // [rsp+BAh] [rbp-4Eh]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall *v31)(); // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  LONG (__fastcall *v33)(PRKEVENT); // [rsp+E8h] [rbp-20h]
  __int128 *p_Object_8; // [rsp+F0h] [rbp-18h]
  __int16 v35; // [rsp+108h] [rbp+0h]
  char v36; // [rsp+10Ah] [rbp+2h]
  __int128 InputBuffer; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v38; // [rsp+128h] [rbp+20h]

  memset_0(&v28, 0, 0x58uLL);
  v38 = 0LL;
  Object_8 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  QpcTimeStamp = (unsigned __int64)CurrentThread;
  PageFilePte = MiMakePageFilePte(0);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080)) )
  {
    MiLockWsSwapExclusive(CurrentThread, a1);
    v6 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v6 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v5, v4);
    v7 = *(_DWORD *)(a1 + 22296);
    v8 = 0;
    v24 = v7;
    if ( v7 )
    {
      v9 = (__int64 *)(a1 + 22304);
      v25 = (__int64 *)(a1 + 22304);
      do
      {
        v10 = *v9;
        if ( (*(_WORD *)(*v9 + 172) & 0x850) == 0x10 )
        {
          *(_QWORD *)&Object_8 = 393216LL;
          *(_QWORD *)&v22 = (char *)&Object_8 + 8;
          *((_QWORD *)&Object_8 + 1) = (char *)&Object_8 + 8;
          v23 = v8 | 0x200000000000uLL;
          *((_QWORD *)&v22 + 1) = a1;
          v11 = MiPageFileLargestBitmapsRun(v10);
          if ( v11 >= DWORD1(v23) )
          {
            do
            {
              v30 = *(_QWORD *)(a1 + 1072);
              v28 = 18;
              v31 = xHalTimerWatchdogStop;
              v29 = 88;
              v33 = MiTrimUnusedPageFileRegionsApc;
              v35 = 0;
              p_Object_8 = &Object_8;
              v32 = 0LL;
              v36 = 0;
              KeInsertQueueApc((__int64)&v28, (__int64)&Object_8, 0LL, 0);
              KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
              if ( !HIDWORD(v23) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v23) << 12;
              v38 = (unsigned __int64)HIDWORD(v23) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Object_8);
              Object = ZwFsControlFile(
                         *(HANDLE *)(v10 + 192),
                         0LL,
                         MiIrpCompletionApcRoutine,
                         &Object_8,
                         &IoStatusBlock,
                         0x98208u,
                         &InputBuffer,
                         0x18u,
                         0LL,
                         0);
              if ( Object == 259 )
              {
                KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
                Object = IoStatusBlock.Status;
              }
              v12 = MiTransferSoftwarePte(PageFilePte, v10, DWORD2(v23), 3);
              v13 = v12;
              v14 = v12;
              if ( qword_140E2D8C0 && (v12 & 0x10) == 0 )
                v14 = v12 & qword_140E2D8C8;
              v15 = HIDWORD(v14);
              if ( HIDWORD(v23) )
              {
                v16 = HIDWORD(v23);
                do
                {
                  MiReleasePageFileInfo((struct _KEVENT *)a1, v13, 2LL);
                  LODWORD(v15) = v15 + 1;
                  if ( v13 )
                  {
                    v17 = v13;
                    if ( qword_140E2D8C0 )
                    {
                      if ( (v13 & 0x10) != 0 )
                        v17 = v13 & 0xFFFFFFEF;
                      else
                        v17 = v13 & qword_140E2D8C8;
                    }
                  }
                  else
                  {
                    v17 = 0;
                  }
                  v13 = v17 | ((unsigned __int64)(unsigned int)v15 << 32);
                  if ( qword_140E2D8C0 )
                  {
                    if ( (qword_140E2D8C0 & v13) != 0 )
                      v13 |= 0x10uLL;
                    else
                      v13 |= qword_140E2D8C0;
                  }
                  --v16;
                }
                while ( v16 );
              }
              if ( Object < 0 )
                break;
              KeResetEvent((PRKEVENT)&Object_8);
              v18 = HIDWORD(v23) + DWORD2(v23);
              *((_QWORD *)&v23 + 1) = (unsigned int)(HIDWORD(v23) + DWORD2(v23));
            }
            while ( v18 < *(_DWORD *)v10 );
            v9 = v25;
            v7 = v24;
          }
        }
        ++v9;
        ++v8;
        v25 = v9;
      }
      while ( v8 < v7 );
      CurrentThread = (struct _KTHREAD *)QpcTimeStamp;
    }
    --CurrentThread->SpecialApcDisable;
    MiUnlockWsSwapExclusive(CurrentThread, a1);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080));
    *(_QWORD *)(a1 + 1224) = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    _InterlockedOr(v19, 0);
    *(_QWORD *)(a1 + 1216) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 256));
}
