/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x140958A58
 * Callers:
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x1404D0290 (PspSendJobNotification.c)
 *     PspLockJobExclusiveUnlessRoot @ 0x14077D0F0 (PspLockJobExclusiveUnlessRoot.c)
 *     PspUnlockJobExclusiveUnlessRoot @ 0x14077D1D8 (PspUnlockJobExclusiveUnlessRoot.c)
 *     PspLockRootJobFromProcess @ 0x140959C18 (PspLockRootJobFromProcess.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 */

__int64 __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = 0LL;
  PspLockRootJobFromProcess(a1, CurrentThread, &v11, &v12);
  for ( i = v11; i; i = *(_QWORD *)(i + 1304) )
  {
    PspLockJobExclusiveUnlessRoot(i);
    if ( *(_QWORD *)(i + 552) )
    {
      v7 = (unsigned int)(1 << a2);
      if ( ((unsigned int)v7 & *(_DWORD *)(i + 1104)) != 0 )
        PspSendJobNotification(i, a2, a3, 0);
    }
    PspUnlockJobExclusiveUnlessRoot(i, v7, v8, v9);
  }
  return PspUnlockJobExclusive(v12, CurrentThread);
}
