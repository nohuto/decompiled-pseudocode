/*
 * XREFs of KeTestAlertThread @ 0x1403DA1E0
 * Callers:
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiContinueEx @ 0x1403D8880 (KiContinueEx.c)
 *     NtTestAlert @ 0x140AAF910 (NtTestAlert.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 */

char __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v2; // esi
  char v3; // di
  int Alerted; // eax
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  v3 = 0;
  v6 = 0;
  KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, &v6);
  Alerted = CurrentThread->Alerted;
  if ( _bittest(&Alerted, v2) )
  {
    v3 = 1;
    CurrentThread->Alerted = Alerted & ~(1 << v2);
  }
  else if ( (_BYTE)v2 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPendingAll |= 2u;
  }
  KiReleaseThreadLockLowerIrql((__int64)CurrentThread, v6);
  return v3;
}
