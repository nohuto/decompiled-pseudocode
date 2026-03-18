/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x1408789FC
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockAweVadsExclusive @ 0x1404FEF8C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405251E0 (MiUnlockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x140877584 (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x140878E84 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiCreateProcessDefaultAweInfo(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  volatile _KAFFINITY_EX *ActiveProcessors; // r15
  PVOID v5; // rbx
  __int64 result; // rax
  int v7; // edi
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  v5 = (PVOID)ActiveProcessors[4].StaticBitmap[29];
  P = v5;
  if ( !v5 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, (__int64 *)&P);
    if ( (int)result < 0 )
      return result;
    v7 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v5 = P;
    if ( !Process[2].ActiveProcessors[4].StaticBitmap[29] )
    {
      ActiveProcessors[4].StaticBitmap[29] = (unsigned __int64)P;
      v7 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v7 )
    {
      MiDeleteAweInfo(v5);
      v5 = (PVOID)Process[2].ActiveProcessors[4].StaticBitmap[29];
    }
  }
  *a1 = v5;
  return 0LL;
}
