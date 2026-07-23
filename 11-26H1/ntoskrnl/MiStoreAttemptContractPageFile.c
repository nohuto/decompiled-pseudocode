/*
 * XREFs of MiStoreAttemptContractPageFile @ 0x1404DE9D4
 * Callers:
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiStoreCheckContractPageFile @ 0x1404DEAE8 (MiStoreCheckContractPageFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiStoreAttemptContractPageFile(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  __int16 Object; // [rsp+38h] [rbp-29h] BYREF
  char v4; // [rsp+3Ah] [rbp-27h]
  char v5; // [rsp+3Bh] [rbp-26h]
  int v6; // [rsp+3Ch] [rbp-25h]
  _QWORD v7[3]; // [rsp+40h] [rbp-21h] BYREF
  __int16 v8; // [rsp+58h] [rbp-9h] BYREF
  char v9; // [rsp+5Ah] [rbp-7h]
  unsigned __int64 Count; // [rsp+60h] [rbp-1h]
  void (*v11)(); // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  LONG (__fastcall *v13)(__int64, struct _KEVENT *); // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]
  __int16 v15; // [rsp+A8h] [rbp+47h]
  char v16; // [rsp+AAh] [rbp+49h]

  memset_0(&v8, 0, 0x58uLL);
  v2 = *(struct _EX_RUNDOWN_REF **)(a1 + 224);
  v5 = 0;
  if ( (unsigned int)MiStoreCheckContractPageFile(a1) )
  {
    if ( ExAcquireRundownProtection_0(v2 + 135) )
    {
      Object = 0;
      v7[1] = v7;
      v4 = 6;
      v7[0] = v7;
      v6 = 0;
      Count = v2[134].Count;
      v11 = xHalTimerWatchdogStop;
      v13 = MiStoreContractVirtualPagefileApc;
      v8 = 18;
      v9 = 88;
      v15 = 0;
      v12 = 0LL;
      v14 = a1;
      v16 = 0;
      KeInsertQueueApc((__int64)&v8, (__int64)&Object, 0LL, 0);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      ExReleaseRundownProtection_0(v2 + 135);
    }
  }
}
