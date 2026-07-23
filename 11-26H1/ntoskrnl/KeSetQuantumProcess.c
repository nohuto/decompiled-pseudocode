/*
 * XREFs of KeSetQuantumProcess @ 0x1402028D4
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140A94A08 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x140203410 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  __int64 v4; // rdx
  _QWORD *i; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( *(_BYTE *)(a1 + 145) != a2 )
  {
    KiAcquireProcessLockExclusive(a1, &v6);
    *(_BYTE *)(a1 + 145) = a2;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    LOBYTE(v4) = v6;
    KiReleaseProcessLockExclusive(a1, v4);
  }
}
