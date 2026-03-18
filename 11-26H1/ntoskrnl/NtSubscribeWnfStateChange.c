/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140948C50
 * Callers:
 *     DifNtSubscribeWnfStateChangeWrapper @ 0x14068F1B0 (DifNtSubscribeWnfStateChangeWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140948D34 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9 = 0LL;
    if ( a4 )
      RtlWriteULong64ToUser(a4, 0LL);
    v7 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v9 & -(__int64)(a4 != 0LL), 0LL, a1);
    if ( v7 >= 0 && a4 )
      RtlWriteULong64ToUser(a4, v9);
  }
  else
  {
    v7 = -1073741796;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
