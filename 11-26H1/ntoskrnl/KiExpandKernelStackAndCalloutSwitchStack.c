/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x140262F40
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmGrowKernelStackEx @ 0x1403D4420 (MmGrowKernelStackEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  int v5; // esi
  unsigned __int64 v6; // rbx
  __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  signed __int64 StackLimit; // r13
  __int64 v13; // r12
  _QWORD *InitialStack; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22[6]; // [rsp+38h] [rbp-30h] BYREF
  int v23; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  v21 = 0LL;
  v6 = a3;
  v22[0] = 0LL;
  v23 = 0;
  if ( a3 > (unsigned int)KeMaximumKernelStackExpansionSize )
    return 3221225713LL;
  if ( byte_140FC8BD8 )
  {
    if ( a3 <= 0x11800 )
    {
      v6 = 2 * a3;
      if ( a4 < 0 && v6 > (unsigned int)KeKernelStackSize )
        v6 = (unsigned int)KeKernelStackSize;
    }
  }
  v9 = a5;
  if ( (a4 & 0x40000000) != 0 )
  {
    if ( !a5 || (*(_BYTE *)(a5 + 7) & 1) == 0 )
      return 3221225715LL;
    if ( v6 <= (unsigned int)KeKernelStackSize )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( a5 && (*(_BYTE *)(a5 + 7) & 1) != 0 )
    return 3221225715LL;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  CurrentStackPointer = KeGetCurrentStackPointer();
  StackLimit = (signed __int64)CurrentThread->StackLimit;
  v13 = CurrentStackPointer;
  InitialStack = CurrentThread->InitialStack;
  v15 = InitialStack[1] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !(unsigned __int8)KeAreInterruptsEnabled(InitialStack, v16, v17) )
  {
    CurrentIrql = 15;
    goto LABEL_21;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (v5 & 2) != 0 )
      return 3221225714LL;
    v20 = KeGetCurrentStackPointer();
    if ( !(unsigned __int8)KeQueryCurrentStackInformationEx(v20, &v23, &v21, v22) )
      __fastfail(4u);
    if ( v23 == 1 || v23 == 10 )
    {
      StackLimit = v21;
      v15 = v21;
    }
    else if ( v23 == 5 )
    {
      v5 |= 1u;
    }
    goto LABEL_11;
  }
  if ( CurrentIrql > 2u )
LABEL_21:
    KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
  if ( v6 == (unsigned int)KeKernelStackSize || v6 == 24576 && (unsigned int)KeKernelStackSize >= 0x6000 )
    v5 |= 5u;
LABEL_11:
  if ( v13 - v15 < v6
    || (v5 & 1) != 0
    || v13 - StackLimit < v6 && ((v5 & 0xC0000000) != 0 || (int)MmGrowKernelStackEx(v13, v6) < 0) )
  {
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, v6, v5, v9);
  }
  else
  {
    return 3221226635LL;
  }
}
