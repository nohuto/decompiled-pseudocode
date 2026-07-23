/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x140412060
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, void **a4)
{
  unsigned __int64 CurrentStackPointer; // rax
  unsigned int v10; // ebp
  int v11; // eax
  struct _KTHREAD *CurrentThread; // r15
  char v13; // al
  void *volatile *v14; // rcx
  _QWORD *v15; // rax
  void *v16; // rax
  char *v17; // rdx
  char *v18; // rcx
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  char *v20; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  CurrentStackPointer = KeGetCurrentStackPointer(0xFFFF800000000000uLL, a2);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v21, &v20, &v19);
  v10 = v21;
  if ( v21 <= 9 )
  {
    v11 = 929;
    if ( _bittest(&v11, v21) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( v21 != 1
    && (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0
    && (v17 = (char *)KeGetPcr()->Prcb.DpcStack + 80, v18 = &v17[-KeDpcStackSize], (unsigned __int64)v18 <= a2)
    && a2 < (unsigned __int64)v17
    || v21 != 10
    && (!KeAreInterruptsEnabled() || KeGetCurrentIrql() >= 2u)
    && (v17 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80,
        v18 = &v17[-(unsigned int)KeExceptionStackSize],
        a2 < (unsigned __int64)v17)
    && (unsigned __int64)v18 <= a2 )
  {
    *a3 = (unsigned __int64)v17;
    *a1 = (unsigned __int64)v18;
    return 1;
  }
  v13 = 0;
  v14 = a4 + 1;
  if ( !*a4 )
  {
    *a4 = CurrentThread->StackBase;
    *v14 = CurrentThread->StackLimit;
    a4[2] = CurrentThread->KernelStack;
    a4[3] = CurrentThread->InitialStack;
    a4[4] = CurrentThread->KernelShadowStackBase;
    a4[5] = (void *)CurrentThread->KernelShadowStackLimit.AllFields;
    a4[6] = CurrentThread->KernelShadowStack;
    a4[7] = CurrentThread->KernelShadowStackInitial;
    v13 = 1;
  }
  if ( v10 == 1 || v10 == 6 || v10 == 10 )
  {
    if ( v13 )
      goto LABEL_21;
    v14 = a4 + 1;
  }
  v15 = a4[3];
  if ( !v15[2] )
    return 0;
  *(_OWORD *)a4 = *((_OWORD *)v15 + 1);
  *((_OWORD *)a4 + 1) = *((_OWORD *)v15 + 2);
  *((_OWORD *)a4 + 2) = *((_OWORD *)v15 + 3);
  *((_OWORD *)a4 + 3) = *((_OWORD *)v15 + 4);
LABEL_21:
  v16 = *a4;
  if ( (void *volatile)a2 < *v14 || a2 >= (unsigned __int64)v16 )
    return 0;
  *a1 = (unsigned __int64)*v14;
  *a3 = (unsigned __int64)v16;
  return 1;
}
