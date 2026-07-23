/*
 * XREFs of KiSwitchKernelStackAndCallout @ 0x14072D640
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSwitchKernelStackAndCallout(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int64 a7)
{
  char v7; // bl
  void **v8; // r8
  struct _KTHREAD *CurrentThread; // rsi
  char *v10; // r10
  void **v11; // r11
  __int64 v12; // r8
  _BYTE v14[24]; // [rsp+0h] [rbp-18h] BYREF

  v7 = a3;
  v8 = (void **)(a3 & 0xFFFFFFFFFFFFFFFCuLL);
  CurrentThread = KeGetCurrentThread();
  v10 = (char *)*v8;
  v8[4] = v14;
  v11 = v8 - 10;
  v11[5] = &KiSwitchKernelStackContinue;
  v11[8] = v14;
  _disable();
  v8[3] = CurrentThread->StackLimit;
  CurrentThread->InitialStack = v8;
  __writegsqword(0x1A8u, (unsigned __int64)v8);
  CurrentThread->StackBase = v10;
  v12 = (unsigned int)KeKernelLargeStackCommit;
  if ( (v7 & 2) != 0 )
    v12 = (unsigned int)KeKernelLargeStackSize;
  if ( (v7 & 1) == 0 )
    v12 = (unsigned int)KeKernelStackSize;
  CurrentThread->StackLimit = &v10[-v12];
  return KxSwitchKernelStackCallout(a1, a2, v12, a4, a5, a6, a7);
}
