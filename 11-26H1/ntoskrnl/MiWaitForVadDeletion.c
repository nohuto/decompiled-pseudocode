/*
 * XREFs of MiWaitForVadDeletion @ 0x140533514
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MiCleanVad @ 0x140A00E3C (MiCleanVad.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 */

int __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v3; // r9d
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  int result; // eax
  _BYTE v7[8]; // [rsp+20h] [rbp-19h] BYREF
  __int16 v8; // [rsp+28h] [rbp-11h]
  _BYTE v9[13]; // [rsp+2Bh] [rbp-Eh] BYREF
  __int16 v10; // [rsp+38h] [rbp-1h] BYREF
  char v11; // [rsp+3Ah] [rbp+1h]
  int v12; // [rsp+3Ch] [rbp+3h]
  _QWORD v13[10]; // [rsp+40h] [rbp+7h] BYREF

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    memset_0(v7, 0, 0x68uLL);
    v10 = 263;
    v13[1] = v13;
    v11 = 6;
    v13[0] = v13;
    v8 = 1;
    v12 = 0;
    MiInitializeQuotaTracker(v9, KeGetCurrentThread()->ApcState.Process, 0LL);
    MiInsertVadEvent(a1, (__int64)v7, v3);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v10, 18LL);
    return MiLockVad((__int64)CurrentThread, a1, v4, v5);
  }
  return result;
}
