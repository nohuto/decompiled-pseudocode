/*
 * XREFs of PspInitializeThunkContext @ 0x1409E7B48
 * Callers:
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     PspGetBaseTrapFrame @ 0x140464F40 (PspGetBaseTrapFrame.c)
 *     KePopulateContinuationContext @ 0x1404AFFC0 (KePopulateContinuationContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PspCallThreadNotifyRoutines @ 0x1409E7E7C (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1409E9164 (RtlpWriteExtendedContext.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG64 v1; // r12
  ULONG v2; // r14d
  $241382875694CED3D471BC5892DE3337 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int64 v7; // rax
  void *v8; // rsp
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // r9d
  unsigned __int64 Rsp; // r8
  unsigned __int64 v13; // rdx
  void *v14; // r12
  unsigned __int64 v15; // rcx
  __int64 InstrumentationCallback; // rcx
  void *v18; // rbx
  __int64 BaseTrapFrame; // rax
  _CONTEXT ContextLength; // [rsp+30h] [rbp+0h] BYREF

  memset_0(&ContextLength.SegEs, 0, 0x7CuLL);
  ContextLength.P2Home = 0LL;
  LODWORD(ContextLength.P1Home) = 0;
  CurrentThread = KeGetCurrentThread();
  ContextLength.P3Home = (unsigned __int64)CurrentThread;
  v1 = (CurrentThread->MiscFlags & 0x100000) != 0 ? 0x800 : 0;
  v2 = (CurrentThread->MiscFlags & 0x100000) != 0 ? 1048667 : 1048603;
  LODWORD(v3) = RtlGetExtendedContextLength2(v2, (PULONG)&ContextLength, v1);
  v6 = (int)v3;
  if ( (int)v3 >= 0 )
  {
    v7 = LODWORD(ContextLength.P1Home) + 15LL;
    if ( v7 <= LODWORD(ContextLength.P1Home) )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&ContextLength, 0, LODWORD(ContextLength.P1Home));
    LODWORD(v3) = RtlInitializeExtendedContext2(&ContextLength, v2, (PCONTEXT_EX *)&ContextLength.P2Home, v1);
    v6 = (int)v3;
    if ( (int)v3 >= 0 )
    {
      memset_0(&ContextLength.R13, 0, sizeof(_CONTEXT));
      --CurrentThread->SpecialApcDisable;
      LOBYTE(v9) = 1;
      LOBYTE(v10) = 1;
      PspCallThreadNotifyRoutines(CurrentThread, v10, v9);
      LOBYTE(v11) = 1;
      LODWORD(v3) = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)&ContextLength, 0, v11, 0);
      v6 = (int)v3;
      if ( (int)v3 >= 0 )
      {
        Rsp = ContextLength.Rsp;
        if ( (v2 & 0x100040) == 0x100040 )
          Rsp = (ContextLength.Rsp - *(unsigned int *)(ContextLength.P2Home + 20)) & 0xFFFFFFFFFFFFFFC0uLL;
        v13 = (Rsp - 1264) & 0xFFFFFFFFFFFFFFF0uLL;
        v14 = (void *)(v13 + 1232);
        HIDWORD(ContextLength.R12) = 0;
        LODWORD(ContextLength.R9) = -1232;
        HIDWORD(ContextLength.R9) = LODWORD(ContextLength.Rsp) - v13;
        ContextLength.R10 = 0x4D0FFFFFB30LL;
        LODWORD(ContextLength.R11) = Rsp - (v13 + 1232);
        *(unsigned __int64 *)((char *)&ContextLength.R11 + 4) = (unsigned int)(LODWORD(ContextLength.Rsp) - Rsp);
        ContextLength.FltSave.FloatRegisters[5].High = v13 - 40;
        v15 = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 32LL);
        ContextLength.Header[1].Low = 0x1F800010000BLL;
        ContextLength.FltSave.XmmRegisters[3].High = *(_QWORD *)&stru_140FC11F0.ThreadTimerDelay;
        ContextLength.Legacy[4] = (_M128A)__PAIR128__(v15, v13);
        *(_DWORD *)((char *)&ContextLength.Header[1].High + 2) = 2818091;
        *(_DWORD *)((char *)&ContextLength.Header[1].High + 6) = 2818131;
        WORD1(ContextLength.Legacy[0].Low) = 43;
        LOWORD(ContextLength.Header[1].High) = 51;
        LOWORD(ContextLength.Xmm4.Low) = 639;
        LODWORD(ContextLength.Xmm5.High) = 8064;
        InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          ContextLength.FltSave.XmmRegisters[0].High = *(_QWORD *)&stru_140FC11F0.ThreadTimerDelay;
          ContextLength.FltSave.XmmRegisters[3].High = InstrumentationCallback;
        }
        LODWORD(v3) = RtlpWriteExtendedContext(
                        InstrumentationCallback,
                        (int)v13 + 1232,
                        (unsigned int)&ContextLength.R9,
                        v2,
                        ContextLength.P2Home);
        v6 = (int)v3;
        if ( (int)v3 >= 0 )
        {
          RtlCopyToUser(v14, &ContextLength.R9, 0x20uLL);
          KePopulateContinuationContext(ContextLength.Rip);
          LODWORD(v3) = PspSetContextThreadInternal(CurrentThread, 2);
          v6 = (int)v3;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v3->ApcState.ApcListHead[0].Flink != v3 )
      LODWORD(v3) = KiCheckForKernelApcDelivery(v5, v4);
  }
  if ( v6 < 0 )
  {
    *(_QWORD *)&ContextLength.ContextFlags = *(_QWORD *)&stru_140FC11F0.ThreadTimerDelay;
    ContextLength.P5Home = (unsigned int)v6;
    *(_DWORD *)&ContextLength.SegCs = 0;
    ContextLength.P6Home = 0LL;
    v18 = (void *)(PspGetBaseTrapFrame((__int64)CurrentThread, 0LL) - 320);
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    LODWORD(v3) = KiDispatchException((NTSTATUS *)&ContextLength.P5Home, v18, BaseTrapFrame, 1, 0);
  }
  return (int)v3;
}
