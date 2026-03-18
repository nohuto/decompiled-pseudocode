/*
 * XREFs of PspInitializeThunkContext @ 0x1409EB378
 * Callers:
 *     PspUserThreadStartup @ 0x1409EB210 (PspUserThreadStartup.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     PspGetBaseTrapFrame @ 0x14046B7C0 (PspGetBaseTrapFrame.c)
 *     KePopulateContinuationContext @ 0x1404B6B70 (KePopulateContinuationContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PspCallThreadNotifyRoutines @ 0x1409EB6AC (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1409EC994 (RtlpWriteExtendedContext.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // r12
  int v2; // r14d
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int64 v7; // rax
  void *v8; // rsp
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  void *v14; // r12
  __int64 v15; // rcx
  void *InstrumentationCallback; // rcx
  void *v18; // rbx
  __int64 BaseTrapFrame; // rax
  unsigned int v21; // [rsp+30h] [rbp+0h] BYREF
  __int64 v22[3]; // [rsp+38h] [rbp+8h] BYREF
  int v23[2]; // [rsp+50h] [rbp+20h] BYREF
  __int64 v24; // [rsp+58h] [rbp+28h]
  __int64 v25; // [rsp+60h] [rbp+30h]
  int v26; // [rsp+68h] [rbp+38h]
  char v27[92]; // [rsp+6Ch] [rbp+3Ch] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+98h]
  _DWORD Src[5]; // [rsp+F0h] [rbp+C0h] BYREF
  __int64 v30; // [rsp+104h] [rbp+D4h]
  int v31; // [rsp+10Ch] [rbp+DCh]
  char v32[24]; // [rsp+110h] [rbp+E0h] BYREF
  __int64 v33; // [rsp+128h] [rbp+F8h]
  int v34; // [rsp+140h] [rbp+110h]
  int v35; // [rsp+144h] [rbp+114h]
  __int16 v36; // [rsp+148h] [rbp+118h]
  int v37; // [rsp+14Ah] [rbp+11Ah]
  int v38; // [rsp+14Eh] [rbp+11Eh]
  __int16 v39; // [rsp+152h] [rbp+122h]
  unsigned __int64 v40; // [rsp+190h] [rbp+160h]
  __int64 v41; // [rsp+198h] [rbp+168h]
  unsigned __int64 v42; // [rsp+1A8h] [rbp+178h]
  __int64 v43; // [rsp+1D8h] [rbp+1A8h]
  void *v44; // [rsp+208h] [rbp+1D8h]
  __int16 v45; // [rsp+210h] [rbp+1E0h]
  int v46; // [rsp+228h] [rbp+1F8h]

  memset_0(v27, 0, 0x7CuLL);
  v22[0] = 0LL;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  v22[1] = (__int64)CurrentThread;
  v1 = (CurrentThread->MiscFlags & 0x100000) != 0 ? 0x800 : 0;
  v2 = (CurrentThread->MiscFlags & 0x100000) != 0 ? 1048667 : 1048603;
  LODWORD(v3) = RtlGetExtendedContextLength2(v2, &v21, v1);
  v6 = (int)v3;
  if ( (int)v3 >= 0 )
  {
    v7 = v21 + 15LL;
    if ( v7 <= v21 )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&v21, 0, v21);
    LODWORD(v3) = RtlInitializeExtendedContext2((__int64)&v21, v2, v22, v1);
    v6 = (int)v3;
    if ( (int)v3 >= 0 )
    {
      memset_0(v32, 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      LOBYTE(v9) = 1;
      LOBYTE(v10) = 1;
      PspCallThreadNotifyRoutines(CurrentThread, v10, v9);
      LOBYTE(v11) = 1;
      LODWORD(v3) = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)&v21, 0, v11, 0);
      v6 = (int)v3;
      if ( (int)v3 >= 0 )
      {
        v12 = v28;
        if ( (v2 & 0x100040) == 0x100040 )
          v12 = (v28 - *(unsigned int *)(v22[0] + 20)) & 0xFFFFFFFFFFFFFFC0uLL;
        v13 = (v12 - 1264) & 0xFFFFFFFFFFFFFFF0uLL;
        v14 = (void *)(v13 + 1232);
        v31 = 0;
        Src[0] = -1232;
        Src[1] = v28 - v13;
        Src[2] = -1232;
        Src[3] = 1232;
        Src[4] = v12 - (v13 + 1232);
        v30 = (unsigned int)(v28 - v12);
        v42 = v13 - 40;
        v15 = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 32LL);
        v34 = 1048587;
        v44 = *(void **)&stru_140FC01F0.ThreadTimerDelay;
        v40 = v13;
        v41 = v15;
        v37 = 2818091;
        v38 = 2818131;
        v39 = 43;
        v36 = 51;
        v35 = 8064;
        v45 = 639;
        v46 = 8064;
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v43 = *(_QWORD *)&stru_140FC01F0.ThreadTimerDelay;
          v44 = InstrumentationCallback;
        }
        LODWORD(v3) = RtlpWriteExtendedContext(
                        (_DWORD)InstrumentationCallback,
                        (int)v13 + 1232,
                        (unsigned int)Src,
                        v2,
                        v22[0]);
        v6 = (int)v3;
        if ( (int)v3 >= 0 )
        {
          RtlCopyToUser(v14, Src, 0x20uLL);
          KePopulateContinuationContext(v33);
          LODWORD(v3) = PspSetContextThreadInternal(CurrentThread, 2);
          v6 = (int)v3;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v3->ApcState.ApcListHead[0].Flink != v3 )
      LODWORD(v3) = KiCheckForKernelApcDelivery(v5, v4);
  }
  if ( v6 < 0 )
  {
    v23[1] = 0;
    v25 = *(_QWORD *)&stru_140FC01F0.ThreadTimerDelay;
    v23[0] = v6;
    v26 = 0;
    v24 = 0LL;
    v18 = (void *)(PspGetBaseTrapFrame((__int64)CurrentThread, 0LL) - 320);
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    LODWORD(v3) = KiDispatchException(v23, v18, BaseTrapFrame, 1, 0);
  }
  return (int)v3;
}
