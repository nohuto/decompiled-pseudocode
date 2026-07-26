/*
 * XREFs of NdisTryAcquireRWLockRead @ 0x1400C5EA0
 * Callers:
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C5C20 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NdisTryAcquireRWLockRead(__int64 a1, KIRQL *a2, char a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v7; // al
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 16);
  if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 16)) )
    return 0;
  if ( (a3 & 1) != 0 )
    v7 = 2;
  else
    v7 = KfRaiseIrql(2u);
  *a2 = v7;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = KeGetPcr()->Prcb.Number << 12;
  v10 = (unsigned int)v9;
  ++*(_QWORD *)(v9 + v8);
  _InterlockedOr(v12, 0);
  if ( !KeTestSpinLock(v3) )
  {
    --*(_QWORD *)(v10 + v8);
    if ( *a2 != 2 )
      KeLowerIrql(*a2);
    return 0;
  }
  a2[1] = 3;
  return 1;
}
