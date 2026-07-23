/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x140AE4DDC
 * Callers:
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     PspLockJobExclusiveUnlessRoot @ 0x14077FBE4 (PspLockJobExclusiveUnlessRoot.c)
 *     PspUnlockJobExclusiveUnlessRoot @ 0x14077FCCC (PspUnlockJobExclusiveUnlessRoot.c)
 *     PspLockRootJobFromProcess @ 0x1409FF4D8 (PspLockRootJobFromProcess.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 */

void __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v13 = 0LL;
  PspLockRootJobFromProcess(a1, (__int64)CurrentThread, &v12, &v13);
  for ( i = v12; i; i = *(_QWORD *)(i + 1304) )
  {
    PspLockJobExclusiveUnlessRoot(i);
    if ( *(_QWORD *)(i + 552) )
    {
      v9 = (unsigned int)(1 << a2);
      if ( ((unsigned int)v9 & *(_DWORD *)(i + 1104)) != 0 )
        PspSendJobNotification(i, a2, a3, 0);
    }
    PspUnlockJobExclusiveUnlessRoot(i, v9, v10, v11);
  }
  PspUnlockJobExclusive(v13, (__int64)CurrentThread, v6, v7);
}
