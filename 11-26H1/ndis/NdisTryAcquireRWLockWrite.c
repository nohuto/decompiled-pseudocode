/*
 * XREFs of NdisTryAcquireRWLockWrite @ 0x1400C5F60
 * Callers:
 *     ?ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C5CA0 (-ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NdisTryAcquireRWLockWrite(KSPIN_LOCK *a1, KIRQL *a2, char a3)
{
  KSPIN_LOCK *v3; // rsi
  KIRQL v7; // al
  char result; // al
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx

  v3 = a1 + 2;
  if ( !KeTestSpinLock(a1 + 2) )
    return 0;
  if ( (a3 & 1) != 0 )
    v7 = 2;
  else
    v7 = KfRaiseIrql(2u);
  *a2 = v7;
  if ( !KeTryToAcquireSpinLockAtDpcLevel(v3) )
  {
LABEL_6:
    if ( *a2 != 2 )
      KeLowerIrql(*a2);
    return 0;
  }
  v9 = (_QWORD *)a1[4];
  v10 = &v9[512 * ndisMaxNumberOfProcessors];
  while ( v9 != v10 )
  {
    if ( *v9 )
    {
      KeReleaseSpinLockFromDpcLevel(v3);
      goto LABEL_6;
    }
    v9 += 512;
  }
  result = 1;
  a1[3] = (KSPIN_LOCK)KeGetCurrentThread();
  a2[1] = 4;
  return result;
}
