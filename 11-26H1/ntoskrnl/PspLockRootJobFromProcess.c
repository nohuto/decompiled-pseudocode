/*
 * XREFs of PspLockRootJobFromProcess @ 0x1409FF4D8
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140AE4DDC (PspSendProcessNotificationToJobChain.c)
 * Callees:
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspLockRootJobFromProcess(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 i; // [rsp+50h] [rbp+18h]

  v9 = *(_QWORD *)(a1 + 672);
  v6 = a2;
  for ( i = *(_QWORD *)(v9 + 1312); ; i = *(_QWORD *)(v9 + 1312) )
  {
    PspLockJobExclusive(i, a2);
    if ( v9 == *(_QWORD *)(a1 + 672) && i == *(_QWORD *)(v9 + 1312) )
      break;
    PspUnlockJobExclusive(i, v6);
    a2 = v6;
    v9 = *(_QWORD *)(a1 + 672);
  }
  *a3 = v9;
  result = i;
  *a4 = i;
  return result;
}
